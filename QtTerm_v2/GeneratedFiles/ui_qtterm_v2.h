/********************************************************************************
** Form generated from reading UI file 'qtterm_v2.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTTERM_V2_H
#define UI_QTTERM_V2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtTerm_v2Class
{
public:
    QWidget *centralWidget;
    QPlainTextEdit *outputBox;
    QLineEdit *inputBox;
    QLabel *statusLabel;
    QPushButton *ReScanButton;
    QPushButton *connectButton;
    QPushButton *disconnectButton;
    QPushButton *sendButton;
    QComboBox *portName;
    QComboBox *baudBox;
    QComboBox *dbitBox;
    QCheckBox *checkBoxCR;
    QCheckBox *checkBoxLF;
    QCheckBox *checkBoxCRLF;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtTerm_v2Class)
    {
        if (QtTerm_v2Class->objectName().isEmpty())
            QtTerm_v2Class->setObjectName(QStringLiteral("QtTerm_v2Class"));
        QtTerm_v2Class->resize(600, 400);
        centralWidget = new QWidget(QtTerm_v2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        outputBox = new QPlainTextEdit(centralWidget);
        outputBox->setObjectName(QStringLiteral("outputBox"));
        outputBox->setGeometry(QRect(40, 50, 231, 101));
        inputBox = new QLineEdit(centralWidget);
        inputBox->setObjectName(QStringLiteral("inputBox"));
        inputBox->setGeometry(QRect(40, 180, 231, 20));
        statusLabel = new QLabel(centralWidget);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setGeometry(QRect(50, 240, 451, 16));
        ReScanButton = new QPushButton(centralWidget);
        ReScanButton->setObjectName(QStringLiteral("ReScanButton"));
        ReScanButton->setGeometry(QRect(300, 50, 75, 23));
        connectButton = new QPushButton(centralWidget);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        connectButton->setGeometry(QRect(310, 160, 75, 23));
        disconnectButton = new QPushButton(centralWidget);
        disconnectButton->setObjectName(QStringLiteral("disconnectButton"));
        disconnectButton->setGeometry(QRect(390, 160, 75, 23));
        sendButton = new QPushButton(centralWidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(360, 190, 75, 23));
        portName = new QComboBox(centralWidget);
        portName->setObjectName(QStringLiteral("portName"));
        portName->setGeometry(QRect(400, 50, 69, 22));
        baudBox = new QComboBox(centralWidget);
        baudBox->setObjectName(QStringLiteral("baudBox"));
        baudBox->setGeometry(QRect(400, 80, 69, 22));
        dbitBox = new QComboBox(centralWidget);
        dbitBox->setObjectName(QStringLiteral("dbitBox"));
        dbitBox->setGeometry(QRect(400, 110, 69, 22));
        checkBoxCR = new QCheckBox(centralWidget);
        checkBoxCR->setObjectName(QStringLiteral("checkBoxCR"));
        checkBoxCR->setGeometry(QRect(300, 90, 70, 17));
        checkBoxLF = new QCheckBox(centralWidget);
        checkBoxLF->setObjectName(QStringLiteral("checkBoxLF"));
        checkBoxLF->setGeometry(QRect(300, 110, 70, 17));
        checkBoxCRLF = new QCheckBox(centralWidget);
        checkBoxCRLF->setObjectName(QStringLiteral("checkBoxCRLF"));
        checkBoxCRLF->setGeometry(QRect(300, 130, 70, 17));
        QtTerm_v2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtTerm_v2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        QtTerm_v2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtTerm_v2Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtTerm_v2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtTerm_v2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtTerm_v2Class->setStatusBar(statusBar);

        retranslateUi(QtTerm_v2Class);

        QMetaObject::connectSlotsByName(QtTerm_v2Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtTerm_v2Class)
    {
        QtTerm_v2Class->setWindowTitle(QApplication::translate("QtTerm_v2Class", "QtTerm_v2", 0));
        statusLabel->setText(QApplication::translate("QtTerm_v2Class", "TextLabel", 0));
        ReScanButton->setText(QApplication::translate("QtTerm_v2Class", "ReScan", 0));
        connectButton->setText(QApplication::translate("QtTerm_v2Class", "Connect", 0));
        disconnectButton->setText(QApplication::translate("QtTerm_v2Class", "Discnonnect", 0));
        sendButton->setText(QApplication::translate("QtTerm_v2Class", "Send", 0));
        baudBox->clear();
        baudBox->insertItems(0, QStringList()
         << QApplication::translate("QtTerm_v2Class", "9600", 0)
         << QApplication::translate("QtTerm_v2Class", "600", 0)
        );
        dbitBox->clear();
        dbitBox->insertItems(0, QStringList()
         << QApplication::translate("QtTerm_v2Class", "8", 0)
        );
        checkBoxCR->setText(QApplication::translate("QtTerm_v2Class", "CR", 0));
        checkBoxLF->setText(QApplication::translate("QtTerm_v2Class", "LF", 0));
        checkBoxCRLF->setText(QApplication::translate("QtTerm_v2Class", "CR + LF", 0));
    } // retranslateUi

};

namespace Ui {
    class QtTerm_v2Class: public Ui_QtTerm_v2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTERM_V2_H
