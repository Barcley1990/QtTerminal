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

	QString m_port;
	QString m_baud;
	qint32 m_baudrate;
	QString m_dbits;
	QByteArray m_qb;

	bool m_CR;
	bool m_LF;
	bool m_CRLF;

signals:


public slots :
	void scanPortNames();
	void choosePort(int);
	void chooseBaud(int);
	void chooseDataBits(int);
	void configure();
	void disconnect();

	void CR_Checkbox(int);
	void LF_Checkbox(int);
	void CRLF_Checkbox(int);

	void WriteToSerial();
	void ReadFromSerial();
	void WriteToSlider(QString);
	void SendSlider(int);

private:
	Ui::QtTerm_v2Class ui;
	QSerialPort *m_serial;

	QString m_dataToBeWritten;
	QString m_ledData;
	QString m_valueData;

};

#endif