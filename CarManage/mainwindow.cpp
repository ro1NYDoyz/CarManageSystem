#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QDebug>
#include <QComboBox>
#include "docxml.h"
#define cout qDebug() << "[" << __FILE__ <<":"<<__LINE__<<"]"
#include "histogram.h"
#include <algorithm>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionCar, &QAction::triggered, this, &MainWindow::TriggerActionCar);
    connect(ui->actionCalc, &QAction::triggered, this, &MainWindow::TriggerActionCalc);

    //打开数据库
    connectDB();

    //初始化数据
    initData();

    connect(ui->comboBoxFactory, &QComboBox::currentTextChanged, this, &MainWindow::factBox);
    connect(ui->comboBoxBrand, &QComboBox::currentTextChanged, this, &MainWindow::brandBox);
    connect(ui->spinBox, SIGNAL(valueChanged(int)), this, SLOT(spinBox(int)));
    connect(ui->btnCancel, &QPushButton::clicked, this, &MainWindow::clickCancel);
    connect(ui->btnSure, &QPushButton::clicked, this, &MainWindow::clickSure);

    filePath = QString("../demo.xml");
    DocXML::createXML(filePath);


    //数据统计界面设置
    connect(ui->actionCalc, &QAction::triggered, this, &MainWindow::actionCalc);
    connect(ui->comboBoxManaFac, &QComboBox::currentTextChanged, this, &MainWindow::manaFacToBrandBox);
    connect(ui->comboBoxManaBrand,  &QComboBox::currentTextChanged, this, &MainWindow::pieNhis);



}




void MainWindow::TriggerActionCar()
{
    ui->stackedWidget->setCurrentWidget(ui->car);
    ui->labelHead->setText("车辆管理");
}

void MainWindow::TriggerActionCalc()
{
    ui->stackedWidget->setCurrentWidget(ui->calc);
    ui->labelHead->setText("销售统计");
}

void MainWindow::connectDB()
{
    //添加数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("123456");
    db.setDatabaseName("car");

    //打开数据库
    if(false == db.open())
    {
        QMessageBox::warning(this, "数据库打开失败", db.lastError().text());
        return;
    }
}

//初始化数据，将数据库链接至工厂下拉框
void MainWindow::initData()
{
    //新建模型
    QSqlQueryModel *queryModel = new QSqlQueryModel(this);
    queryModel->setQuery("select  name from factory");  //sql语句 使模型拥有该数据

    ui->comboBoxFactory->setModel(queryModel);

    ui->lineEditPrice->setReadOnly(true);
    ui->labelLast->setText("0");  //last数量
    ui->lineEditTotal->setDisabled(true);//总金额
    ui->spinBox->setDisabled(true);


}

//下拉框
void MainWindow::factBox(const QString &fac)
{

    if(fac == "请选择厂家")
    {//内容清空
        ui->comboBoxBrand->clear();//品牌下拉框情况
        ui->lineEditPrice->clear();//报价清空
        ui->labelLast->setText("0");
        ui->lineEditTotal->clear();
        ui->spinBox->clear();

    }
    else
    {
        ui->comboBoxBrand->clear();//清空brand下拉框
        QSqlQuery query;
        QString sql = QString("select name from brand where factory = '%1'").arg(fac);
        //执行sql语句
        query.exec(sql);

        //获取内容
        while(query.next())
        {
            QString name = query.value(0).toString();
            ui->comboBoxBrand->addItem(name);

        }
        ui->spinBox->setDisabled(false);


    }

}

//具体车型选择
void MainWindow::brandBox(const QString &brand)
{
    ui->lineEditTotal->setDisabled(false);
    ui->lineEditTotal->setReadOnly(true);

    QSqlQuery query;
    QString sql = QString("select price, last from brand where factory = '%1' and name = '%2'")
            .arg(ui->comboBoxFactory->currentText())
            .arg(brand);
    //执行sql语句
    query.exec(sql);

    //获取内容
    while(query.next())
    {
        //报价
        int price = query.value("price").toInt();
        //剩余数
        int last = query.value("last").toInt();

        //更新到对应控件
        ui->lineEditPrice->setText(QString::number(price));;
        ui->labelLast->setText(QString::number(last));
        ui->spinBox->setValue(0);
    }
}

//售出数量选择
void MainWindow::spinBox(int num)
{

    //获取数据库中车型剩余数量及总量
    QSqlQuery query;
    QString sql = QString("select sum, last from brand where factory = '%1' and name = '%2'")
            .arg(ui->comboBoxFactory->currentText()).arg(ui->comboBoxBrand->currentText());

    query.exec(sql);

    int last;
    while(query.next())
    {

        last = query.value("last").toInt();
    }

    // 控制库存不为负
    if(num > last)
    {
        ui->spinBox->setValue(last);
        return;

    }

    //购买量为0时确认按钮禁用
    if(num == 0)
    {
        ui->btnSure->setEnabled(false);
    }
    else
    {
        ui->btnSure->setEnabled(true);
    }


    //更新剩余数量
    int temNum = last - num;
    ui->labelLast->setText( QString::number(temNum));

    //金额
    int price = ui->lineEditPrice->text().toInt();
    int total = price * num;
    ui->lineEditTotal->setText(QString::number(total));
}

//取消按钮设置
void MainWindow::clickCancel()
{
    ui->comboBoxFactory->setCurrentIndex(0);
    ui->spinBox->clear();
    ui->spinBox->setDisabled(true);
}

//确认按钮功能设置
void MainWindow::clickSure()
{
    //获取数据
    QSqlQuery query;
    int last = ui->labelLast->text().toInt();
    int sum;
    int sell;

    QString sql = QString("Select sum, sell, last from brand where factory = '%1' and name = '%2' ")
            .arg(ui->comboBoxFactory->currentText())
            .arg(ui->comboBoxBrand->currentText());
    query.exec(sql);
    while (query.next())
    {
        sum = query.value("sum").toInt();
    }
    sell = sum - last;
    //更新数据库
    sql = QString("Update brand set sell = %1, last = %2 where factory = '%3' and name = '%4'")
            .arg(sell)
            .arg(last)
            .arg(ui->comboBoxFactory->currentText())
            .arg(ui->comboBoxBrand->currentText());
    query.exec(sql);

    //确认后数据更新至xml
    QStringList list;
    list.append(ui->comboBoxFactory->currentText());
    list.append(ui->comboBoxBrand->currentText());
    list.append(ui->lineEditPrice->text());
    list.append(ui->spinBox->text());
    list.append(ui->lineEditTotal->text());
    DocXML::appendXML(filePath, list);
    //读取XML中内容，写入textEdit控件
    QStringList fList;
    QStringList bList;
    QStringList pList;
    QStringList nList;
    QStringList tList;
    QStringList timeList;
    QString date;
    DocXML::readXML(filePath, date, timeList, fList, bList, pList, nList, tList);
    //日销售清单  字样居中
    QTextCursor cursor = ui->textEdit->textCursor();
    QTextBlockFormat centerFormat;
    centerFormat.setAlignment(Qt::AlignCenter);
    cursor.insertBlock(centerFormat);
    QString str = QString("————————————日销售清单————————————");
    cursor.insertText(str);
    //其余字样居左
    centerFormat.setAlignment(Qt::AlignLeft);
    cursor.insertBlock(centerFormat);
    QString dateStr = QString(date+"\r");
    ui->textEdit->append(dateStr);
    for(int i = 0; i < fList.size(); i++)
    {
        QString str = QString("[%6] %1-%2:卖出了%3辆，单价:%4万，总价:%5万")
                .arg(fList.at(i))
                .arg(bList.at(i))
                .arg(nList.at(i))
                .arg(pList.at(i))
                .arg(tList.at(i))
                .arg(timeList.at(i));
        ui->textEdit->append(str);
        qDebug() << str.toUtf8().data();
    }




    //确认后初始化
    ui->btnSure->setEnabled(false);
    clickCancel();

}

void MainWindow::actionCalc()
{
//    QSqlQuery query;
//    int last;
//    int sell;

//    QString sql = QString("Select sell, last from brand where factory = '%1' and name = '%2' ")
//            .arg(ui->comboBoxFactory->currentText())
//            .arg(ui->comboBoxBrand->currentText());
//    query.exec(sql);
//    while (query.next())
//    {
//        last = query.value("last").toInt();
//        sell = query.value("sell").toInt();
//    }


    QSqlQueryModel *modelFactory = new QSqlQueryModel(this);
    modelFactory->setQuery("select  name from factory");
    ui->comboBoxManaFac->setModel(modelFactory);



}

void MainWindow::manaFacToBrandBox(const QString &fac)
{
    ui->comboBoxManaBrand->clear();
    QSqlQueryModel *modelBrand = new QSqlQueryModel(this);
    QString sqlBoxBrand = QString("select name from brand where factory = '%1'").arg(fac);
    modelBrand->setQuery(sqlBoxBrand);
    ui->comboBoxManaBrand->setModel(modelBrand);

    //设置h柱状图数据
    ui->widgetH->Clear();

    QSqlQuery query;
    QList<int> list;
    QString sqlName = QString("Select name, sell from brand where factory = '%1'")
            .arg(ui->comboBoxManaFac->currentText());
    query.exec(sqlName);
    while(true == query.next())
    {
        list.append(query.value("sell").toInt());
        ui->widgetH->AddItem(query.value("name").toString(), query.value("sell").toDouble());
    }
    int maxSum = *std::max_element(list.begin(), list.end());
    ui->widgetH->SetMaxValue(maxSum + 5);

}

void MainWindow::pieNhis()
{
    if(ui->comboBoxManaFac->currentText() == "请选择厂家")
    {
        ui->widgetH->Clear();

        return;
    }
    //获取数据
    QSqlQuery query;
    double last;
    double sum;
    double sell;

    QString sqlData = QString("Select sum, last from brand where factory = '%1' and name = '%2' ")
            .arg(ui->comboBoxManaFac->currentText())
            .arg(ui->comboBoxManaBrand->currentText());
    query.exec(sqlData);
    while (query.next())
    {
        last = query.value("last").toDouble();
        sum = query.value("sum").toDouble();
        sell = sum - last;
        //cout << last << sum << sell;
    }

    //设置pie数据
    QVector<SectorInfo> result;

    SectorInfo info;
    info.description = "已经出售";
    info.percent = sell  / sum * 100;
    result.push_back(info);

    info.description = "剩余";
    info.percent = last  / sum * 100;
    result.push_back(info);

    ui->widgetP->setData(result);



}



MainWindow::~MainWindow()
{
    delete ui;
}
