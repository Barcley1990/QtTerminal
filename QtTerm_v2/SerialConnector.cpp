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
	m_slider5_value = "0000";
	m_slider6_value = "0000";
	m_slider7_value = "0000";
	m_slider8_value = "0000";

	// Settings Tag
	connect(ui.ReScanButton, SIGNAL(clicked()), this, SLOT(scanPortNames()));		// Scan Portnames (scan Button)
	connect(ui.portName, SIGNAL(activated(int)), this, SLOT(choosePort(int)));		// choose Port (dropdown)
	connect(ui.baudBox, SIGNAL(activated(int)), this, SLOT(chooseBaud(int)));		// choose Baud (dropdown)
	connect(ui.connectButton, SIGNAL(clicked()), this, SLOT(configure()));			// connect to Port (Pushbutton)

	connect(ui.disconnectButton, SIGNAL(clicked()), this, SLOT(disconnect()));		// disconnect from Port (Pushbutton)
	connect(m_serial, SIGNAL(readyRead()), this, SLOT(ReadFromSerial()));			// Read from Serial
	connect(ui.sendButton, SIGNAL(clicked()), this, SLOT(getDataFromInputBox()));	// Write to Serial
	connect(ui.resetButton, SIGNAL(clicked()), this, SLOT(Reset()));				// Write "RESET" to Serial
	
	connect(ui.checkBoxCR, SIGNAL(stateChanged(int)), this, SLOT(CR_Checkbox(int)));		// CR Checkbox
	connect(ui.checkBoxLF, SIGNAL(stateChanged(int)), this, SLOT(LF_Checkbox(int)));		// CR Checkbox
	connect(ui.checkBoxCRLF, SIGNAL(stateChanged(int)), this, SLOT(CRLF_Checkbox(int)));	// CR Checkbox
	
	// Slider Tab
	connect(ui.cb_led1, SIGNAL(stateChanged(int)), this, SLOT(LED1_Checkbox(int)));
	connect(ui.cb_led2, SIGNAL(stateChanged(int)), this, SLOT(LED2_Checkbox(int)));
	connect(ui.cb_led3, SIGNAL(stateChanged(int)), this, SLOT(LED3_Checkbox(int)));
	connect(ui.cb_led4, SIGNAL(stateChanged(int)), this, SLOT(LED4_Checkbox(int)));
	connect(ui.cb_led5, SIGNAL(stateChanged(int)), this, SLOT(LED5_Checkbox(int)));
	connect(ui.cb_led6, SIGNAL(stateChanged(int)), this, SLOT(LED6_Checkbox(int)));
	connect(ui.cb_led7, SIGNAL(stateChanged(int)), this, SLOT(LED7_Checkbox(int)));
	connect(ui.cb_led8, SIGNAL(stateChanged(int)), this, SLOT(LED8_Checkbox(int)));
	
	connect(ui.sl_led1, SIGNAL(valueChanged(int)), this, SLOT(LED1_Slider(int)));
	connect(ui.sl_led2, SIGNAL(valueChanged(int)), this, SLOT(LED2_Slider(int)));
	connect(ui.sl_led3, SIGNAL(valueChanged(int)), this, SLOT(LED3_Slider(int)));
	connect(ui.sl_led4, SIGNAL(valueChanged(int)), this, SLOT(LED4_Slider(int)));
	connect(ui.sl_led5, SIGNAL(valueChanged(int)), this, SLOT(LED5_Slider(int)));
	connect(ui.sl_led6, SIGNAL(valueChanged(int)), this, SLOT(LED6_Slider(int)));
	connect(ui.sl_led7, SIGNAL(valueChanged(int)), this, SLOT(LED7_Slider(int)));
	connect(ui.sl_led8, SIGNAL(valueChanged(int)), this, SLOT(LED8_Slider(int)));

	// Slider for Polarisation
	connect(ui.poly_all, SIGNAL(valueChanged(int)), this, SLOT(poly_Slider(int)));
	connect(ui.nonpoly_all, SIGNAL(valueChanged(int)), this, SLOT(non_poly_Slider(int)));

	// Halo Tab
	connect(ui.line_LED_1, SIGNAL(returnPressed()), this, SLOT(GetDataFromLine_1()));
	connect(ui.line_LED_2, SIGNAL(returnPressed()), this, SLOT(GetDataFromLine_2()));
	connect(ui.line_LED_3, SIGNAL(returnPressed()), this, SLOT(GetDataFromLine_3()));
	connect(ui.line_LED_4, SIGNAL(returnPressed()), this, SLOT(GetDataFromLine_4()));
	connect(ui.line_LED_5, SIGNAL(returnPressed()), this, SLOT(GetDataFromLine_5()));
	connect(ui.line_LED_6, SIGNAL(returnPressed()), this, SLOT(GetDataFromLine_6()));
	connect(ui.line_LED_7, SIGNAL(returnPressed()), this, SLOT(GetDataFromLine_7()));
	connect(ui.line_LED_8, SIGNAL(returnPressed()), this, SLOT(GetDataFromLine_8()));

	connect(ui.but_LED_1, SIGNAL(clicked()), this, SLOT(GetDataFromLine_1()));
	connect(ui.but_LED_2, SIGNAL(clicked()), this, SLOT(GetDataFromLine_2()));
	connect(ui.but_LED_3, SIGNAL(clicked()), this, SLOT(GetDataFromLine_3()));
	connect(ui.but_LED_4, SIGNAL(clicked()), this, SLOT(GetDataFromLine_4()));
	connect(ui.but_LED_5, SIGNAL(clicked()), this, SLOT(GetDataFromLine_5()));
	connect(ui.but_LED_6, SIGNAL(clicked()), this, SLOT(GetDataFromLine_6()));
	connect(ui.but_LED_7, SIGNAL(clicked()), this, SLOT(GetDataFromLine_7()));
	connect(ui.but_LED_8, SIGNAL(clicked()), this, SLOT(GetDataFromLine_8()));

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
	// remove old items
	qDebug() << "port Items:" << ui.portName->count();
	for (int i=ui.portName->count(); i >= 0; i--)
	{
		qDebug() << "item removed: " << "i =" << i;
		ui.portName->removeItem(i);
	}
	qDebug() << "port Items:" << ui.portName->count();
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
		ui.but_LED_1->setChecked(true);
		m_led1 = true;
		QString newData = led_str.append("01").append(value_str).append(m_slider1_value);
		if (m_serial && !m_serial->isOpen())
			return;
		WriteToSerial(newData);
	}
	else
	{
		ui.but_LED_1->setChecked(false);
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
		ui.but_LED_2->setChecked(true);
		m_led2 = true;
		
		QString newData = led_str.append("02").append(value_str).append(m_slider2_value);
		if (m_serial && !m_serial->isOpen())
			return;
		WriteToSerial(newData);
	}
	else
	{
		ui.but_LED_2->setChecked(false);
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
		ui.but_LED_3->setChecked(true);
		m_led3 = true;

		QString newData = led_str.append("03").append(value_str).append(m_slider3_value);
		if (m_serial && !m_serial->isOpen())
			return;
		WriteToSerial(newData);
	}
	else
	{
		ui.but_LED_3->setChecked(false);
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
		ui.but_LED_4->setChecked(true);
		m_led4 = true;

		QString newData = led_str.append("04").append(value_str).append(m_slider4_value);
		if (m_serial && !m_serial->isOpen())
			return;
		WriteToSerial(newData);
	}
	else
	{
		ui.but_LED_4->setChecked(false);
		m_led4 = false;
		WriteToSerial("LED04VALUE0000");
	}
}
void SerialConnector::LED5_Checkbox(int arg)
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	int led5 = arg;
	if (led5 == 2) // if checked
	{
		ui.but_LED_5->setChecked(true);
		m_led5 = true;

		QString newData = led_str.append("05").append(value_str).append(m_slider5_value);
		if (m_serial && !m_serial->isOpen())
			return;
		WriteToSerial(newData);
	}
	else
	{
		ui.but_LED_5->setChecked(false);
		m_led5 = false;
		WriteToSerial("LED05VALUE0000");
	}
}
void SerialConnector::LED6_Checkbox(int arg)
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	int led6 = arg;
	if (led6 == 2) // if checked
	{
		ui.but_LED_6->setChecked(true);
		m_led6 = true;

		QString newData = led_str.append("06").append(value_str).append(m_slider6_value);
		if (m_serial && !m_serial->isOpen())
			return;
		WriteToSerial(newData);
	}
	else
	{
		ui.but_LED_6->setChecked(false);
		m_led6 = false;
		WriteToSerial("LED06VALUE0000");
	}
}
void SerialConnector::LED7_Checkbox(int arg)
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	int led7 = arg;
	if (led7 == 2) // if checked
	{
		ui.but_LED_7->setChecked(true);
		m_led7 = true;

		QString newData = led_str.append("07").append(value_str).append(m_slider7_value);
		if (m_serial && !m_serial->isOpen())
			return;
		WriteToSerial(newData);
	}
	else
	{
		ui.but_LED_7->setChecked(false);
		m_led7 = false;
		WriteToSerial("LED07VALUE0000");
	}
}
void SerialConnector::LED8_Checkbox(int arg)
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	int led8 = arg;
	if (led8 == 2) // if checked
	{
		ui.but_LED_8->setChecked(true);
		m_led8 = true;

		QString newData = led_str.append("08").append(value_str).append(m_slider8_value);
		if (m_serial && !m_serial->isOpen())
			return;
		WriteToSerial(newData);
	}
	else
	{
		ui.but_LED_8->setChecked(false);
		m_led8 = false;
		WriteToSerial("LED08VALUE0000");
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
void SerialConnector::LED5_Slider(int arg)
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	m_slider5_value = QString::number(arg);
	while (m_slider5_value.length() < 4)
	{
		qDebug() << "zu klein" << endl;
		m_slider5_value.insert(0, QString("0"));
	}
	QString newData = led_str.append("05").append(value_str).append(m_slider5_value);
	if (m_led5)
	{
		if (m_serial && !m_serial->isOpen())
			return;
		WriteToSerial(newData);
	}
	else
		return;
}
void SerialConnector::LED6_Slider(int arg)
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	m_slider6_value = QString::number(arg);
	while (m_slider6_value.length() < 4)
	{
		qDebug() << "zu klein" << endl;
		m_slider6_value.insert(0, QString("0"));
	}
	QString newData = led_str.append("06").append(value_str).append(m_slider6_value);
	if (m_led6)
	{
		if (m_serial && !m_serial->isOpen())
			return;
		WriteToSerial(newData);
	}
	else
		return;
}
void SerialConnector::LED7_Slider(int arg)
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	m_slider7_value = QString::number(arg);
	while (m_slider7_value.length() < 4)
	{
		qDebug() << "zu klein" << endl;
		m_slider7_value.insert(0, QString("0"));
	}
	QString newData = led_str.append("07").append(value_str).append(m_slider7_value);
	if (m_led7)
	{
		if (m_serial && !m_serial->isOpen())
			return;
		WriteToSerial(newData);
	}
	else
		return;
}
void SerialConnector::LED8_Slider(int arg)
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	m_slider8_value = QString::number(arg);
	while (m_slider8_value.length() < 4)
	{
		qDebug() << "zu klein" << endl;
		m_slider8_value.insert(0, QString("0"));
	}
	QString newData = led_str.append("08").append(value_str).append(m_slider8_value);
	if (m_led8)
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
	QString yesPoly = "YPOLY";
	m_poly_Slider_value = QString::number(arg);
	if (m_serial && !m_serial->isOpen())
		return;
	WriteToSerial(yesPoly.append(m_poly_Slider_value));
}
void SerialConnector::non_poly_Slider(int arg)
{
	QString noPoly = "NPOLY";
	m_non_poly_Slider_value = QString::number(arg);
	if (m_serial && !m_serial->isOpen())
		return;
	WriteToSerial(noPoly.append(m_non_poly_Slider_value));
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

void SerialConnector::GetDataFromLine_1()
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	if (m_serial && !m_serial->isOpen())
		return;
	QString Line1 = ui.line_LED_1->displayText();
	int value = Line1.toInt();
	while (Line1.length() < 4)
	{
		qDebug() << "zu klein" << endl;
		Line1.insert(0, QString("0"));
	}
	qDebug() << "String to Int " << Line1 << " -> " << Line1;
	if (value > 0)
	{
		ui.but_LED_1->setChecked(true);
		qDebug() << "butten_set_true" << endl;
	}
	else
	{
		ui.but_LED_1->setChecked(false);
		qDebug() << "butten_set_false" << endl;
	}
	QString newData = led_str.append("01").append(value_str).append(Line1);
	if (m_serial && !m_serial->isOpen())
		return;
	WriteToSerial(newData);
}
void SerialConnector::GetDataFromLine_2()
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	if (m_serial && !m_serial->isOpen())
		return;
	QString Line2 = ui.line_LED_2->displayText();
	int value = Line2.toInt();
	while (Line2.length() < 4)
	{
		qDebug() << "zu klein" << endl;
		Line2.insert(0, QString("0"));
	}
	qDebug() << "String to Int " << Line2 << " -> " << Line2;
	if (value > 0)
	{
		ui.but_LED_2->setChecked(true);
		qDebug() << "butten_set_true" << endl;
	}
	else
	{
		ui.but_LED_2->setChecked(false);
		qDebug() << "butten_set_false" << endl;
	}
	QString newData = led_str.append("02").append(value_str).append(Line2);
	if (m_serial && !m_serial->isOpen())
		return;
	WriteToSerial(newData);
}
void SerialConnector::GetDataFromLine_3()
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	if (m_serial && !m_serial->isOpen())
		return;
	QString Line3 = ui.line_LED_3->displayText();
	int value = Line3.toInt();
	while (Line3.length() < 4)
	{
		qDebug() << "zu klein" << endl;
		Line3.insert(0, QString("0"));
	}
	qDebug() << "String to Int " << Line3 << " -> " << Line3;
	if (value > 0)
	{
		ui.but_LED_3->setChecked(true);
		qDebug() << "butten_set_true" << endl;
	}
	else
	{
		ui.but_LED_3->setChecked(false);
		qDebug() << "butten_set_false" << endl;
	}
	QString newData = led_str.append("03").append(value_str).append(Line3);
	if (m_serial && !m_serial->isOpen())
		return;
	WriteToSerial(newData);
}
void SerialConnector::GetDataFromLine_4()
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	if (m_serial && !m_serial->isOpen())
		return;
	QString Line4 = ui.line_LED_4->displayText();
	int value = Line4.toInt();
	while (Line4.length() < 4)
	{
		qDebug() << "zu klein" << endl;
		Line4.insert(0, QString("0"));
	}
	qDebug() << "String to Int " << Line4 << " -> " << Line4;
	if (value > 0)
	{
		ui.but_LED_4->setChecked(true);
		qDebug() << "butten_set_true" << endl;
	}
	else
	{
		ui.but_LED_4->setChecked(false);
		qDebug() << "butten_set_false" << endl;
	}
	QString newData = led_str.append("04").append(value_str).append(Line4);
	if (m_serial && !m_serial->isOpen())
		return;
	WriteToSerial(newData);
}
void SerialConnector::GetDataFromLine_5()
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	if (m_serial && !m_serial->isOpen())
		return;
	QString Line5 = ui.line_LED_5->displayText();
	int value = Line5.toInt();
	while (Line5.length() < 4)
	{
		qDebug() << "zu klein" << endl;
		Line5.insert(0, QString("0"));
	}
	qDebug() << "String to Int " << Line5 << " -> " << Line5;
	if (value > 0)
	{
		ui.but_LED_5->setChecked(true);
		qDebug() << "butten_set_true" << endl;
	}
	else
	{
		ui.but_LED_5->setChecked(false);
		qDebug() << "butten_set_false" << endl;
	}
	QString newData = led_str.append("05").append(value_str).append(Line5);
	if (m_serial && !m_serial->isOpen())
		return;
	WriteToSerial(newData);
}
void SerialConnector::GetDataFromLine_6()
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	if (m_serial && !m_serial->isOpen())
		return;
	QString Line6 = ui.line_LED_6->displayText();
	int value = Line6.toInt();
	while (Line6.length() < 4)
	{
		qDebug() << "zu klein" << endl;
		Line6.insert(0, QString("0"));
	}
	qDebug() << "String to Int " << Line6 << " -> " << Line6;
	if (value > 0)
	{
		ui.but_LED_6->setChecked(true);
		qDebug() << "butten_set_true" << endl;
	}
	else
	{
		ui.but_LED_6->setChecked(false);
		qDebug() << "butten_set_false" << endl;
	}
	QString newData = led_str.append("06").append(value_str).append(Line6);
	if (m_serial && !m_serial->isOpen())
		return;
	WriteToSerial(newData);
}
void SerialConnector::GetDataFromLine_7()
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	if (m_serial && !m_serial->isOpen())
		return;
	QString Line7 = ui.line_LED_7->displayText();
	int value = Line7.toInt();
	while (Line7.length() < 4)
	{
		qDebug() << "zu klein" << endl;
		Line7.insert(0, QString("0"));
	}
	qDebug() << "String to Int " << Line7 << " -> " << Line7;
	if (value > 0)
	{
		ui.but_LED_7->setChecked(true);
		qDebug() << "butten_set_true" << endl;
	}
	else
	{
		ui.but_LED_7->setChecked(false);
		qDebug() << "butten_set_false" << endl;
	}
	QString newData = led_str.append("07").append(value_str).append(Line7);
	if (m_serial && !m_serial->isOpen())
		return;
	WriteToSerial(newData);
}
void SerialConnector::GetDataFromLine_8()
{
	QString led_str = "LED";
	QString value_str = "VALUE";
	if (m_serial && !m_serial->isOpen())
		return;
	QString Line8 = ui.line_LED_8->displayText();
	int value = Line8.toInt();
	while (Line8.length() < 4)
	{
		qDebug() << "zu klein" << endl;
		Line8.insert(0, QString("0"));
	}
	qDebug() << "String to Int " << Line8 << " -> " << Line8;
	if (value > 0)
	{
		ui.but_LED_8->setChecked(true);
		qDebug() << "butten_set_true" << endl;
	}
	else
	{
		ui.but_LED_8->setChecked(false);
		qDebug() << "butten_set_false" << endl;
	}
	QString newData = led_str.append("08").append(value_str).append(Line8);
	if (m_serial && !m_serial->isOpen())
		return;
	WriteToSerial(newData);
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