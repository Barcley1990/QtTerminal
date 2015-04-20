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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtTerm_v2Class
{
public:
    QAction *actionQuit;
    QWidget *centralWidget;
    QPlainTextEdit *outputBox;
    QLineEdit *inputBox;
    QLabel *statusLabel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPushButton *ReScanButton;
    QComboBox *portName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *baudBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *dbitBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxCR;
    QCheckBox *checkBoxLF;
    QCheckBox *checkBoxCRLF;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *connectButton;
    QPushButton *disconnectButton;
    QPushButton *sendButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QPushButton *clearOutputButton;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QPushButton *clearInputButton;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *ledSlider;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_4;
    QSlider *BrightnessSlider;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menuBar;
    QMenu *menuMain;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtTerm_v2Class)
    {
        if (QtTerm_v2Class->objectName().isEmpty())
            QtTerm_v2Class->setObjectName(QStringLiteral("QtTerm_v2Class"));
        QtTerm_v2Class->setWindowModality(Qt::NonModal);
        QtTerm_v2Class->setEnabled(true);
        QtTerm_v2Class->resize(460, 320);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QtTerm_v2Class->sizePolicy().hasHeightForWidth());
        QtTerm_v2Class->setSizePolicy(sizePolicy);
        QtTerm_v2Class->setMinimumSize(QSize(460, 320));
        QtTerm_v2Class->setMaximumSize(QSize(460, 320));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        QtTerm_v2Class->setFont(font);
        QtTerm_v2Class->setWindowOpacity(1);
        QtTerm_v2Class->setStyleSheet(QLatin1String("QWidget{\n"
"	background: #323232;\n"
"}\n"
"\n"
"QPushButton{\n"
"	background: transparent;\n"
"	color: #dcdcdc;\n"
"	border: 2px solid #dcdcdc;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background: rgba(200,200,200,50);\n"
"}\n"
"QCheckBox{\n"
"	color: #dcdcdc;\n"
"}\n"
"QLabel{\n"
"	color: #dcdcdc;\n"
"}\n"
"QComboBox{\n"
"\n"
"	color: #white;\n"
"	background: white;\n"
" 	border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"text-color:white;\n"
"}\n"
"QComboBox QListView\n"
"{\n"
"    border-style: none;\n"
"    background-color: grey\n"
"}\n"
"\n"
"\n"
"QPlainTextEdit{\n"
"	background: white;\n"
"}\n"
"QTextEdit{\n"
"	background: white;\n"
"}\n"
"QLineEdit{\n"
"	background: white;\n"
"}"));
        QtTerm_v2Class->setTabShape(QTabWidget::Rounded);
        QtTerm_v2Class->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        actionQuit = new QAction(QtTerm_v2Class);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralWidget = new QWidget(QtTerm_v2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        outputBox = new QPlainTextEdit(centralWidget);
        outputBox->setObjectName(QStringLiteral("outputBox"));
        outputBox->setGeometry(QRect(10, 30, 231, 101));
        outputBox->setReadOnly(true);
        inputBox = new QLineEdit(centralWidget);
        inputBox->setObjectName(QStringLiteral("inputBox"));
        inputBox->setGeometry(QRect(10, 170, 231, 20));
        statusLabel = new QLabel(centralWidget);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setGeometry(QRect(10, 240, 221, 16));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(250, 10, 186, 243));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        ReScanButton = new QPushButton(layoutWidget);
        ReScanButton->setObjectName(QStringLiteral("ReScanButton"));

        horizontalLayout->addWidget(ReScanButton);

        portName = new QComboBox(layoutWidget);
        portName->setObjectName(QStringLiteral("portName"));

        horizontalLayout->addWidget(portName);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        baudBox = new QComboBox(layoutWidget);
        baudBox->setObjectName(QStringLiteral("baudBox"));

        horizontalLayout_3->addWidget(baudBox);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        dbitBox = new QComboBox(layoutWidget);
        dbitBox->setObjectName(QStringLiteral("dbitBox"));

        horizontalLayout_4->addWidget(dbitBox);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBoxCR = new QCheckBox(layoutWidget);
        checkBoxCR->setObjectName(QStringLiteral("checkBoxCR"));

        verticalLayout->addWidget(checkBoxCR);

        checkBoxLF = new QCheckBox(layoutWidget);
        checkBoxLF->setObjectName(QStringLiteral("checkBoxLF"));

        verticalLayout->addWidget(checkBoxLF);

        checkBoxCRLF = new QCheckBox(layoutWidget);
        checkBoxCRLF->setObjectName(QStringLiteral("checkBoxCRLF"));

        verticalLayout->addWidget(checkBoxCRLF);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        connectButton = new QPushButton(layoutWidget);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        horizontalLayout_2->addWidget(connectButton);

        disconnectButton = new QPushButton(layoutWidget);
        disconnectButton->setObjectName(QStringLiteral("disconnectButton"));

        horizontalLayout_2->addWidget(disconnectButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        sendButton = new QPushButton(layoutWidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        verticalLayout_2->addWidget(sendButton);


        verticalLayout_4->addLayout(verticalLayout_2);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 0, 211, 25));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        clearOutputButton = new QPushButton(layoutWidget1);
        clearOutputButton->setObjectName(QStringLiteral("clearOutputButton"));

        horizontalLayout_5->addWidget(clearOutputButton);

        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 140, 207, 25));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        clearInputButton = new QPushButton(layoutWidget2);
        clearInputButton->setObjectName(QStringLiteral("clearInputButton"));

        horizontalLayout_6->addWidget(clearInputButton);

        horizontalSpacer_2 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        ledSlider = new QLineEdit(centralWidget);
        ledSlider->setObjectName(QStringLiteral("ledSlider"));
        ledSlider->setGeometry(QRect(11, 219, 71, 20));
        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(100, 190, 128, 49));
        verticalLayout_5 = new QVBoxLayout(layoutWidget3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_7->addWidget(label_6);

        horizontalSpacer_4 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_7);

        BrightnessSlider = new QSlider(layoutWidget3);
        BrightnessSlider->setObjectName(QStringLiteral("BrightnessSlider"));
        BrightnessSlider->setMaximum(4065);
        BrightnessSlider->setSingleStep(10);
        BrightnessSlider->setPageStep(100);
        BrightnessSlider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(BrightnessSlider);

        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(11, 191, 74, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_8->addWidget(label_7);

        horizontalSpacer_3 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        QtTerm_v2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtTerm_v2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 460, 21));
        menuMain = new QMenu(menuBar);
        menuMain->setObjectName(QStringLiteral("menuMain"));
        QtTerm_v2Class->setMenuBar(menuBar);
        statusBar = new QStatusBar(QtTerm_v2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtTerm_v2Class->setStatusBar(statusBar);

        menuBar->addAction(menuMain->menuAction());
        menuMain->addAction(actionQuit);

        retranslateUi(QtTerm_v2Class);
        QObject::connect(inputBox, SIGNAL(returnPressed()), sendButton, SLOT(animateClick()));
        QObject::connect(checkBoxCR, SIGNAL(clicked(bool)), checkBoxLF, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxCR, SIGNAL(clicked(bool)), checkBoxCRLF, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxLF, SIGNAL(clicked(bool)), checkBoxCR, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxLF, SIGNAL(clicked(bool)), checkBoxCRLF, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxCRLF, SIGNAL(clicked(bool)), checkBoxCR, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxCRLF, SIGNAL(clicked(bool)), checkBoxLF, SLOT(setDisabled(bool)));
        QObject::connect(clearInputButton, SIGNAL(clicked(bool)), inputBox, SLOT(clear()));
        QObject::connect(clearOutputButton, SIGNAL(clicked(bool)), outputBox, SLOT(clear()));

        QMetaObject::connectSlotsByName(QtTerm_v2Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtTerm_v2Class)
    {
        QtTerm_v2Class->setWindowTitle(QApplication::translate("QtTerm_v2Class", "QtTerm_v2", 0));
        actionQuit->setText(QApplication::translate("QtTerm_v2Class", "Quit", 0));
        statusLabel->setText(QApplication::translate("QtTerm_v2Class", "TextLabel", 0));
        label_3->setText(QApplication::translate("QtTerm_v2Class", "Port", 0));
        ReScanButton->setText(QApplication::translate("QtTerm_v2Class", "ReScan", 0));
        label_4->setText(QApplication::translate("QtTerm_v2Class", "Baud Rate", 0));
        baudBox->clear();
        baudBox->insertItems(0, QStringList()
         << QApplication::translate("QtTerm_v2Class", "600", 0)
         << QApplication::translate("QtTerm_v2Class", "1200", 0)
         << QApplication::translate("QtTerm_v2Class", "2400", 0)
         << QApplication::translate("QtTerm_v2Class", "4800", 0)
         << QApplication::translate("QtTerm_v2Class", "9600", 0)
         << QApplication::translate("QtTerm_v2Class", "14400", 0)
         << QApplication::translate("QtTerm_v2Class", "19200", 0)
         << QApplication::translate("QtTerm_v2Class", "28800", 0)
         << QApplication::translate("QtTerm_v2Class", "56000", 0)
        );
        label_5->setText(QApplication::translate("QtTerm_v2Class", "Data bits", 0));
        dbitBox->clear();
        dbitBox->insertItems(0, QStringList()
         << QApplication::translate("QtTerm_v2Class", "5", 0)
         << QApplication::translate("QtTerm_v2Class", "6", 0)
         << QApplication::translate("QtTerm_v2Class", "7", 0)
         << QApplication::translate("QtTerm_v2Class", "8", 0)
        );
        checkBoxCR->setText(QApplication::translate("QtTerm_v2Class", "CR", 0));
        checkBoxLF->setText(QApplication::translate("QtTerm_v2Class", "LF", 0));
        checkBoxCRLF->setText(QApplication::translate("QtTerm_v2Class", "CR + LF", 0));
        connectButton->setText(QApplication::translate("QtTerm_v2Class", "Connect", 0));
        disconnectButton->setText(QApplication::translate("QtTerm_v2Class", "Discnonnect", 0));
        sendButton->setText(QApplication::translate("QtTerm_v2Class", "Send", 0));
        label->setText(QApplication::translate("QtTerm_v2Class", "Received", 0));
        clearOutputButton->setText(QApplication::translate("QtTerm_v2Class", "CLEAR", 0));
        label_2->setText(QApplication::translate("QtTerm_v2Class", "Transmit", 0));
        clearInputButton->setText(QApplication::translate("QtTerm_v2Class", "CLEAR", 0));
        ledSlider->setText(QString());
        label_6->setText(QApplication::translate("QtTerm_v2Class", "Brightness", 0));
        label_7->setText(QApplication::translate("QtTerm_v2Class", "LED", 0));
        menuMain->setTitle(QApplication::translate("QtTerm_v2Class", "Main", 0));
    } // retranslateUi

};

namespace Ui {
    class QtTerm_v2Class: public Ui_QtTerm_v2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTERM_V2_H
