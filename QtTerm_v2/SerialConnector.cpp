#include "SerialConnector.h"
//#define foreach Q_FOREACH

SerialConnector::SerialConnector(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);
	m_serial = new QSerialPort();
	m_CR = false;
	m_LF = false;
	m_CRLF = false;
	m_port = "";

	connect(ui.ReScanButton, SIGNAL(clicked()), this, SLOT(scanPortNames()));		// Scan Portnames (scan Button)
	connect(ui.portName, SIGNAL(activated(int)), this, SLOT(choosePort(int)));		// choose Port (dropdown)
	connect(ui.baudBox, SIGNAL(activated(int)), this, SLOT(chooseBaud(int)));		// choose Baud (dropdown)
	connect(ui.dbitBox, SIGNAL(activated(int)), this, SLOT(chooseDataBits(int)));	// choose DataBits (dropdown)
	connect(ui.connectButton, SIGNAL(clicked()), this, SLOT(configure()));			// connect to Port (Pushbutton)

	connect(ui.inputBox, SIGNAL(returnPressed()), ui.sendButton, SLOT(clicked()));	// return = click on SendButton

	//connect(ui.connectButton, SIGNAL(clicked()), ui.DisconnectButton, SLOT(setEnabled()));	
	//connect(ui.connectButton, SIGNAL(clicked()), ui.sendButton, SLOT(setEnabled()));

	connect(ui.disconnectButton, SIGNAL(clicked()), this, SLOT(disconnect()));		// disconnect from Port (Pushbutton)
	connect(m_serial, SIGNAL(readyRead()), this, SLOT(ReadFromSerial()));			// Read from Serial
	connect(ui.sendButton, SIGNAL(clicked()), this, SLOT(WriteToSerial()));			// Write to Serial
	
	connect(ui.checkBoxCR, SIGNAL(stateChanged(int)), this, SLOT(CR_Checkbox(int)));					// CR Checkbox
	connect(ui.checkBoxLF, SIGNAL(stateChanged(int)), this, SLOT(LF_Checkbox(int)));					// CR Checkbox
	connect(ui.checkBoxCRLF, SIGNAL(stateChanged(int)), this, SLOT(CRLF_Checkbox(int)));				// CR Checkbox
	

	//connect(ui.actionQuit, SIGNAL(triggered()), this, SLOT(disconnect()));			// quit

	// default values
	scanPortNames();
	ui.dbitBox->setCurrentIndex(3);
	ui.baudBox->setCurrentIndex(4);
	ui.statusLabel->setText("Disconnected");
}


SerialConnector::~SerialConnector()
{
	if (m_serial && m_serial->isOpen())
	{
		m_serial->close();
		ui.statusLabel->setText("Disconnected");
	}
	delete m_serial;
	m_serial = nullptr;
}

void SerialConnector::scanPortNames()
{
	QStringList stringlist;
	QList<QSerialPortInfo> ports = QSerialPortInfo::availablePorts();

	foreach(QSerialPortInfo item, ports)
	{
		stringlist.append(item.portName());
	}
	ui.portName->addItems(stringlist);
}

void SerialConnector::choosePort(int arg)
{
	m_port = ui.portName->itemText(arg);
	qDebug() << m_port;
}

void SerialConnector::chooseBaud(int arg)
{
	m_baud = ui.baudBox->itemText(arg);
	bool ok;
	m_baudrate = m_baud.toInt(&ok, 10);
	qDebug() << m_baudrate;
}

void SerialConnector::chooseDataBits(int arg)
{
	m_dbits = ui.dbitBox->itemText(arg);
	qDebug() << m_dbits;
}

void SerialConnector::CR_Checkbox(int arg)
{
	int CR = arg;
	qDebug() << "CR_Checkbox changed";
	if (CR == 2) // if checked
		m_CR = true;
	else
		m_CR = false;
}
void SerialConnector::LF_Checkbox(int arg)
{
	int LF = arg;
	qDebug() << "LF_Checkbox changed";
	if (LF == 2) // if checked
		m_LF = true;
	else
		m_LF = false;
}
void SerialConnector::CRLF_Checkbox(int arg)
{
	int CRLF = arg;
	qDebug() << "CRLF_Checkbox changed";
	if (CRLF == 2) // if checked
		m_CRLF = true;
	else
		m_CRLF = false;
}

void SerialConnector::configure()
{
	if (m_serial->isOpen())
		m_serial->close();

	// fallback
	if (m_port.isEmpty())
	{
		int idx = ui.portName->currentIndex();
		if (idx == -1)
			return;

		m_port = ui.portName->itemText(idx);
	}

	// set new port
	m_serial->setPortName(m_port);

	if (m_serial->open(QIODevice::ReadWrite))
	{//m_baudrate, QSerialPort::AllDirections
		m_serial->setBaudRate(m_baudrate, QSerialPort::AllDirections);
		m_serial->setDataBits(QSerialPort::Data8);
		m_serial->setParity(QSerialPort::NoParity);
		m_serial->setStopBits(QSerialPort::OneStop);
		m_serial->setFlowControl(QSerialPort::NoFlowControl);
		ui.connectButton->setText("Reconnect");
		ui.statusLabel->setText("Connection established");
	}
}

void SerialConnector::disconnect()
{
	if (m_serial->isOpen())
		m_serial->close();

	// reset connect button's text to Connect
	ui.connectButton->setText("Connect");
	ui.statusLabel->setText("Disconnected");
}

void SerialConnector::WriteToSerial()
{
	if (m_serial && !m_serial->isOpen())
		return;

	QString data = ui.inputBox->displayText();
	qDebug() << data << endl;
	if (!data.isEmpty())
	{
		QByteArray qb;
		qb.append(data);
		// check if EOL flag is set.
				if (m_CR)
				{
		qb.append('\r');
				}
		if (m_LF)
		{
		qb.append('\n');
		}
		if (m_CRLF)
		{
		qb.append('\r\n');
		}
		
		int complete_size = qb.size();
		int send = m_serial->write(qb);
		while (send < complete_size)
		{
			m_serial->waitForBytesWritten(1);
			qb.remove(0, send);
			send += m_serial->write(qb);
			qDebug() << "Retransmitted: " << send;
		}
	}
}

void SerialConnector::ReadFromSerial()
{
	qDebug() << "I was hit" << endl;
	if (!m_serial)
		return;

	qDebug() << "I was hit 2" << endl;
	if (!m_serial->isOpen())
		return;

	qDebug() << "I was hit 3" << endl;
	int old_size = m_qb.size();
	m_qb.append(m_serial->readAll());
	int new_size = m_qb.size();

	qDebug() << m_qb << endl;
	if (m_qb.at(new_size - 1) == '\r')
	{
		QString text(m_qb);
		ui.outputBox->appendPlainText(text);
		m_qb.clear();
	}

}