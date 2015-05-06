#ifndef SERIALCONNECTOR_H
#define SERIALCONNECTOR_H

#include <QtSerialPort/QtSerialPort>
#include <QtWidgets/QMainWindow>
#include <QtSerialPort/QSerialPortInfo>
#include <iostream>
#include <QIODevice>
#include <queue>
#include <qlist.h>

#include "ui_qtterm_v2.h"

class SerialConnector : public QMainWindow
{
	Q_OBJECT
public:
	SerialConnector(QWidget *parent = 0);
	~SerialConnector();
	void WriteToSerial(QString);

	QString m_port;
	QString m_baud;
	qint32 m_baudrate;
	QString m_dbits;
	QByteArray m_qb;

private slots :
	void scanPortNames();
	void choosePort(int);
	void chooseBaud(int);
	void chooseDataBits(int);
	void configure();
	void disconnect();
	void getDataFromInputBox();

	void CR_Checkbox(int);
	void LF_Checkbox(int);
	void CRLF_Checkbox(int);

	void LED1_Checkbox(int);
	void LED2_Checkbox(int);
	void LED3_Checkbox(int);
	void LED4_Checkbox(int);
	void LED1_Slider(int);
	void LED2_Slider(int);
	void LED3_Slider(int);
	void LED4_Slider(int);

	void poly_Slider(int);
	void non_poly_Slider(int);


	void ReadFromSerial();
	void WriteToSlider(QString);
	void SendSlider(int);

private:
	bool m_CR;
	bool m_LF;
	bool m_CRLF;

	bool m_led1;
	bool m_led2;
	bool m_led3;
	bool m_led4;

	QString m_slider1_value;
	QString m_slider2_value;
	QString m_slider3_value;
	QString m_slider4_value;

	QString m_poly_Slider_value;
	QString m_non_poly_Slider_value;

	Ui::QtTerm_v2Class ui;
	QSerialPort *m_serial;

	QString m_ledData;
	QString m_valueData;

};

#endif