#include "SerialConnector.h"

SerialConnector::SerialConnector(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);
	m_serial = new QSerialPort();
	
	// default values
	scanPortNames();
	ui.baudBox->setCurrentIndex(4);
	ui.statusLabel->setText("Disconnected");
	m_CR = false;
	m_LF = false;
	m_CRLF = false;
	m_port = "";
	m_baudrate = 9600;
	m_slider1_value = "0000";
	m_slider2_value = "0000";
	m_slider3_value = "0000";
	m_slider4_value = "0000";


	connect(ui.ReScanButton, SIGNAL(clicked()), this, SLOT(scanPortNames()));		// Scan Portnames (scan Button)
	connect(ui.portName, SIGNAL(activated(int)), this, SLOT(choosePort(int)));		// choose Port (dropdown)
	connect(ui.baudBox, SIGNAL(activated(int)), this, SLOT(chooseBaud(int)));		// choose Baud (dropdown)
	connect(ui.connectButton, SIGNAL(clicked()), this, SLOT(configure()));			// connect to Port (Pushbutton)

	connect(ui.disconnectButton, SIGNAL(clicked()), this, SLOT(disconnect()));		// disconnect from Port (Pushbutton)
	connect(m_serial, SIGNAL(readyRead()), this, SLOT(ReadFromSerial()));			// Read from Serial
	connect(ui.sendButton, SIGNAL(clicked()), this, SLOT(getDataFromInputBox()));	// Write to Serial
	connect(ui.resetButton, SIGNAL(clicked()), this, SLOT(Reset()));				// Write "RESET" to Serial

	connect(ui.ledSlider, SIGNAL(textEdited(QString)), this, SLOT(WriteToSlider(QString)));
	connect(ui.BrightnessSlider, SIGNAL(valueChanged(int)), this, SLOT(SendSlider(int)));
	
	connect(ui.checkBoxCR, SIGNAL(stateChanged(int)), this, SLOT(CR_Checkbox(int)));		// CR Checkbox
	connect(ui.checkBoxLF, SIGNAL(stateChanged(int)), this, SLOT(LF_Checkbox(int)));		// CR Checkbox
	connect(ui.checkBoxCRLF, SIGNAL(stateChanged(int)), this, SLOT(CRLF_Checkbox(int)));	// CR Checkbox
	
	connect(ui.cb_led1, SIGNAL(stateChanged(int)), this, SLOT(LED1_Checkbox(int)));
	connect(ui.cb_led2, SIGNAL(stateChanged(int)), this, SLOT(LED2_Checkbox(int)));
	connect(ui.cb_led3, SIGNAL(stateChanged(int)), this, SLOT(LED3_Checkbox(int)));
	connect(ui.cb_led4, SIGNAL(stateChanged(int)), this, SLOT(LED4_Checkbox(int)));
	connect(ui.sl_led1, SIGNAL(valueChanged(int)), this, SLOT(LED1_Slider(int)));
	connect(ui.sl_led2, SIGNAL(valueChanged(int)), this, SLOT(LED2_Slider(int)));
	connect(ui.sl_led3, SIGNAL(valueChanged(int)), this, SLOT(LED3_Slider(int)));
	connect(ui.sl_led4, SIGNAL(valueChanged(int)), this, SLOT(LED4_Slider(int)));

	// Slider for Polarisation
	connect(ui.poly_all, SIGNAL(valueChanged(int)), this, SLOT(poly_Slider(int)));
	connect(ui.nonpoly_all, SIGNAL(valueChanged(int)), this, SLOT(non_poly_Slider(int)));

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

void SerialConnector::LED1_Checkbox(int arg)
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	int led1 = arg;
	if (led1 == 2) // if checked
	{
		m_led1 = true;
		QString newData = led_str.append("01").append(value_str).append(m_slider1_value);
		if (m_serial && !m_serial->isOpen())
			return;
		WriteToSerial(newData);
	}
	else
	{
		m_led1 = false;
		WriteToSerial("LED01VALUE0000");
	}
		
}
void SerialConnector::LED2_Checkbox(int arg)
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	int led2 = arg;
	if (led2 == 2) // if checked
	{
		m_led2 = true;
		
		QString newData = led_str.append("02").append(value_str).append(m_slider2_value);
		if (m_serial && !m_serial->isOpen())
			return;
		WriteToSerial(newData);
	}
	else
	{
		m_led2 = false;
		WriteToSerial("LED02VALUE0000");
	}
}
void SerialConnector::LED3_Checkbox(int arg)
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	int led3 = arg;
	if (led3 == 2) // if checked
	{
		m_led3 = true;

		QString newData = led_str.append("03").append(value_str).append(m_slider3_value);
		if (m_serial && !m_serial->isOpen())
			return;
		WriteToSerial(newData);
	}
	else
	{
		m_led3 = false;
		WriteToSerial("LED03VALUE0000");
	}
}
void SerialConnector::LED4_Checkbox(int arg)
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	int led4 = arg;
	if (led4 == 2) // if checked
	{
		m_led4 = true;

		QString newData = led_str.append("04").append(value_str).append(m_slider4_value);
		if (m_serial && !m_serial->isOpen())
			return;
		WriteToSerial(newData);
	}
	else
	{
		m_led4 = false;
		WriteToSerial("LED04VALUE0000");
	}
}
void SerialConnector::Reset()
{
	WriteToSerial("RESET");
}

void SerialConnector::LED1_Slider(int arg)
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	m_slider1_value = QString::number(arg);
	while (m_slider1_value.length() < 4)
	{
		qDebug() << "zu klein" << endl;
		m_slider1_value.insert(0, QString("0"));
	}
	QString newData = led_str.append("01").append(value_str).append(m_slider1_value);
	
	if (m_led1)
	{
		if (m_serial && !m_serial->isOpen())
			return;
		WriteToSerial(newData);
	}
	else
		return;
			
}
void SerialConnector::LED2_Slider(int arg)
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	m_slider2_value = QString::number(arg);
	while (m_slider2_value.length() < 4)
	{
		qDebug() << "zu klein" << endl;
		m_slider2_value.insert(0, QString("0"));
	}
	QString newData = led_str.append("02").append(value_str).append(m_slider2_value);	
	if (m_led2)
	{
		if (m_serial && !m_serial->isOpen())
			return;
		WriteToSerial(newData);
	}
	else
		return;
}
void SerialConnector::LED3_Slider(int arg)
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	m_slider3_value = QString::number(arg);
	while (m_slider3_value.length() < 4)
	{
		qDebug() << "zu klein" << endl;
		m_slider3_value.insert(0, QString("0"));
	}
	QString newData = led_str.append("03").append(value_str).append(m_slider3_value);
	if (m_led3)
	{
		if (m_serial && !m_serial->isOpen())
			return;
		WriteToSerial(newData);
	}
	else
		return;
}
void SerialConnector::LED4_Slider(int arg)
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	m_slider4_value = QString::number(arg);
	while (m_slider4_value.length() < 4)
	{
		qDebug() << "zu klein" << endl;
		m_slider4_value.insert(0, QString("0"));
	}
	QString newData = led_str.append("04").append(value_str).append(m_slider4_value);
	if (m_led4)
	{
		if (m_serial && !m_serial->isOpen())
			return;
		WriteToSerial(newData);
	}
	else
		return;
}

void SerialConnector::poly_Slider(int arg)
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	m_poly_Slider_value = QString::number(arg);
	while (m_poly_Slider_value.length() < 4)
	{
		qDebug() << "zu klein" << endl;
		m_poly_Slider_value.insert(0, QString("0"));
	}
	if (m_serial && !m_serial->isOpen())
		return;
	QString newData = led_str.append("01").append(value_str).append(m_poly_Slider_value);
	
	WriteToSerial(newData);	

	WriteToSerial(newData.replace(3, 2,"02"));
	
	WriteToSerial(newData.replace(3, 2, "03"));

	WriteToSerial(newData.replace(3, 2, "04"));
}


void SerialConnector::non_poly_Slider(int arg)
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	m_non_poly_Slider_value = QString::number(arg);
	while (m_non_poly_Slider_value.length() < 4)
	{
		qDebug() << "zu klein" << endl;
		m_non_poly_Slider_value.insert(0, QString("0"));
	}
	if (m_serial && !m_serial->isOpen())
		return;
	QString newData = led_str.append("05").append(value_str).append(m_non_poly_Slider_value);
	WriteToSerial(newData);
	WriteToSerial(newData.replace(3, 2, "06"));
	WriteToSerial(newData.replace(3, 2, "07"));
	WriteToSerial(newData.replace(3, 2, "08"));
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
	{
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


// Slot is called if send button was clicked.
void SerialConnector::getDataFromInputBox()
{
	if (m_serial && !m_serial->isOpen())
	return;
	QString inputString = ui.inputBox->displayText();

	int led = inputString.mid(3, 2).toInt();
	qDebug() << led << endl;
	int value = inputString.mid(10).toInt();
	qDebug() << value << endl;

	ui.sl_led1->QSlider::setSliderPosition(value);
	WriteToSerial(inputString);
}

// Slot to read from serial
void SerialConnector::ReadFromSerial()
{
	if (!m_serial)
		return;

	if (!m_serial->isOpen())
		return;

	int old_size = m_qb.size();
	m_qb.append(m_serial->readAll());
	int new_size = m_qb.size();

	if (m_qb.at(new_size - 1) == '\r')
	{
		QString text(m_qb);
		ui.outputBox->appendPlainText(text);
		m_qb.clear();
	}

}

// Slot is called if textfield was changed.
void SerialConnector::WriteToSlider(QString arg)
{
	m_ledData = arg;
	qDebug() << m_ledData << endl;
}

// Slot is called if slidervalue was changed.
void SerialConnector::SendSlider(int arg)
{
	m_valueData = QString::number(arg);
	qDebug() << m_valueData << endl;
	//QString zeroesAdded;
	while (m_valueData.length() < 4)
	{
		qDebug() << "zu klein" << endl;
		m_valueData.insert(0, QString("0"));
	}
	
	QString led = "LED";
	QString value = "VALUE";
	QString newData = led.append(m_ledData).append(value).append(m_valueData);
	qDebug() << newData << endl;

	if (m_serial && !m_serial->isOpen())
		return;
	WriteToSerial(newData);
}

// Memberfunction to write to Serial.
void SerialConnector::WriteToSerial(QString data)
{
	qDebug() <<"Data to send: " << data << endl;
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
		QThread::msleep(100);
		qDebug() << "Data sended: " << qb << endl;
	}
	else
		qDebug() << "Empty String" << endl;
}