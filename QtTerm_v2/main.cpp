#include "SerialConnector.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SerialConnector w;
	w.show();
	return a.exec();
}
