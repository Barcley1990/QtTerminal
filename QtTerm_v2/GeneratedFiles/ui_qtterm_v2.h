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
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPushButton *ReScanButton;
    QComboBox *portName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *baudBox;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *connectButton;
    QPushButton *disconnectButton;
    QPushButton *sendButton;
    QPushButton *resetButton;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBoxCR;
    QCheckBox *checkBoxDTR;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxLF;
    QCheckBox *checkBoxCRLF;
    QSpacerItem *horizontalSpacer_3;
    QWidget *tab_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_22;
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
    QVBoxLayout *verticalLayout_11;
    QLabel *label_8;
    QSlider *poly_all;
    QLabel *label_9;
    QSlider *nonpoly_all;
    QWidget *tab_3;
    QLabel *pic_Ringlicht;
    QPushButton *but_LED_1;
    QPushButton *but_LED_2;
    QPushButton *but_LED_3;
    QPushButton *but_LED_4;
    QPushButton *but_LED_5;
    QPushButton *but_LED_6;
    QPushButton *but_LED_7;
    QPushButton *but_LED_8;
    QLineEdit *line_LED_1;
    QLineEdit *line_LED_2;
    QLineEdit *line_LED_3;
    QLineEdit *line_LED_4;
    QLineEdit *line_LED_5;
    QLineEdit *line_LED_6;
    QLineEdit *line_LED_7;
    QLineEdit *line_LED_8;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QPushButton *clearOutputButton;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *outputBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QPushButton *clearInputButton;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *inputBox;
    QLabel *statusLabel;
    QMenuBar *menuBar;
    QMenu *menuMain;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtTerm_v2Class)
    {
        if (QtTerm_v2Class->objectName().isEmpty())
            QtTerm_v2Class->setObjectName(QStringLiteral("QtTerm_v2Class"));
        QtTerm_v2Class->setWindowModality(Qt::NonModal);
        QtTerm_v2Class->setEnabled(true);
        QtTerm_v2Class->resize(650, 380);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QtTerm_v2Class->sizePolicy().hasHeightForWidth());
        QtTerm_v2Class->setSizePolicy(sizePolicy);
        QtTerm_v2Class->setMinimumSize(QSize(650, 380));
        QtTerm_v2Class->setMaximumSize(QSize(650, 380));
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
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(440, 0, 211, 341));
        tabWidget->setMinimumSize(QSize(16, 16));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        widget = new QWidget(tab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 181, 51));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        ReScanButton = new QPushButton(widget);
        ReScanButton->setObjectName(QStringLiteral("ReScanButton"));

        horizontalLayout->addWidget(ReScanButton);

        portName = new QComboBox(widget);
        portName->setObjectName(QStringLiteral("portName"));

        horizontalLayout->addWidget(portName);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        baudBox = new QComboBox(widget);
        baudBox->setObjectName(QStringLiteral("baudBox"));

        horizontalLayout_3->addWidget(baudBox);


        verticalLayout_3->addLayout(horizontalLayout_3);

        widget1 = new QWidget(tab);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 213, 181, 81));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        connectButton = new QPushButton(widget1);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        horizontalLayout_2->addWidget(connectButton);

        disconnectButton = new QPushButton(widget1);
        disconnectButton->setObjectName(QStringLiteral("disconnectButton"));

        horizontalLayout_2->addWidget(disconnectButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        sendButton = new QPushButton(widget1);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        verticalLayout_2->addWidget(sendButton);

        resetButton = new QPushButton(widget1);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        verticalLayout_2->addWidget(resetButton);

        widget2 = new QWidget(tab);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(12, 100, 181, 71));
        verticalLayout_4 = new QVBoxLayout(widget2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        checkBoxCR = new QCheckBox(widget2);
        checkBoxCR->setObjectName(QStringLiteral("checkBoxCR"));

        horizontalLayout_6->addWidget(checkBoxCR);

        checkBoxDTR = new QCheckBox(widget2);
        checkBoxDTR->setObjectName(QStringLiteral("checkBoxDTR"));

        horizontalLayout_6->addWidget(checkBoxDTR);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBoxLF = new QCheckBox(widget2);
        checkBoxLF->setObjectName(QStringLiteral("checkBoxLF"));

        verticalLayout->addWidget(checkBoxLF);

        checkBoxCRLF = new QCheckBox(widget2);
        checkBoxCRLF->setObjectName(QStringLiteral("checkBoxCRLF"));

        verticalLayout->addWidget(checkBoxCRLF);


        horizontalLayout_7->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(98, 38, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_7);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 181, 296));
        verticalLayout_22 = new QVBoxLayout(layoutWidget);
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        cb_led1 = new QCheckBox(layoutWidget);
        cb_led1->setObjectName(QStringLiteral("cb_led1"));

        verticalLayout_6->addWidget(cb_led1);

        cb_led2 = new QCheckBox(layoutWidget);
        cb_led2->setObjectName(QStringLiteral("cb_led2"));

        verticalLayout_6->addWidget(cb_led2);

        cb_led3 = new QCheckBox(layoutWidget);
        cb_led3->setObjectName(QStringLiteral("cb_led3"));

        verticalLayout_6->addWidget(cb_led3);

        cb_led4 = new QCheckBox(layoutWidget);
        cb_led4->setObjectName(QStringLiteral("cb_led4"));

        verticalLayout_6->addWidget(cb_led4);


        horizontalLayout_9->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        sl_led1 = new QSlider(layoutWidget);
        sl_led1->setObjectName(QStringLiteral("sl_led1"));
        sl_led1->setMaximum(4065);
        sl_led1->setPageStep(100);
        sl_led1->setOrientation(Qt::Horizontal);

        verticalLayout_7->addWidget(sl_led1);

        sl_led2 = new QSlider(layoutWidget);
        sl_led2->setObjectName(QStringLiteral("sl_led2"));
        sl_led2->setMaximum(4065);
        sl_led2->setPageStep(100);
        sl_led2->setOrientation(Qt::Horizontal);

        verticalLayout_7->addWidget(sl_led2);

        sl_led3 = new QSlider(layoutWidget);
        sl_led3->setObjectName(QStringLiteral("sl_led3"));
        sl_led3->setMaximum(4065);
        sl_led3->setPageStep(100);
        sl_led3->setOrientation(Qt::Horizontal);

        verticalLayout_7->addWidget(sl_led3);

        sl_led4 = new QSlider(layoutWidget);
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
        cb_led5 = new QCheckBox(layoutWidget);
        cb_led5->setObjectName(QStringLiteral("cb_led5"));

        verticalLayout_8->addWidget(cb_led5);

        cb_led6 = new QCheckBox(layoutWidget);
        cb_led6->setObjectName(QStringLiteral("cb_led6"));

        verticalLayout_8->addWidget(cb_led6);

        cb_led7 = new QCheckBox(layoutWidget);
        cb_led7->setObjectName(QStringLiteral("cb_led7"));

        verticalLayout_8->addWidget(cb_led7);

        cb_led8 = new QCheckBox(layoutWidget);
        cb_led8->setObjectName(QStringLiteral("cb_led8"));

        verticalLayout_8->addWidget(cb_led8);


        horizontalLayout_10->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        sl_led5 = new QSlider(layoutWidget);
        sl_led5->setObjectName(QStringLiteral("sl_led5"));
        sl_led5->setMaximum(4065);
        sl_led5->setPageStep(100);
        sl_led5->setOrientation(Qt::Horizontal);

        verticalLayout_9->addWidget(sl_led5);

        sl_led6 = new QSlider(layoutWidget);
        sl_led6->setObjectName(QStringLiteral("sl_led6"));
        sl_led6->setMaximum(4065);
        sl_led6->setPageStep(100);
        sl_led6->setOrientation(Qt::Horizontal);

        verticalLayout_9->addWidget(sl_led6);

        sl_led7 = new QSlider(layoutWidget);
        sl_led7->setObjectName(QStringLiteral("sl_led7"));
        sl_led7->setMaximum(4065);
        sl_led7->setPageStep(100);
        sl_led7->setOrientation(Qt::Horizontal);

        verticalLayout_9->addWidget(sl_led7);

        sl_led8 = new QSlider(layoutWidget);
        sl_led8->setObjectName(QStringLiteral("sl_led8"));
        sl_led8->setMaximum(4065);
        sl_led8->setPageStep(100);
        sl_led8->setOrientation(Qt::Horizontal);

        verticalLayout_9->addWidget(sl_led8);


        horizontalLayout_10->addLayout(verticalLayout_9);


        verticalLayout_10->addLayout(horizontalLayout_10);


        verticalLayout_22->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_11->addWidget(label_8);

        poly_all = new QSlider(layoutWidget);
        poly_all->setObjectName(QStringLiteral("poly_all"));
        poly_all->setMaximum(255);
        poly_all->setSingleStep(5);
        poly_all->setPageStep(20);
        poly_all->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(poly_all);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_11->addWidget(label_9);

        nonpoly_all = new QSlider(layoutWidget);
        nonpoly_all->setObjectName(QStringLiteral("nonpoly_all"));
        nonpoly_all->setMaximum(255);
        nonpoly_all->setSingleStep(5);
        nonpoly_all->setPageStep(20);
        nonpoly_all->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(nonpoly_all);


        verticalLayout_22->addLayout(verticalLayout_11);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pic_Ringlicht = new QLabel(tab_3);
        pic_Ringlicht->setObjectName(QStringLiteral("pic_Ringlicht"));
        pic_Ringlicht->setGeometry(QRect(0, 60, 211, 201));
        pic_Ringlicht->setInputMethodHints(Qt::ImhNone);
        pic_Ringlicht->setFrameShadow(QFrame::Plain);
        pic_Ringlicht->setPixmap(QPixmap(QString::fromUtf8("Resources/ring.png")));
        pic_Ringlicht->setScaledContents(true);
        but_LED_1 = new QPushButton(tab_3);
        but_LED_1->setObjectName(QStringLiteral("but_LED_1"));
        but_LED_1->setEnabled(true);
        but_LED_1->setGeometry(QRect(120, 60, 16, 16));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(but_LED_1->sizePolicy().hasHeightForWidth());
        but_LED_1->setSizePolicy(sizePolicy1);
        but_LED_1->setMinimumSize(QSize(16, 16));
        but_LED_1->setMaximumSize(QSize(16, 16));
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral("Resources/on.png"), QSize(), QIcon::Normal, QIcon::On);
        but_LED_1->setIcon(icon);
        but_LED_1->setCheckable(true);
        but_LED_1->setAutoRepeat(false);
        but_LED_1->setAutoExclusive(false);
        but_LED_2 = new QPushButton(tab_3);
        but_LED_2->setObjectName(QStringLiteral("but_LED_2"));
        but_LED_2->setEnabled(true);
        but_LED_2->setGeometry(QRect(180, 90, 16, 16));
        sizePolicy1.setHeightForWidth(but_LED_2->sizePolicy().hasHeightForWidth());
        but_LED_2->setSizePolicy(sizePolicy1);
        but_LED_2->setMinimumSize(QSize(16, 16));
        but_LED_2->setMaximumSize(QSize(16, 16));
        but_LED_2->setIcon(icon);
        but_LED_2->setCheckable(true);
        but_LED_3 = new QPushButton(tab_3);
        but_LED_3->setObjectName(QStringLiteral("but_LED_3"));
        but_LED_3->setGeometry(QRect(190, 170, 16, 16));
        sizePolicy1.setHeightForWidth(but_LED_3->sizePolicy().hasHeightForWidth());
        but_LED_3->setSizePolicy(sizePolicy1);
        but_LED_3->setMinimumSize(QSize(16, 16));
        but_LED_3->setMaximumSize(QSize(16, 16));
        but_LED_3->setIcon(icon);
        but_LED_3->setCheckable(true);
        but_LED_4 = new QPushButton(tab_3);
        but_LED_4->setObjectName(QStringLiteral("but_LED_4"));
        but_LED_4->setGeometry(QRect(170, 230, 16, 16));
        sizePolicy1.setHeightForWidth(but_LED_4->sizePolicy().hasHeightForWidth());
        but_LED_4->setSizePolicy(sizePolicy1);
        but_LED_4->setMinimumSize(QSize(16, 16));
        but_LED_4->setMaximumSize(QSize(16, 16));
        but_LED_4->setIcon(icon);
        but_LED_4->setCheckable(true);
        but_LED_5 = new QPushButton(tab_3);
        but_LED_5->setObjectName(QStringLiteral("but_LED_5"));
        but_LED_5->setGeometry(QRect(80, 250, 16, 16));
        sizePolicy1.setHeightForWidth(but_LED_5->sizePolicy().hasHeightForWidth());
        but_LED_5->setSizePolicy(sizePolicy1);
        but_LED_5->setMinimumSize(QSize(16, 16));
        but_LED_5->setMaximumSize(QSize(16, 16));
        but_LED_5->setIcon(icon);
        but_LED_5->setCheckable(true);
        but_LED_6 = new QPushButton(tab_3);
        but_LED_6->setObjectName(QStringLiteral("but_LED_6"));
        but_LED_6->setGeometry(QRect(10, 210, 16, 16));
        sizePolicy1.setHeightForWidth(but_LED_6->sizePolicy().hasHeightForWidth());
        but_LED_6->setSizePolicy(sizePolicy1);
        but_LED_6->setMinimumSize(QSize(16, 16));
        but_LED_6->setMaximumSize(QSize(16, 16));
        but_LED_6->setIcon(icon);
        but_LED_6->setCheckable(true);
        but_LED_7 = new QPushButton(tab_3);
        but_LED_7->setObjectName(QStringLiteral("but_LED_7"));
        but_LED_7->setGeometry(QRect(0, 130, 16, 16));
        sizePolicy1.setHeightForWidth(but_LED_7->sizePolicy().hasHeightForWidth());
        but_LED_7->setSizePolicy(sizePolicy1);
        but_LED_7->setMinimumSize(QSize(16, 16));
        but_LED_7->setMaximumSize(QSize(16, 16));
        but_LED_7->setIcon(icon);
        but_LED_7->setCheckable(true);
        but_LED_8 = new QPushButton(tab_3);
        but_LED_8->setObjectName(QStringLiteral("but_LED_8"));
        but_LED_8->setGeometry(QRect(40, 70, 16, 16));
        sizePolicy1.setHeightForWidth(but_LED_8->sizePolicy().hasHeightForWidth());
        but_LED_8->setSizePolicy(sizePolicy1);
        but_LED_8->setMinimumSize(QSize(16, 16));
        but_LED_8->setMaximumSize(QSize(16, 16));
        but_LED_8->setIcon(icon);
        but_LED_8->setCheckable(true);
        line_LED_1 = new QLineEdit(tab_3);
        line_LED_1->setObjectName(QStringLiteral("line_LED_1"));
        line_LED_1->setGeometry(QRect(120, 80, 31, 16));
        line_LED_2 = new QLineEdit(tab_3);
        line_LED_2->setObjectName(QStringLiteral("line_LED_2"));
        line_LED_2->setGeometry(QRect(170, 110, 31, 16));
        line_LED_3 = new QLineEdit(tab_3);
        line_LED_3->setObjectName(QStringLiteral("line_LED_3"));
        line_LED_3->setGeometry(QRect(170, 190, 31, 16));
        line_LED_4 = new QLineEdit(tab_3);
        line_LED_4->setObjectName(QStringLiteral("line_LED_4"));
        line_LED_4->setGeometry(QRect(160, 250, 31, 16));
        line_LED_5 = new QLineEdit(tab_3);
        line_LED_5->setObjectName(QStringLiteral("line_LED_5"));
        line_LED_5->setGeometry(QRect(80, 270, 31, 16));
        line_LED_6 = new QLineEdit(tab_3);
        line_LED_6->setObjectName(QStringLiteral("line_LED_6"));
        line_LED_6->setGeometry(QRect(10, 230, 31, 16));
        line_LED_7 = new QLineEdit(tab_3);
        line_LED_7->setObjectName(QStringLiteral("line_LED_7"));
        line_LED_7->setGeometry(QRect(0, 150, 31, 16));
        line_LED_8 = new QLineEdit(tab_3);
        line_LED_8->setObjectName(QStringLiteral("line_LED_8"));
        line_LED_8->setGeometry(QRect(40, 90, 31, 16));
        tabWidget->addTab(tab_3, QString());
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(12, 9, 421, 321));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        clearOutputButton = new QPushButton(layoutWidget1);
        clearOutputButton->setObjectName(QStringLiteral("clearOutputButton"));

        horizontalLayout_4->addWidget(clearOutputButton);

        horizontalSpacer = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(horizontalLayout_4);

        outputBox = new QPlainTextEdit(layoutWidget1);
        outputBox->setObjectName(QStringLiteral("outputBox"));
        outputBox->setReadOnly(true);

        verticalLayout_5->addWidget(outputBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_5->addWidget(label_2);

        clearInputButton = new QPushButton(layoutWidget1);
        clearInputButton->setObjectName(QStringLiteral("clearInputButton"));

        horizontalLayout_5->addWidget(clearInputButton);

        horizontalSpacer_2 = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_5);

        inputBox = new QLineEdit(layoutWidget1);
        inputBox->setObjectName(QStringLiteral("inputBox"));

        verticalLayout_5->addWidget(inputBox);

        statusLabel = new QLabel(layoutWidget1);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));

        verticalLayout_5->addWidget(statusLabel);

        QtTerm_v2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtTerm_v2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 650, 21));
        menuMain = new QMenu(menuBar);
        menuMain->setObjectName(QStringLiteral("menuMain"));
        QtTerm_v2Class->setMenuBar(menuBar);
        statusBar = new QStatusBar(QtTerm_v2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtTerm_v2Class->setStatusBar(statusBar);
        QWidget::setTabOrder(line_LED_1, line_LED_2);
        QWidget::setTabOrder(line_LED_2, line_LED_3);
        QWidget::setTabOrder(line_LED_3, line_LED_4);
        QWidget::setTabOrder(line_LED_4, line_LED_5);
        QWidget::setTabOrder(line_LED_5, line_LED_6);
        QWidget::setTabOrder(line_LED_6, line_LED_7);
        QWidget::setTabOrder(line_LED_7, line_LED_8);
        QWidget::setTabOrder(line_LED_8, disconnectButton);
        QWidget::setTabOrder(disconnectButton, sendButton);
        QWidget::setTabOrder(sendButton, resetButton);
        QWidget::setTabOrder(resetButton, cb_led1);
        QWidget::setTabOrder(cb_led1, cb_led2);
        QWidget::setTabOrder(cb_led2, cb_led3);
        QWidget::setTabOrder(cb_led3, cb_led4);
        QWidget::setTabOrder(cb_led4, sl_led1);
        QWidget::setTabOrder(sl_led1, sl_led2);
        QWidget::setTabOrder(sl_led2, sl_led3);
        QWidget::setTabOrder(sl_led3, sl_led4);
        QWidget::setTabOrder(sl_led4, cb_led5);
        QWidget::setTabOrder(cb_led5, cb_led6);
        QWidget::setTabOrder(cb_led6, cb_led7);
        QWidget::setTabOrder(cb_led7, cb_led8);
        QWidget::setTabOrder(cb_led8, sl_led5);
        QWidget::setTabOrder(sl_led5, sl_led6);
        QWidget::setTabOrder(sl_led6, sl_led7);
        QWidget::setTabOrder(sl_led7, sl_led8);
        QWidget::setTabOrder(sl_led8, poly_all);
        QWidget::setTabOrder(poly_all, nonpoly_all);
        QWidget::setTabOrder(nonpoly_all, clearOutputButton);
        QWidget::setTabOrder(clearOutputButton, outputBox);
        QWidget::setTabOrder(outputBox, clearInputButton);
        QWidget::setTabOrder(clearInputButton, inputBox);
        QWidget::setTabOrder(inputBox, but_LED_1);
        QWidget::setTabOrder(but_LED_1, but_LED_2);
        QWidget::setTabOrder(but_LED_2, but_LED_3);
        QWidget::setTabOrder(but_LED_3, but_LED_4);
        QWidget::setTabOrder(but_LED_4, but_LED_5);
        QWidget::setTabOrder(but_LED_5, but_LED_6);
        QWidget::setTabOrder(but_LED_6, but_LED_7);
        QWidget::setTabOrder(but_LED_7, but_LED_8);
        QWidget::setTabOrder(but_LED_8, tabWidget);
        QWidget::setTabOrder(tabWidget, ReScanButton);
        QWidget::setTabOrder(ReScanButton, portName);
        QWidget::setTabOrder(portName, baudBox);
        QWidget::setTabOrder(baudBox, checkBoxCR);
        QWidget::setTabOrder(checkBoxCR, checkBoxLF);
        QWidget::setTabOrder(checkBoxLF, checkBoxCRLF);
        QWidget::setTabOrder(checkBoxCRLF, connectButton);

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
        connectButton->setText(QApplication::translate("QtTerm_v2Class", "Connect", 0));
        disconnectButton->setText(QApplication::translate("QtTerm_v2Class", "Discnonnect", 0));
        sendButton->setText(QApplication::translate("QtTerm_v2Class", "Send", 0));
        resetButton->setText(QApplication::translate("QtTerm_v2Class", "Reset", 0));
        checkBoxCR->setText(QApplication::translate("QtTerm_v2Class", "CR", 0));
        checkBoxDTR->setText(QApplication::translate("QtTerm_v2Class", "DTR", 0));
        checkBoxLF->setText(QApplication::translate("QtTerm_v2Class", "LF", 0));
        checkBoxCRLF->setText(QApplication::translate("QtTerm_v2Class", "CR + LF", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QtTerm_v2Class", "Settings", 0));
        cb_led1->setText(QApplication::translate("QtTerm_v2Class", "LED 1", 0));
        cb_led2->setText(QApplication::translate("QtTerm_v2Class", "LED 2", 0));
        cb_led3->setText(QApplication::translate("QtTerm_v2Class", "LED 3", 0));
        cb_led4->setText(QApplication::translate("QtTerm_v2Class", "LED 4", 0));
        cb_led5->setText(QApplication::translate("QtTerm_v2Class", "LED 5", 0));
        cb_led6->setText(QApplication::translate("QtTerm_v2Class", "LED 6", 0));
        cb_led7->setText(QApplication::translate("QtTerm_v2Class", "LED 7", 0));
        cb_led8->setText(QApplication::translate("QtTerm_v2Class", "LED 8", 0));
        label_8->setText(QApplication::translate("QtTerm_v2Class", "Polarisation", 0));
        label_9->setText(QApplication::translate("QtTerm_v2Class", "without Polarisation", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("QtTerm_v2Class", "Selection", 0));
        pic_Ringlicht->setText(QString());
        but_LED_1->setText(QString());
        but_LED_2->setText(QString());
        but_LED_3->setText(QString());
        but_LED_4->setText(QString());
        but_LED_5->setText(QString());
        but_LED_6->setText(QString());
        but_LED_7->setText(QString());
        but_LED_8->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("QtTerm_v2Class", "Halo", 0));
        label->setText(QApplication::translate("QtTerm_v2Class", "Received", 0));
        clearOutputButton->setText(QApplication::translate("QtTerm_v2Class", "CLEAR", 0));
        label_2->setText(QApplication::translate("QtTerm_v2Class", "Transmit", 0));
        clearInputButton->setText(QApplication::translate("QtTerm_v2Class", "CLEAR", 0));
        statusLabel->setText(QApplication::translate("QtTerm_v2Class", "TextLabel", 0));
        menuMain->setTitle(QApplication::translate("QtTerm_v2Class", "Main", 0));
    } // retranslateUi

};

namespace Ui {
    class QtTerm_v2Class: public Ui_QtTerm_v2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTERM_V2_H
