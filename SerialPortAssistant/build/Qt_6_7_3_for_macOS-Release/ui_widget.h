/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *groupBoxReceive;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEditReceive;
    QWidget *widgetReceiveButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClearReceive;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QComboBox *comboBoxPort;
    QLabel *label_4;
    QComboBox *comboBoxBaud;
    QLabel *label_5;
    QComboBox *comboBoxData;
    QLabel *label_6;
    QComboBox *comboBoxStop;
    QLabel *label_7;
    QComboBox *comboBoxCheck;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QComboBox *comboBoxReceiveMode;
    QLabel *label_9;
    QComboBox *comboBoxReceiveCodec;
    QGroupBox *groupBoxSend;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *plainTextEditSend;
    QWidget *widgetSendButton;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBoxSendOnTime;
    QSpinBox *spinBoxSendOnTime;
    QPushButton *pushButtonSend;
    QPushButton *pushButtonClearSend;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLabel *label_10;
    QComboBox *comboBoxSendMode;
    QLabel *label_11;
    QComboBox *comboBoxSendCodec;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonStartUSART;
    QPushButton *pushButtonEndUSART;
    QLabel *labelTime;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 570);
        Widget->setMinimumSize(QSize(800, 570));
        Widget->setMaximumSize(QSize(800, 570));
        gridLayout_5 = new QGridLayout(Widget);
        gridLayout_5->setObjectName("gridLayout_5");
        groupBoxReceive = new QGroupBox(Widget);
        groupBoxReceive->setObjectName("groupBoxReceive");
        verticalLayout = new QVBoxLayout(groupBoxReceive);
        verticalLayout->setObjectName("verticalLayout");
        plainTextEditReceive = new QPlainTextEdit(groupBoxReceive);
        plainTextEditReceive->setObjectName("plainTextEditReceive");
        plainTextEditReceive->setMinimumSize(QSize(0, 200));
        plainTextEditReceive->setMaximumSize(QSize(100000, 200));

        verticalLayout->addWidget(plainTextEditReceive);

        widgetReceiveButton = new QWidget(groupBoxReceive);
        widgetReceiveButton->setObjectName("widgetReceiveButton");
        horizontalLayout_2 = new QHBoxLayout(widgetReceiveButton);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonClearReceive = new QPushButton(widgetReceiveButton);
        pushButtonClearReceive->setObjectName("pushButtonClearReceive");
        pushButtonClearReceive->setMinimumSize(QSize(90, 40));
        pushButtonClearReceive->setMaximumSize(QSize(90, 40));

        horizontalLayout_2->addWidget(pushButtonClearReceive);


        verticalLayout->addWidget(widgetReceiveButton);


        gridLayout_5->addWidget(groupBoxReceive, 0, 0, 2, 1);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(40, 20));
        label_3->setMaximumSize(QSize(40, 20));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        comboBoxPort = new QComboBox(groupBox);
        comboBoxPort->setObjectName("comboBoxPort");
        comboBoxPort->setMinimumSize(QSize(100, 30));
        comboBoxPort->setMaximumSize(QSize(100, 30));

        gridLayout->addWidget(comboBoxPort, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(40, 20));
        label_4->setMaximumSize(QSize(40, 20));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        comboBoxBaud = new QComboBox(groupBox);
        comboBoxBaud->addItem(QString());
        comboBoxBaud->addItem(QString());
        comboBoxBaud->addItem(QString());
        comboBoxBaud->addItem(QString());
        comboBoxBaud->addItem(QString());
        comboBoxBaud->addItem(QString());
        comboBoxBaud->addItem(QString());
        comboBoxBaud->addItem(QString());
        comboBoxBaud->setObjectName("comboBoxBaud");
        comboBoxBaud->setMinimumSize(QSize(100, 30));
        comboBoxBaud->setMaximumSize(QSize(100, 30));

        gridLayout->addWidget(comboBoxBaud, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(40, 20));
        label_5->setMaximumSize(QSize(40, 20));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        comboBoxData = new QComboBox(groupBox);
        comboBoxData->addItem(QString());
        comboBoxData->addItem(QString());
        comboBoxData->addItem(QString());
        comboBoxData->addItem(QString());
        comboBoxData->setObjectName("comboBoxData");
        comboBoxData->setMinimumSize(QSize(100, 30));
        comboBoxData->setMaximumSize(QSize(100, 30));

        gridLayout->addWidget(comboBoxData, 2, 1, 2, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(40, 20));
        label_6->setMaximumSize(QSize(40, 20));

        gridLayout->addWidget(label_6, 3, 0, 2, 1);

        comboBoxStop = new QComboBox(groupBox);
        comboBoxStop->addItem(QString());
        comboBoxStop->addItem(QString());
        comboBoxStop->addItem(QString());
        comboBoxStop->setObjectName("comboBoxStop");
        comboBoxStop->setMinimumSize(QSize(100, 30));
        comboBoxStop->setMaximumSize(QSize(100, 30));

        gridLayout->addWidget(comboBoxStop, 4, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(40, 20));
        label_7->setMaximumSize(QSize(40, 20));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        comboBoxCheck = new QComboBox(groupBox);
        comboBoxCheck->addItem(QString());
        comboBoxCheck->addItem(QString());
        comboBoxCheck->addItem(QString());
        comboBoxCheck->setObjectName("comboBoxCheck");
        comboBoxCheck->setMinimumSize(QSize(100, 30));
        comboBoxCheck->setMaximumSize(QSize(100, 30));

        gridLayout->addWidget(comboBoxCheck, 5, 1, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName("gridLayout_3");
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(50, 20));
        label_8->setMaximumSize(QSize(50, 20));

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        comboBoxReceiveMode = new QComboBox(groupBox_2);
        comboBoxReceiveMode->addItem(QString());
        comboBoxReceiveMode->addItem(QString());
        comboBoxReceiveMode->setObjectName("comboBoxReceiveMode");
        comboBoxReceiveMode->setMinimumSize(QSize(100, 30));
        comboBoxReceiveMode->setMaximumSize(QSize(100, 30));

        gridLayout_3->addWidget(comboBoxReceiveMode, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(50, 20));
        label_9->setMaximumSize(QSize(50, 20));

        gridLayout_3->addWidget(label_9, 1, 0, 1, 1);

        comboBoxReceiveCodec = new QComboBox(groupBox_2);
        comboBoxReceiveCodec->addItem(QString());
        comboBoxReceiveCodec->addItem(QString());
        comboBoxReceiveCodec->addItem(QString());
        comboBoxReceiveCodec->setObjectName("comboBoxReceiveCodec");
        comboBoxReceiveCodec->setMinimumSize(QSize(100, 30));
        comboBoxReceiveCodec->setMaximumSize(QSize(100, 30));

        gridLayout_3->addWidget(comboBoxReceiveCodec, 1, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 1, 1, 2, 1);

        groupBoxSend = new QGroupBox(Widget);
        groupBoxSend->setObjectName("groupBoxSend");
        verticalLayout_2 = new QVBoxLayout(groupBoxSend);
        verticalLayout_2->setObjectName("verticalLayout_2");
        plainTextEditSend = new QPlainTextEdit(groupBoxSend);
        plainTextEditSend->setObjectName("plainTextEditSend");
        plainTextEditSend->setMinimumSize(QSize(0, 100));
        plainTextEditSend->setMaximumSize(QSize(10000, 100));

        verticalLayout_2->addWidget(plainTextEditSend);

        widgetSendButton = new QWidget(groupBoxSend);
        widgetSendButton->setObjectName("widgetSendButton");
        horizontalLayout = new QHBoxLayout(widgetSendButton);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(167, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        checkBoxSendOnTime = new QCheckBox(widgetSendButton);
        checkBoxSendOnTime->setObjectName("checkBoxSendOnTime");

        horizontalLayout->addWidget(checkBoxSendOnTime);

        spinBoxSendOnTime = new QSpinBox(widgetSendButton);
        spinBoxSendOnTime->setObjectName("spinBoxSendOnTime");
        spinBoxSendOnTime->setMinimumSize(QSize(80, 20));
        spinBoxSendOnTime->setMaximumSize(QSize(80, 20));

        horizontalLayout->addWidget(spinBoxSendOnTime);

        pushButtonSend = new QPushButton(widgetSendButton);
        pushButtonSend->setObjectName("pushButtonSend");
        pushButtonSend->setMinimumSize(QSize(90, 40));
        pushButtonSend->setMaximumSize(QSize(90, 40));

        horizontalLayout->addWidget(pushButtonSend);

        pushButtonClearSend = new QPushButton(widgetSendButton);
        pushButtonClearSend->setObjectName("pushButtonClearSend");
        pushButtonClearSend->setMinimumSize(QSize(90, 40));
        pushButtonClearSend->setMaximumSize(QSize(90, 40));

        horizontalLayout->addWidget(pushButtonClearSend);


        verticalLayout_2->addWidget(widgetSendButton);


        gridLayout_5->addWidget(groupBoxSend, 2, 0, 3, 1);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName("gridLayout_4");
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName("label_10");
        label_10->setMinimumSize(QSize(50, 20));
        label_10->setMaximumSize(QSize(50, 20));

        gridLayout_4->addWidget(label_10, 0, 0, 1, 1);

        comboBoxSendMode = new QComboBox(groupBox_3);
        comboBoxSendMode->addItem(QString());
        comboBoxSendMode->addItem(QString());
        comboBoxSendMode->setObjectName("comboBoxSendMode");
        comboBoxSendMode->setMinimumSize(QSize(100, 30));
        comboBoxSendMode->setMaximumSize(QSize(100, 30));

        gridLayout_4->addWidget(comboBoxSendMode, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName("label_11");
        label_11->setMinimumSize(QSize(50, 20));
        label_11->setMaximumSize(QSize(50, 20));

        gridLayout_4->addWidget(label_11, 1, 0, 1, 1);

        comboBoxSendCodec = new QComboBox(groupBox_3);
        comboBoxSendCodec->addItem(QString());
        comboBoxSendCodec->addItem(QString());
        comboBoxSendCodec->addItem(QString());
        comboBoxSendCodec->setObjectName("comboBoxSendCodec");
        comboBoxSendCodec->setMinimumSize(QSize(100, 30));
        comboBoxSendCodec->setMaximumSize(QSize(100, 30));

        gridLayout_4->addWidget(comboBoxSendCodec, 1, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 3, 1, 1, 1);

        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName("gridLayout_2");
        pushButtonStartUSART = new QPushButton(groupBox_4);
        pushButtonStartUSART->setObjectName("pushButtonStartUSART");
        pushButtonStartUSART->setMinimumSize(QSize(60, 40));
        pushButtonStartUSART->setMaximumSize(QSize(60, 40));

        gridLayout_2->addWidget(pushButtonStartUSART, 0, 0, 1, 1);

        pushButtonEndUSART = new QPushButton(groupBox_4);
        pushButtonEndUSART->setObjectName("pushButtonEndUSART");
        pushButtonEndUSART->setMinimumSize(QSize(60, 40));
        pushButtonEndUSART->setMaximumSize(QSize(60, 40));

        gridLayout_2->addWidget(pushButtonEndUSART, 0, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 4, 1, 1, 1);

        labelTime = new QLabel(Widget);
        labelTime->setObjectName("labelTime");
        labelTime->setMinimumSize(QSize(0, 20));
        labelTime->setMaximumSize(QSize(9999, 20));

        gridLayout_5->addWidget(labelTime, 5, 1, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBoxReceive->setTitle(QCoreApplication::translate("Widget", "\346\216\245\346\224\266\345\214\272\346\225\260\346\215\256", nullptr));
        plainTextEditReceive->setPlainText(QString());
        pushButtonClearReceive->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\344\270\262\345\217\243\351\205\215\347\275\256", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\344\270\262\345\217\243\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        comboBoxBaud->setItemText(0, QCoreApplication::translate("Widget", "1200", nullptr));
        comboBoxBaud->setItemText(1, QCoreApplication::translate("Widget", "2400", nullptr));
        comboBoxBaud->setItemText(2, QCoreApplication::translate("Widget", "4800", nullptr));
        comboBoxBaud->setItemText(3, QCoreApplication::translate("Widget", "9600", nullptr));
        comboBoxBaud->setItemText(4, QCoreApplication::translate("Widget", "19200", nullptr));
        comboBoxBaud->setItemText(5, QCoreApplication::translate("Widget", "38400", nullptr));
        comboBoxBaud->setItemText(6, QCoreApplication::translate("Widget", "57600", nullptr));
        comboBoxBaud->setItemText(7, QCoreApplication::translate("Widget", "115200", nullptr));

        label_5->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", nullptr));
        comboBoxData->setItemText(0, QCoreApplication::translate("Widget", "5", nullptr));
        comboBoxData->setItemText(1, QCoreApplication::translate("Widget", "6", nullptr));
        comboBoxData->setItemText(2, QCoreApplication::translate("Widget", "7", nullptr));
        comboBoxData->setItemText(3, QCoreApplication::translate("Widget", "8", nullptr));

        label_6->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", nullptr));
        comboBoxStop->setItemText(0, QCoreApplication::translate("Widget", "1", nullptr));
        comboBoxStop->setItemText(1, QCoreApplication::translate("Widget", "1.5", nullptr));
        comboBoxStop->setItemText(2, QCoreApplication::translate("Widget", "2", nullptr));

        label_7->setText(QCoreApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215", nullptr));
        comboBoxCheck->setItemText(0, QCoreApplication::translate("Widget", "\346\227\240", nullptr));
        comboBoxCheck->setItemText(1, QCoreApplication::translate("Widget", "\345\245\207\346\240\241\351\252\214", nullptr));
        comboBoxCheck->setItemText(2, QCoreApplication::translate("Widget", "\345\201\266\346\240\241\351\252\214", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\216\245\346\224\266\345\214\272\351\205\215\347\275\256", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "\346\216\245\346\224\266\346\250\241\345\274\217", nullptr));
        comboBoxReceiveMode->setItemText(0, QCoreApplication::translate("Widget", "HEX", nullptr));
        comboBoxReceiveMode->setItemText(1, QCoreApplication::translate("Widget", "\346\226\207\346\234\254", nullptr));

        label_9->setText(QCoreApplication::translate("Widget", "\347\274\226\347\240\201\346\250\241\345\274\217", nullptr));
        comboBoxReceiveCodec->setItemText(0, QCoreApplication::translate("Widget", "UTF-8", nullptr));
        comboBoxReceiveCodec->setItemText(1, QCoreApplication::translate("Widget", "ASCII", nullptr));
        comboBoxReceiveCodec->setItemText(2, QCoreApplication::translate("Widget", "GBK", nullptr));

        groupBoxSend->setTitle(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\345\214\272\346\225\260\346\215\256", nullptr));
        checkBoxSendOnTime->setText(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\217\221\351\200\201/ms", nullptr));
        pushButtonSend->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        pushButtonClearSend->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\345\214\272\351\205\215\347\275\256", nullptr));
        label_10->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\346\250\241\345\274\217", nullptr));
        comboBoxSendMode->setItemText(0, QCoreApplication::translate("Widget", "HEX", nullptr));
        comboBoxSendMode->setItemText(1, QCoreApplication::translate("Widget", "\346\226\207\346\234\254", nullptr));

        label_11->setText(QCoreApplication::translate("Widget", "\347\274\226\347\240\201\346\250\241\345\274\217", nullptr));
        comboBoxSendCodec->setItemText(0, QCoreApplication::translate("Widget", "UTF-8", nullptr));
        comboBoxSendCodec->setItemText(1, QCoreApplication::translate("Widget", "ASCII", nullptr));
        comboBoxSendCodec->setItemText(2, QCoreApplication::translate("Widget", "GBK", nullptr));

        groupBox_4->setTitle(QCoreApplication::translate("Widget", "\344\270\262\345\217\243\351\223\276\346\216\245", nullptr));
        pushButtonStartUSART->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        pushButtonEndUSART->setText(QCoreApplication::translate("Widget", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        labelTime->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
