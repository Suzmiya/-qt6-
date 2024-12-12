#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>

#include <QSerialPortInfo>
#include <QSerialPort>
#include <QMessageBox>
#include <QTimer>
#include <QDateTime>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void ReceiveInit(void); //接收区初始化
    void SendInit(void); //发送区初始化
    void USART(QString port, QString baud, QString data,QString stop,QString check); //串口初始化 重点
    void SendSetInit(void); //发送区配置初始化
    void ReceiveSetInit(void); //接收区配置初始化
    void USARTLinkInit(void); //串口链接初始化
    void RefreshPort(void); //刷新串口号
    void SendOnTime(void); //定时发送
    void UpdateTime(void); //刷新时间

private:
    Ui::Widget *ui;

    QSerialPort* serialport; //串口指针
    QTimer* refreshTimer;
    QTimer* sendTimer;
    QTimer* time;
};
#endif // WIDGET_H
