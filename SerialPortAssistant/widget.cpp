#include "widget.h"
#include "ui_widget.h"

void Widget::ReceiveInit(void) //接收区初始化
{
    ui->plainTextEditReceive->setReadOnly(true); //接收区只读
    connect(ui->pushButtonClearReceive,&QPushButton::clicked,[&](){ //信号槽 匿名函数 当按下清空接收区按钮清空接收区内容
        ui->plainTextEditReceive->clear();
    });

    connect(serialport,&QSerialPort::readyRead,[&](){ //信号槽 匿名函数 如果收到了数据就读取并显示
        auto data = serialport->readAll();
        if(ui->comboBoxReceiveMode->currentText() == "HEX") //如果选择的接收模式为HEX模式
        {
            QString hex = data.toHex(' '); //data转换为HEX格式并以空格分隔
            ui->plainTextEditReceive->appendPlainText(hex); //显示到接收区
        }
        else if(ui->comboBoxReceiveMode->currentText() == "文本") //如果选择的接收模式为文本模式
        {
            if(ui->comboBoxReceiveCodec->currentText()=="UTF-8") //字节流转换为UTF-8编码
            {
                QString text = QString::fromUtf8(data);
                ui->plainTextEditReceive->appendPlainText(text);
            }
            else if(ui->comboBoxReceiveCodec->currentText()=="ASCII") //字节流转换为ASCII编码
            {
                QString text = QString::fromLatin1(data);
                ui->plainTextEditReceive->appendPlainText(text);
            }
            else if(ui->comboBoxReceiveCodec->currentText()=="GBK") //字节流转换为GBK编码
            {
                QString text = QString::fromLocal8Bit(data);
                ui->plainTextEditReceive->appendPlainText(text);
            }
        }
    });
}

void Widget::SendInit() //发送区初始化
{
    connect(ui->pushButtonClearSend,&QPushButton::clicked,[&](){ //信号槽 匿名函数 当按下清空发送区按钮清空发送区内容
        ui->plainTextEditSend->clear();
    });

    ui->pushButtonSend->setDisabled(true); //先将发送按钮设置为不可点击，当连接上串口后才能发送

    connect(ui->pushButtonSend,&QPushButton::clicked,[&](){
        QString data = ui->plainTextEditSend->toPlainText(); //从文本框获得内容存入data中
        if(ui->comboBoxSendMode->currentText() == "HEX") //如果为HEX发送模式
        {
            QByteArray arr; //创建一个二进制数组
            for(int i=0;i<data.size();i++) //遍历读取到的data，
            {
                if(data[i] == ' ') continue; //如果读到了空格就跳过
                else
                {
                    int num = data.mid(i,2).toUInt(nullptr,16); //将data从i取两位，转换为16进制数并给num赋值
                    i++; //因为是两位数，所以i要加两次
                    arr.append(num); //将算好的num以字节存入
                }
                serialport->write(arr); //串口写入arr二进制数组
            }
        }
        else //如果为文本发送模式
        {
            if(ui->comboBoxSendCodec->currentText()=="UTF-8") //选择了UTF-8编码
            {
                serialport->write(data.toUtf8());
            }
            else if(ui->comboBoxSendCodec->currentText()=="ASCII") //选择了ASCII编码
            {
                serialport->write(data.toLatin1());
            }
            else if(ui->comboBoxSendCodec->currentText()=="GBK") //选择了GBK编码
            {
                serialport->write(data.toLocal8Bit());
            }
        }
    });
}

void Widget::SendSetInit() //发送区配置初始化
{
    ui->comboBoxSendCodec->setDisabled(true); //初始打开时默认为HEX，所以编码模式默认选不了

    connect(ui->comboBoxSendMode,&QComboBox::currentTextChanged,[&](){ //信号槽 匿名函数 如果目前的text被改变了，就做判断
        if(ui->comboBoxSendMode->currentText() == "HEX")
        {
            ui->comboBoxSendCodec->setDisabled(true); //是HEX就没有编码模式
        }
        else
        {
            ui->comboBoxSendCodec->setEnabled(true); //是文本就有编码模式
        }

    });
}

void Widget::ReceiveSetInit()
{
    ui->comboBoxReceiveCodec->setDisabled(true); //初始打开时默认为HEX，所以编码模式默认选不了

    connect(ui->comboBoxReceiveMode,&QComboBox::currentTextChanged,[&](){ //信号槽 匿名函数 如果目前的text被改变了，就做判断
        if(ui->comboBoxReceiveMode->currentText() == "HEX")
        {
            ui->comboBoxReceiveCodec->setDisabled(true); //是HEX就没有编码模式
        }
        else
        {
            ui->comboBoxReceiveCodec->setEnabled(true); //是文本就有编码模式
        }
    });
}

void Widget::USARTLinkInit() //串口链接初始化
{
    serialport = new QSerialPort(this);  //创建串口指针，此对象配置好的函数将会用到这个对象

    ui->pushButtonEndUSART->setDisabled(true); //开始时没有打开串口，所以关闭串口按钮不能选择
    ui->comboBoxBaud->setCurrentText("9600");
    ui->comboBoxData->setCurrentText("8");

    connect(ui->pushButtonStartUSART,&QPushButton::clicked,[&](){ //信号槽 匿名函数 打开串口后的设置
        QString port = ui->comboBoxPort->currentText(); //读取目前的各种设置
        QString baud = ui->comboBoxBaud->currentText();
        QString data = ui->comboBoxStop->currentText();
        QString stop = ui->comboBoxStop->currentText();
        QString check = ui->comboBoxCheck->currentText();
        if(port != "") //如果目前串口号非空
        {
            ui->pushButtonStartUSART->setDisabled(true); //连接了就不能再连接串口了
            ui->pushButtonEndUSART->setEnabled(true); //连接了关闭串口就能按了
            ui->pushButtonSend->setEnabled(true); //连接了发送按钮就能按了
            USART(port,baud,data,stop,check);
        }
        else
        {
            QMessageBox::critical(this, QString::fromLocal8Bit("串口打开失败"), QString::fromLocal8Bit("请确认是否存在串口")); //没有串口报错
        }
    });

    connect(ui->pushButtonEndUSART,&QPushButton::clicked,[&](){ //信号槽 匿名函数 断开串口
        ui->pushButtonStartUSART->setEnabled(true); //断开了就可以做连接串口操作了
        ui->pushButtonEndUSART->setDisabled(true); //断开了了关闭串口就不能按了
        ui->pushButtonSend->setDisabled(true); //断开了发送按钮就不能按了
        serialport->close(); //断开串口
    });
}

void Widget::RefreshPort()
{
    refreshTimer = new QTimer(this); //创建定时器

    connect(refreshTimer,&QTimer::timeout,this,[&](){
        QVector<QString> availablePorts; //创建字符串数组，用来存储目前可用的串口

        foreach(const QSerialPortInfo info, QSerialPortInfo::availablePorts()) { //读取目前可用的串口并存入字符串数组中
            availablePorts.append(info.portName());
        }

        QVector<QString> currentPorts; //创建字符串数组，用来存储comboBoxPort上有的串口

        for(int i=0;i<ui->comboBoxPort->count();++i)
        {
            currentPorts.append(ui->comboBoxPort->itemText(i)); //获取每个条目的文本
        }

        if (availablePorts != currentPorts) //如果当前的串口号列表与新获取到的串口号列表不同，则更新ComboBoxPort
        {
            ui->comboBoxPort->clear(); //清空现有的串口号
            ui->comboBoxPort->addItems(availablePorts); //更新ComboBoxPort
        }
    });
    refreshTimer->start(1000); //定时器设定时间1000ms刷新
}

void Widget::SendOnTime() //定时发送
{
    ui->spinBoxSendOnTime->setMaximum(60000); //最大值设置为60000毫秒
    ui->spinBoxSendOnTime->setValue(1000);    //初始化值设置为1000 毫秒

    sendTimer = new QTimer(this);

    connect(ui->checkBoxSendOnTime,&QCheckBox::stateChanged,this,[&](int state){
        if(state == Qt::Checked)
        {
            int interval = ui->spinBoxSendOnTime->value();

            sendTimer->start(interval);
        }
        else
        {
            sendTimer->stop();
        }
    });

    connect(sendTimer,&QTimer::timeout,this,[&](){
        if(ui->pushButtonSend->isEnabled())
        {
            QString data = ui->plainTextEditSend->toPlainText();
            if(!data.isEmpty())
            {
                if(ui->comboBoxSendMode->currentText() == "HEX") //如果为HEX发送模式
                {
                    QByteArray arr; //创建一个二进制数组
                    for(int i=0;i<data.size();i++) //遍历读取到的data，
                    {
                        if(data[i] == ' ') continue; //如果读到了空格就跳过
                        else
                        {
                            int num = data.mid(i,2).toUInt(nullptr,16); //将data从i取两位，转换为16进制数并给num赋值
                            i++; //因为是两位数，所以i要加两次
                            arr.append(num); //将算好的num以字节存入
                        }
                        serialport->write(arr); //串口写入arr二进制数组
                    }
                }
                else //如果为文本发送模式
                {
                    if(ui->comboBoxSendCodec->currentText()=="UTF-8") //选择了GBK编码
                    {
                        serialport->write(data.toUtf8());
                    }
                    else if(ui->comboBoxSendCodec->currentText()=="ASCII")
                    {
                        serialport->write(data.toLatin1());
                    }
                    else if(ui->comboBoxSendCodec->currentText()=="GBK")
                    {
                        serialport->write(data.toLocal8Bit());
                    }
                }
            }
        }
    });
}

void Widget::UpdateTime() //刷新label时间
{
    time = new QTimer(this);
    connect(time,&QTimer::timeout,this,[&](){
        QDateTime currentTime = QDateTime::currentDateTime();
        QString timeString = currentTime.toString("yyyy-MM-dd HH:mm:ss");
        timeString = "Time: "+timeString;
        ui->labelTime->setText(timeString);
    });
    time->start(1000);
}

void Widget::USART(QString port, QString baud, QString data,QString stop,QString check) //串口 核心代码
{
    QSerialPort::BaudRate Baud; //波特率
    QSerialPort::DataBits Data; //数据位
    QSerialPort::StopBits Stop; //停止位
    QSerialPort::Parity Check; //校验位

    QString BaudArray[] ={"1200", "2400", "4800", "9600", "19200", "38400", "57600", "115200"}; //使用数组方便循环判断当前选择波特率
    QSerialPort::BaudRate baudRates[] = { //和上面数组同样，枚举数组方便赋值
        QSerialPort::Baud1200,
        QSerialPort::Baud2400,
        QSerialPort::Baud4800,
        QSerialPort::Baud9600,
        QSerialPort::Baud19200,
        QSerialPort::Baud38400,
        QSerialPort::Baud57600,
        QSerialPort::Baud115200
    };

    Baud = QSerialPort::Baud9600; //波特率默认为9600
    for(int i = 0; i < 8; ++i) //循环判断传入的参数的波特率，赋值正确的枚举值
    {
        if(baud == BaudArray[i])
        {
            Baud = baudRates[i];
            break;
        }
    }

    QString DataArray[] = {
        "5", "6", "7", "8"
    };

    QSerialPort::DataBits dataBits[] = {
        QSerialPort::Data5,
        QSerialPort::Data6,
        QSerialPort::Data7,
        QSerialPort::Data8
    };
    Data = QSerialPort::Data8; //默认为Data8
    for(int i = 0; i < 4; ++i)
    {
        if(data == DataArray[i])
        {
            Data = dataBits[i];
            break;
        }
    }

    //其他的内容判断没有那么多，只是练手代码，故写为if判断

    if(stop == "1") Stop = QSerialPort::OneStop; //停止位的判断
    else if(stop == "1.5") Stop = QSerialPort::OneAndHalfStop;
    else if(stop == "2") Stop = QSerialPort::TwoStop;

    if(check == QString::fromLocal8Bit("无")) Check = QSerialPort::NoParity; //校验位判断
    else if(check == QString::fromLocal8Bit("奇校验")) Check = QSerialPort::OddParity;
    else if(check == QString::fromLocal8Bit("偶校验")) Check = QSerialPort::EvenParity;

    serialport->setBaudRate(Baud); //设置串口的各种配置
    serialport->setPortName(port);
    serialport->setDataBits(Data);
    serialport->setParity(Check);
    serialport->setStopBits(Stop);

    if(serialport->open(QSerialPort::ReadWrite)) //如果打开了串口的读写模式
    {
        //成功不写内容，接收区另写具体函数
    }
    else //如果没有成功链接串口
    {
        QMessageBox::critical(this, QString::fromLocal8Bit("串口连接失败"), QString::fromLocal8Bit("请确认串口是否正确连接")); //打开失败报错
    }
}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    USARTLinkInit();
    SendInit();
    SendSetInit();
    ReceiveInit();
    ReceiveSetInit();
    SendOnTime();
    UpdateTime();
    RefreshPort();
}

Widget::~Widget()
{
    delete ui;
}
