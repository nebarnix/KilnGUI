/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionShow_Hide_Serial_Terminal;
    QAction *actionClear_Plots;
    QAction *actionShow_Hide_Error_Trace;
    QAction *actionShow_Hide_Buttons;
    QAction *actionHide_Serial_Traffic;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QwtPlot *tempPlot;
    QwtPlot *qwtPlot_Err;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLCDNumber *lcdNumber_actTemp;
    QLabel *label_4;
    QLCDNumber *lcdNumber_cmdTemp;
    QLabel *label_5;
    QLCDNumber *lcdNumber_errTemp;
    QLabel *label_6;
    QLCDNumber *lcdNumber_pwr;
    QWidget *serialFrame;
    QHBoxLayout *serialTerminalFrame;
    QTextBrowser *textBrowser_serialMessages;
    QTextBrowser *textBrowser_serialTraffic;
    QWidget *buttonFrame;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_4;
    QDoubleSpinBox *spinBox_rampRate;
    QPushButton *pushButton_zero;
    QSpinBox *spinBox_rampTemp;
    QSpinBox *spinBox_killTemp;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton_jump;
    QPushButton *pushButton_rampAtRate;
    QPushButton *pushButton_rampToKill;
    QSpinBox *spinBox_jumpVal;
    QPushButton *pushButton_rampOverTime;
    QSpinBox *spinBox_rampTempTime;
    QDoubleSpinBox *spinBox_killRate;
    QSpinBox *spinBox_rampTime;
    QLabel *label_13;
    QLabel *label_12;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_hold;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_resume;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_setPwr;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBox_pwrLevel;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_sendRaw;
    QPushButton *pushButton_Serial;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_comPort;
    QLineEdit *lineEdit_rawSerial;
    QLabel *label_9;
    QMenuBar *menuBar;
    QMenu *menuView;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(985, 586);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/thermometericon2.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionShow_Hide_Serial_Terminal = new QAction(MainWindow);
        actionShow_Hide_Serial_Terminal->setObjectName(QStringLiteral("actionShow_Hide_Serial_Terminal"));
        actionClear_Plots = new QAction(MainWindow);
        actionClear_Plots->setObjectName(QStringLiteral("actionClear_Plots"));
        actionShow_Hide_Error_Trace = new QAction(MainWindow);
        actionShow_Hide_Error_Trace->setObjectName(QStringLiteral("actionShow_Hide_Error_Trace"));
        actionShow_Hide_Buttons = new QAction(MainWindow);
        actionShow_Hide_Buttons->setObjectName(QStringLiteral("actionShow_Hide_Buttons"));
        actionHide_Serial_Traffic = new QAction(MainWindow);
        actionHide_Serial_Traffic->setObjectName(QStringLiteral("actionHide_Serial_Traffic"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tempPlot = new QwtPlot(centralWidget);
        tempPlot->setObjectName(QStringLiteral("tempPlot"));
        tempPlot->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tempPlot->sizePolicy().hasHeightForWidth());
        tempPlot->setSizePolicy(sizePolicy);
        tempPlot->setBaseSize(QSize(0, 0));

        verticalLayout->addWidget(tempPlot);

        qwtPlot_Err = new QwtPlot(centralWidget);
        qwtPlot_Err->setObjectName(QStringLiteral("qwtPlot_Err"));
        qwtPlot_Err->setEnabled(true);
        sizePolicy.setHeightForWidth(qwtPlot_Err->sizePolicy().hasHeightForWidth());
        qwtPlot_Err->setSizePolicy(sizePolicy);
        qwtPlot_Err->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(qwtPlot_Err);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_3);

        lcdNumber_actTemp = new QLCDNumber(centralWidget);
        lcdNumber_actTemp->setObjectName(QStringLiteral("lcdNumber_actTemp"));
        lcdNumber_actTemp->setStyleSheet(QLatin1String("QLCDNumber{\n"
"    color: rgb(0, 0, 0);    \n"
"}"));
        lcdNumber_actTemp->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_4->addWidget(lcdNumber_actTemp);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_4);

        lcdNumber_cmdTemp = new QLCDNumber(centralWidget);
        lcdNumber_cmdTemp->setObjectName(QStringLiteral("lcdNumber_cmdTemp"));
        lcdNumber_cmdTemp->setStyleSheet(QLatin1String("QLCDNumber{\n"
"    color: rgb(0, 0, 0);    \n"
"}"));
        lcdNumber_cmdTemp->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_4->addWidget(lcdNumber_cmdTemp);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_5);

        lcdNumber_errTemp = new QLCDNumber(centralWidget);
        lcdNumber_errTemp->setObjectName(QStringLiteral("lcdNumber_errTemp"));
        lcdNumber_errTemp->setStyleSheet(QLatin1String("QLCDNumber{\n"
"    color: rgb(0, 0, 0);    \n"
"}"));
        lcdNumber_errTemp->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_4->addWidget(lcdNumber_errTemp);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_6);

        lcdNumber_pwr = new QLCDNumber(centralWidget);
        lcdNumber_pwr->setObjectName(QStringLiteral("lcdNumber_pwr"));
        lcdNumber_pwr->setStyleSheet(QLatin1String("QLCDNumber{\n"
"    color: rgb(0, 0, 0);    \n"
"}"));
        lcdNumber_pwr->setSmallDecimalPoint(false);
        lcdNumber_pwr->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_4->addWidget(lcdNumber_pwr);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalLayout->setStretch(0, 10);
        verticalLayout->setStretch(1, 3);
        verticalLayout->setStretch(2, 1);

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        serialFrame = new QWidget(centralWidget);
        serialFrame->setObjectName(QStringLiteral("serialFrame"));
        serialTerminalFrame = new QHBoxLayout(serialFrame);
        serialTerminalFrame->setSpacing(6);
        serialTerminalFrame->setContentsMargins(11, 11, 11, 11);
        serialTerminalFrame->setObjectName(QStringLiteral("serialTerminalFrame"));
        serialTerminalFrame->setContentsMargins(-1, 1, -1, -1);
        textBrowser_serialMessages = new QTextBrowser(serialFrame);
        textBrowser_serialMessages->setObjectName(QStringLiteral("textBrowser_serialMessages"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser_serialMessages->sizePolicy().hasHeightForWidth());
        textBrowser_serialMessages->setSizePolicy(sizePolicy1);

        serialTerminalFrame->addWidget(textBrowser_serialMessages);

        textBrowser_serialTraffic = new QTextBrowser(serialFrame);
        textBrowser_serialTraffic->setObjectName(QStringLiteral("textBrowser_serialTraffic"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(100);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textBrowser_serialTraffic->sizePolicy().hasHeightForWidth());
        textBrowser_serialTraffic->setSizePolicy(sizePolicy2);
        textBrowser_serialTraffic->setMinimumSize(QSize(0, 40));

        serialTerminalFrame->addWidget(textBrowser_serialTraffic);


        gridLayout->addWidget(serialFrame, 2, 0, 1, 2);

        buttonFrame = new QWidget(centralWidget);
        buttonFrame->setObjectName(QStringLiteral("buttonFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonFrame->sizePolicy().hasHeightForWidth());
        buttonFrame->setSizePolicy(sizePolicy3);
        verticalLayout_5 = new QVBoxLayout(buttonFrame);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(20);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetMinAndMaxSize);
        gridLayout_4->setContentsMargins(20, -1, 20, -1);
        spinBox_rampRate = new QDoubleSpinBox(buttonFrame);
        spinBox_rampRate->setObjectName(QStringLiteral("spinBox_rampRate"));
        spinBox_rampRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_rampRate->setSingleStep(0.25);
        spinBox_rampRate->setValue(3.25);

        gridLayout_4->addWidget(spinBox_rampRate, 2, 2, 1, 1);

        pushButton_zero = new QPushButton(buttonFrame);
        pushButton_zero->setObjectName(QStringLiteral("pushButton_zero"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_zero->sizePolicy().hasHeightForWidth());
        pushButton_zero->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(pushButton_zero, 1, 2, 1, 1);

        spinBox_rampTemp = new QSpinBox(buttonFrame);
        spinBox_rampTemp->setObjectName(QStringLiteral("spinBox_rampTemp"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(spinBox_rampTemp->sizePolicy().hasHeightForWidth());
        spinBox_rampTemp->setSizePolicy(sizePolicy5);
        spinBox_rampTemp->setMaximum(800);
        spinBox_rampTemp->setValue(50);

        gridLayout_4->addWidget(spinBox_rampTemp, 2, 1, 1, 1);

        spinBox_killTemp = new QSpinBox(buttonFrame);
        spinBox_killTemp->setObjectName(QStringLiteral("spinBox_killTemp"));
        sizePolicy4.setHeightForWidth(spinBox_killTemp->sizePolicy().hasHeightForWidth());
        spinBox_killTemp->setSizePolicy(sizePolicy4);
        spinBox_killTemp->setMaximum(800);
        spinBox_killTemp->setValue(50);

        gridLayout_4->addWidget(spinBox_killTemp, 3, 1, 1, 1);

        label_10 = new QLabel(buttonFrame);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy4.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy4);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_10, 0, 2, 1, 1);

        label_11 = new QLabel(buttonFrame);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy4.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy4);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_11, 0, 1, 1, 1);

        pushButton_jump = new QPushButton(buttonFrame);
        pushButton_jump->setObjectName(QStringLiteral("pushButton_jump"));
        sizePolicy4.setHeightForWidth(pushButton_jump->sizePolicy().hasHeightForWidth());
        pushButton_jump->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(pushButton_jump, 1, 0, 1, 1);

        pushButton_rampAtRate = new QPushButton(buttonFrame);
        pushButton_rampAtRate->setObjectName(QStringLiteral("pushButton_rampAtRate"));
        sizePolicy4.setHeightForWidth(pushButton_rampAtRate->sizePolicy().hasHeightForWidth());
        pushButton_rampAtRate->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(pushButton_rampAtRate, 2, 0, 1, 1);

        pushButton_rampToKill = new QPushButton(buttonFrame);
        pushButton_rampToKill->setObjectName(QStringLiteral("pushButton_rampToKill"));
        sizePolicy4.setHeightForWidth(pushButton_rampToKill->sizePolicy().hasHeightForWidth());
        pushButton_rampToKill->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(pushButton_rampToKill, 3, 0, 1, 1);

        spinBox_jumpVal = new QSpinBox(buttonFrame);
        spinBox_jumpVal->setObjectName(QStringLiteral("spinBox_jumpVal"));
        sizePolicy4.setHeightForWidth(spinBox_jumpVal->sizePolicy().hasHeightForWidth());
        spinBox_jumpVal->setSizePolicy(sizePolicy4);
        spinBox_jumpVal->setMaximum(800);
        spinBox_jumpVal->setValue(50);

        gridLayout_4->addWidget(spinBox_jumpVal, 1, 1, 1, 1);

        pushButton_rampOverTime = new QPushButton(buttonFrame);
        pushButton_rampOverTime->setObjectName(QStringLiteral("pushButton_rampOverTime"));

        gridLayout_4->addWidget(pushButton_rampOverTime, 5, 0, 1, 1);

        spinBox_rampTempTime = new QSpinBox(buttonFrame);
        spinBox_rampTempTime->setObjectName(QStringLiteral("spinBox_rampTempTime"));
        sizePolicy5.setHeightForWidth(spinBox_rampTempTime->sizePolicy().hasHeightForWidth());
        spinBox_rampTempTime->setSizePolicy(sizePolicy5);
        spinBox_rampTempTime->setMaximum(800);
        spinBox_rampTempTime->setValue(50);

        gridLayout_4->addWidget(spinBox_rampTempTime, 5, 1, 1, 1);

        spinBox_killRate = new QDoubleSpinBox(buttonFrame);
        spinBox_killRate->setObjectName(QStringLiteral("spinBox_killRate"));
        spinBox_killRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_killRate->setSingleStep(0.25);
        spinBox_killRate->setValue(3.25);

        gridLayout_4->addWidget(spinBox_killRate, 3, 2, 1, 1);

        spinBox_rampTime = new QSpinBox(buttonFrame);
        spinBox_rampTime->setObjectName(QStringLiteral("spinBox_rampTime"));
        sizePolicy5.setHeightForWidth(spinBox_rampTime->sizePolicy().hasHeightForWidth());
        spinBox_rampTime->setSizePolicy(sizePolicy5);
        spinBox_rampTime->setMaximum(800);
        spinBox_rampTime->setValue(50);

        gridLayout_4->addWidget(spinBox_rampTime, 5, 2, 1, 1);

        label_13 = new QLabel(buttonFrame);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy4.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy4);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_13, 4, 1, 1, 1);

        label_12 = new QLabel(buttonFrame);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy4.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy4);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_12, 4, 2, 1, 1);

        gridLayout_4->setColumnStretch(0, 3);

        verticalLayout_3->addLayout(gridLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        pushButton_hold = new QPushButton(buttonFrame);
        pushButton_hold->setObjectName(QStringLiteral("pushButton_hold"));
        sizePolicy4.setHeightForWidth(pushButton_hold->sizePolicy().hasHeightForWidth());
        pushButton_hold->setSizePolicy(sizePolicy4);

        horizontalLayout_6->addWidget(pushButton_hold);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        pushButton_resume = new QPushButton(buttonFrame);
        pushButton_resume->setObjectName(QStringLiteral("pushButton_resume"));
        sizePolicy4.setHeightForWidth(pushButton_resume->sizePolicy().hasHeightForWidth());
        pushButton_resume->setSizePolicy(sizePolicy4);

        horizontalLayout_6->addWidget(pushButton_resume);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_setPwr = new QPushButton(buttonFrame);
        pushButton_setPwr->setObjectName(QStringLiteral("pushButton_setPwr"));
        sizePolicy4.setHeightForWidth(pushButton_setPwr->sizePolicy().hasHeightForWidth());
        pushButton_setPwr->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(pushButton_setPwr);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        spinBox_pwrLevel = new QSpinBox(buttonFrame);
        spinBox_pwrLevel->setObjectName(QStringLiteral("spinBox_pwrLevel"));
        sizePolicy4.setHeightForWidth(spinBox_pwrLevel->sizePolicy().hasHeightForWidth());
        spinBox_pwrLevel->setSizePolicy(sizePolicy4);
        spinBox_pwrLevel->setMinimumSize(QSize(50, 0));
        spinBox_pwrLevel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_pwrLevel->setValue(5);

        horizontalLayout_2->addWidget(spinBox_pwrLevel);

        label_8 = new QLabel(buttonFrame);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy6);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_8);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        horizontalLayout_7->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(20);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_2->setContentsMargins(20, -1, 20, -1);
        pushButton_sendRaw = new QPushButton(buttonFrame);
        pushButton_sendRaw->setObjectName(QStringLiteral("pushButton_sendRaw"));
        sizePolicy4.setHeightForWidth(pushButton_sendRaw->sizePolicy().hasHeightForWidth());
        pushButton_sendRaw->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(pushButton_sendRaw, 4, 0, 1, 1);

        pushButton_Serial = new QPushButton(buttonFrame);
        pushButton_Serial->setObjectName(QStringLiteral("pushButton_Serial"));
        sizePolicy4.setHeightForWidth(pushButton_Serial->sizePolicy().hasHeightForWidth());
        pushButton_Serial->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(pushButton_Serial, 3, 0, 1, 1);

        label_7 = new QLabel(buttonFrame);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy4.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy4);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_7, 3, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit_comPort = new QLineEdit(buttonFrame);
        lineEdit_comPort->setObjectName(QStringLiteral("lineEdit_comPort"));

        verticalLayout_2->addWidget(lineEdit_comPort);


        gridLayout_2->addLayout(verticalLayout_2, 3, 2, 1, 1);

        lineEdit_rawSerial = new QLineEdit(buttonFrame);
        lineEdit_rawSerial->setObjectName(QStringLiteral("lineEdit_rawSerial"));

        gridLayout_2->addWidget(lineEdit_rawSerial, 4, 2, 1, 1);

        label_9 = new QLabel(buttonFrame);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy6.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy6);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_9, 4, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 3);

        verticalLayout_3->addLayout(gridLayout_2);


        verticalLayout_5->addLayout(verticalLayout_3);


        gridLayout->addWidget(buttonFrame, 0, 1, 1, 1);

        gridLayout->setRowStretch(0, 5);
        gridLayout->setColumnStretch(0, 2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 985, 26));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuView->menuAction());
        menuView->addAction(actionShow_Hide_Serial_Terminal);
        menuView->addAction(actionClear_Plots);
        menuView->addAction(actionShow_Hide_Error_Trace);
        menuView->addAction(actionShow_Hide_Buttons);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Kiln Control - By Nebarnix (2020)", 0));
        actionShow_Hide_Serial_Terminal->setText(QApplication::translate("MainWindow", "Show/Hide Serial Terminal", 0));
        actionClear_Plots->setText(QApplication::translate("MainWindow", "Clear Plots", 0));
        actionShow_Hide_Error_Trace->setText(QApplication::translate("MainWindow", "Show/Hide Error Trace", 0));
        actionShow_Hide_Buttons->setText(QApplication::translate("MainWindow", "Show/Hide Buttons", 0));
        actionHide_Serial_Traffic->setText(QApplication::translate("MainWindow", "Hide Serial Traffic", 0));
        label_3->setText(QApplication::translate("MainWindow", "Temp:", 0));
        label_4->setText(QApplication::translate("MainWindow", "Set Point:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Error:", 0));
        label_6->setText(QApplication::translate("MainWindow", "Power:", 0));
        pushButton_zero->setText(QApplication::translate("MainWindow", "ZERO", 0));
        label_10->setText(QApplication::translate("MainWindow", "Ramp Rate\n"
"(deg/min)", 0));
        label_11->setText(QApplication::translate("MainWindow", "Temp (C)", 0));
        pushButton_jump->setText(QApplication::translate("MainWindow", "Jump To", 0));
        pushButton_rampAtRate->setText(QApplication::translate("MainWindow", "Ramp At Rate", 0));
        pushButton_rampToKill->setText(QApplication::translate("MainWindow", "Ramp To Kill", 0));
        pushButton_rampOverTime->setText(QApplication::translate("MainWindow", "Ramp Over Time", 0));
        label_13->setText(QApplication::translate("MainWindow", "Temp (C)", 0));
        label_12->setText(QApplication::translate("MainWindow", "Time (min)", 0));
        pushButton_hold->setText(QApplication::translate("MainWindow", "HOLD", 0));
        pushButton_resume->setText(QApplication::translate("MainWindow", "RESUME", 0));
        pushButton_setPwr->setText(QApplication::translate("MainWindow", "Set Power", 0));
        label_8->setText(QApplication::translate("MainWindow", "%", 0));
        pushButton_sendRaw->setText(QApplication::translate("MainWindow", "Send", 0));
        pushButton_Serial->setText(QApplication::translate("MainWindow", "Connect\n"
"Serial", 0));
        label_7->setText(QApplication::translate("MainWindow", "Com Port:", 0));
        lineEdit_comPort->setText(QApplication::translate("MainWindow", "COM4", 0));
        label_9->setText(QApplication::translate("MainWindow", "Command:", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
