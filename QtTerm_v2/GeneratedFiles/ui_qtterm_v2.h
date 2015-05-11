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
#include <QtWidgets/QTabWidget>
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
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QPushButton *clearOutputButton;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QPushButton *clearInputButton;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *ledSlider;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_4;
    QSlider *BrightnessSlider;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPushButton *ReScanButton;
    QComboBox *portName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *baudBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxCR;
    QCheckBox *checkBoxLF;
    QCheckBox *checkBoxCRLF;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *connectButton;
    QPushButton *disconnectButton;
    QPushButton *sendButton;
    QPushButton *resetButton;
    QWidget *tab_2;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *cb_led1;
    QCheckBox *cb_led2;
    QCheckBox *cb_led3;
    QCheckBox *cb_led4;
    QVBoxLayout *verticalLayout_7;
    QSlider *sl_led1;
    QSlider *sl_led2;
    QSlider *sl_led3;
    QSlider *sl_led4;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *cb_led5;
    QCheckBox *cb_led6;
    QCheckBox *cb_led7;
    QCheckBox *cb_led8;
    QVBoxLayout *verticalLayout_9;
    QSlider *sl_led5;
    QSlider *sl_led6;
    QSlider *sl_led7;
    QSlider *sl_led8;
    QWidget *tab_3;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_8;
    QSlider *poly_all;
    QLabel *label_9;
    QSlider *nonpoly_all;
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
        layoutWidget->setGeometry(QRect(20, 0, 211, 25));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        clearOutputButton = new QPushButton(layoutWidget);
        clearOutputButton->setObjectName(QStringLiteral("clearOutputButton"));

        horizontalLayout_5->addWidget(clearOutputButton);

        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 140, 207, 25));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        clearInputButton = new QPushButton(layoutWidget1);
        clearInputButton->setObjectName(QStringLiteral("clearInputButton"));

        horizontalLayout_6->addWidget(clearInputButton);

        horizontalSpacer_2 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        ledSlider = new QLineEdit(centralWidget);
        ledSlider->setObjectName(QStringLiteral("ledSlider"));
        ledSlider->setGeometry(QRect(11, 219, 71, 20));
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(100, 190, 128, 49));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_7->addWidget(label_6);

        horizontalSpacer_4 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_7);

        BrightnessSlider = new QSlider(layoutWidget2);
        BrightnessSlider->setObjectName(QStringLiteral("BrightnessSlider"));
        BrightnessSlider->setMaximum(4065);
        BrightnessSlider->setSingleStep(10);
        BrightnessSlider->setPageStep(100);
        BrightnessSlider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(BrightnessSlider);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(11, 191, 74, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_8->addWidget(label_7);

        horizontalSpacer_3 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(250, 0, 201, 281));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        layoutWidget_2 = new QWidget(tab);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 0, 181, 241));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
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
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        ReScanButton = new QPushButton(layoutWidget_2);
        ReScanButton->setObjectName(QStringLiteral("ReScanButton"));

        horizontalLayout->addWidget(ReScanButton);

        portName = new QComboBox(layoutWidget_2);
        portName->setObjectName(QStringLiteral("portName"));

        horizontalLayout->addWidget(portName);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        baudBox = new QComboBox(layoutWidget_2);
        baudBox->setObjectName(QStringLiteral("baudBox"));

        horizontalLayout_3->addWidget(baudBox);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBoxCR = new QCheckBox(layoutWidget_2);
        checkBoxCR->setObjectName(QStringLiteral("checkBoxCR"));

        verticalLayout->addWidget(checkBoxCR);

        checkBoxLF = new QCheckBox(layoutWidget_2);
        checkBoxLF->setObjectName(QStringLiteral("checkBoxLF"));

        verticalLayout->addWidget(checkBoxLF);

        checkBoxCRLF = new QCheckBox(layoutWidget_2);
        checkBoxCRLF->setObjectName(QStringLiteral("checkBoxCRLF"));

        verticalLayout->addWidget(checkBoxCRLF);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        connectButton = new QPushButton(layoutWidget_2);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        horizontalLayout_2->addWidget(connectButton);

        disconnectButton = new QPushButton(layoutWidget_2);
        disconnectButton->setObjectName(QStringLiteral("disconnectButton"));

        horizontalLayout_2->addWidget(disconnectButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        sendButton = new QPushButton(layoutWidget_2);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        verticalLayout_2->addWidget(sendButton);

        resetButton = new QPushButton(layoutWidget_2);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        verticalLayout_2->addWidget(resetButton);


        verticalLayout_4->addLayout(verticalLayout_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        layoutWidget4 = new QWidget(tab_2);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 10, 148, 204));
        verticalLayout_10 = new QVBoxLayout(layoutWidget4);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        cb_led1 = new QCheckBox(layoutWidget4);
        cb_led1->setObjectName(QStringLiteral("cb_led1"));

        verticalLayout_6->addWidget(cb_led1);

        cb_led2 = new QCheckBox(layoutWidget4);
        cb_led2->setObjectName(QStringLiteral("cb_led2"));

        verticalLayout_6->addWidget(cb_led2);

        cb_led3 = new QCheckBox(layoutWidget4);
        cb_led3->setObjectName(QStringLiteral("cb_led3"));

        verticalLayout_6->addWidget(cb_led3);

        cb_led4 = new QCheckBox(layoutWidget4);
        cb_led4->setObjectName(QStringLiteral("cb_led4"));

        verticalLayout_6->addWidget(cb_led4);


        horizontalLayout_9->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        sl_led1 = new QSlider(layoutWidget4);
        sl_led1->setObjectName(QStringLiteral("sl_led1"));
        sl_led1->setMaximum(4065);
        sl_led1->setPageStep(100);
        sl_led1->setOrientation(Qt::Horizontal);

        verticalLayout_7->addWidget(sl_led1);

        sl_led2 = new QSlider(layoutWidget4);
        sl_led2->setObjectName(QStringLiteral("sl_led2"));
        sl_led2->setMaximum(4065);
        sl_led2->setPageStep(100);
        sl_led2->setOrientation(Qt::Horizontal);

        verticalLayout_7->addWidget(sl_led2);

        sl_led3 = new QSlider(layoutWidget4);
        sl_led3->setObjectName(QStringLiteral("sl_led3"));
        sl_led3->setMaximum(4065);
        sl_led3->setPageStep(100);
        sl_led3->setOrientation(Qt::Horizontal);

        verticalLayout_7->addWidget(sl_led3);

        sl_led4 = new QSlider(layoutWidget4);
        sl_led4->setObjectName(QStringLiteral("sl_led4"));
        sl_led4->setMaximum(4065);
        sl_led4->setPageStep(100);
        sl_led4->setOrientation(Qt::Horizontal);

        verticalLayout_7->addWidget(sl_led4);


        horizontalLayout_9->addLayout(verticalLayout_7);


        verticalLayout_10->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        cb_led5 = new QCheckBox(layoutWidget4);
        cb_led5->setObjectName(QStringLiteral("cb_led5"));

        verticalLayout_8->addWidget(cb_led5);

        cb_led6 = new QCheckBox(layoutWidget4);
        cb_led6->setObjectName(QStringLiteral("cb_led6"));

        verticalLayout_8->addWidget(cb_led6);

        cb_led7 = new QCheckBox(layoutWidget4);
        cb_led7->setObjectName(QStringLiteral("cb_led7"));

        verticalLayout_8->addWidget(cb_led7);

        cb_led8 = new QCheckBox(layoutWidget4);
        cb_led8->setObjectName(QStringLiteral("cb_led8"));

        verticalLayout_8->addWidget(cb_led8);


        horizontalLayout_10->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        sl_led5 = new QSlider(layoutWidget4);
        sl_led5->setObjectName(QStringLiteral("sl_led5"));
        sl_led5->setMaximum(4065);
        sl_led5->setPageStep(100);
        sl_led5->setOrientation(Qt::Horizontal);

        verticalLayout_9->addWidget(sl_led5);

        sl_led6 = new QSlider(layoutWidget4);
        sl_led6->setObjectName(QStringLiteral("sl_led6"));
        sl_led6->setMaximum(4065);
        sl_led6->setPageStep(100);
        sl_led6->setOrientation(Qt::Horizontal);

        verticalLayout_9->addWidget(sl_led6);

        sl_led7 = new QSlider(layoutWidget4);
        sl_led7->setObjectName(QStringLiteral("sl_led7"));
        sl_led7->setMaximum(4065);
        sl_led7->setPageStep(100);
        sl_led7->setOrientation(Qt::Horizontal);

        verticalLayout_9->addWidget(sl_led7);

        sl_led8 = new QSlider(layoutWidget4);
        sl_led8->setObjectName(QStringLiteral("sl_led8"));
        sl_led8->setMaximum(4065);
        sl_led8->setPageStep(100);
        sl_led8->setOrientation(Qt::Horizontal);

        verticalLayout_9->addWidget(sl_led8);


        horizontalLayout_10->addLayout(verticalLayout_9);


        verticalLayout_10->addLayout(horizontalLayout_10);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        layoutWidget5 = new QWidget(tab_3);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 10, 161, 84));
        verticalLayout_11 = new QVBoxLayout(layoutWidget5);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget5);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_11->addWidget(label_8);

        poly_all = new QSlider(layoutWidget5);
        poly_all->setObjectName(QStringLiteral("poly_all"));
        poly_all->setMaximum(4065);
        poly_all->setSingleStep(10);
        poly_all->setPageStep(100);
        poly_all->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(poly_all);

        label_9 = new QLabel(layoutWidget5);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_11->addWidget(label_9);

        nonpoly_all = new QSlider(layoutWidget5);
        nonpoly_all->setObjectName(QStringLiteral("nonpoly_all"));
        nonpoly_all->setMaximum(4065);
        nonpoly_all->setSingleStep(10);
        nonpoly_all->setPageStep(100);
        nonpoly_all->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(nonpoly_all);

        tabWidget->addTab(tab_3, QString());
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
        QObject::connect(clearInputButton, SIGNAL(clicked(bool)), inputBox, SLOT(clear()));
        QObject::connect(clearOutputButton, SIGNAL(clicked(bool)), outputBox, SLOT(clear()));
        QObject::connect(inputBox, SIGNAL(returnPressed()), sendButton, SLOT(animateClick()));
        QObject::connect(checkBoxCR, SIGNAL(clicked(bool)), checkBoxLF, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxCR, SIGNAL(clicked(bool)), checkBoxCRLF, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxLF, SIGNAL(clicked(bool)), checkBoxCR, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxLF, SIGNAL(clicked(bool)), checkBoxCRLF, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxCRLF, SIGNAL(clicked(bool)), checkBoxLF, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxCRLF, SIGNAL(clicked(bool)), checkBoxCR, SLOT(setDisabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QtTerm_v2Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtTerm_v2Class)
    {
        QtTerm_v2Class->setWindowTitle(QApplication::translate("QtTerm_v2Class", "QtTerm_v2", 0));
        actionQuit->setText(QApplication::translate("QtTerm_v2Class", "Quit", 0));
        statusLabel->setText(QApplication::translate("QtTerm_v2Class", "TextLabel", 0));
        label->setText(QApplication::translate("QtTerm_v2Class", "Received", 0));
        clearOutputButton->setText(QApplication::translate("QtTerm_v2Class", "CLEAR", 0));
        label_2->setText(QApplication::translate("QtTerm_v2Class", "Transmit", 0));
        clearInputButton->setText(QApplication::translate("QtTerm_v2Class", "CLEAR", 0));
        ledSlider->setText(QString());
        label_6->setText(QApplication::translate("QtTerm_v2Class", "Brightness", 0));
        label_7->setText(QApplication::translate("QtTerm_v2Class", "LED", 0));
        label_3->setText(QApplication::translate("QtTerm_v2Class", "Port", 0));
        ReScanButton->setText(QApplication::translate("QtTerm_v2Class", "ReScan", 0));
        label_4->setText(QApplication::translate("QtTerm_v2Class", "Baud Rate", 0));
        baudBox->clear();
        baudBox->insertItems(0, QStringList()
         << QApplication::translate("QtTerm_v2Class", "300", 0)
         << QApplication::translate("QtTerm_v2Class", "600", 0)
         << QApplication::translate("QtTerm_v2Class", "1200", 0)
         << QApplication::translate("QtTerm_v2Class", "4800", 0)
         << QApplication::translate("QtTerm_v2Class", "9600", 0)
         << QApplication::translate("QtTerm_v2Class", "14400", 0)
         << QApplication::translate("QtTerm_v2Class", "19200", 0)
         << QApplication::translate("QtTerm_v2Class", "28800", 0)
         << QApplication::translate("QtTerm_v2Class", "57600", 0)
         << QApplication::translate("QtTerm_v2Class", "115200", 0)
        );
        checkBoxCR->setText(QApplication::translate("QtTerm_v2Class", "CR", 0));
        checkBoxLF->setText(QApplication::translate("QtTerm_v2Class", "LF", 0));
        checkBoxCRLF->setText(QApplication::translate("QtTerm_v2Class", "CR + LF", 0));
        connectButton->setText(QApplication::translate("QtTerm_v2Class", "Connect", 0));
        disconnectButton->setText(QApplication::translate("QtTerm_v2Class", "Discnonnect", 0));
        sendButton->setText(QApplication::translate("QtTerm_v2Class", "Send", 0));
        resetButton->setText(QApplication::translate("QtTerm_v2Class", "Reset", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QtTerm_v2Class", "Tab 1", 0));
        cb_led1->setText(QApplication::translate("QtTerm_v2Class", "LED 1", 0));
        cb_led2->setText(QApplication::translate("QtTerm_v2Class", "LED 2", 0));
        cb_led3->setText(QApplication::translate("QtTerm_v2Class", "LED 3", 0));
        cb_led4->setText(QApplication::translate("QtTerm_v2Class", "LED 4", 0));
        cb_led5->setText(QApplication::translate("QtTerm_v2Class", "LED 5", 0));
        cb_led6->setText(QApplication::translate("QtTerm_v2Class", "LED 6", 0));
        cb_led7->setText(QApplication::translate("QtTerm_v2Class", "LED 7", 0));
        cb_led8->setText(QApplication::translate("QtTerm_v2Class", "LED 8", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("QtTerm_v2Class", "Tab 2", 0));
        label_8->setText(QApplication::translate("QtTerm_v2Class", "Polarisation", 0));
        label_9->setText(QApplication::translate("QtTerm_v2Class", "without Polarisation", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("QtTerm_v2Class", "Tab 3", 0));
        menuMain->setTitle(QApplication::translate("QtTerm_v2Class", "Main", 0));
    } // retranslateUi

};

namespace Ui {
    class QtTerm_v2Class: public Ui_QtTerm_v2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTERM_V2_H
