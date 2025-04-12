#include "docxml.h"
#include <QFile>
#include <QDomDocument> //文件
#include <QDomProcessingInstruction> //格式头部
#include <QDomElement> //元素
#include <QTextStream>
#include <QDebug>
#define cout qDebug() << "[" << __FILE__ <<":"<<__LINE__<<"]"
#include <QDateTime>

DocXML::DocXML()
{
}

void DocXML::createXML(QString filePath)
{
    QFile file(filePath);
    if( true == file.exists())
    {
        cout << "文件已存在";
        return;
    }
    else
    {
        //不存在才创建
        bool isOK = file.open(QIODevice::WriteOnly);
        if(false == isOK)
        {
            cout << "只读打开失败";
            return;
        }
        else
        {
            //创建xml文档对象  DOM:Document Object Model
            QDomDocument doc;
            //创建xml头部格式 <?xml version='1.0' encoding='utf-8'?>
            QDomProcessingInstruction ins;
            ins = doc.createProcessingInstruction("xml", "version=\'1.0\' encoding=\'utf-8\'");
            //追加元素
            doc.appendChild(ins);

            //根节点元素
            QDomElement root = doc.createElement("日销售清单");
            doc.appendChild(root);




            //保存
            QTextStream stream(&file);
            doc.save(stream,4); //4:字符缩进

            file.close();



        }
    }
}

/*1)没有子节点，创建<日期>子节点
2)日期设置属性
3)在<日期>创建时间
4)时间设置属性
5)时间下面创建<厂家>
6)<厂家>设置内容*/
//创建xml空文件

void DocXML::appendXML(QString filePath, QStringList list)
{
    QFile file(filePath);
    bool isOK = file.open(QIODevice::ReadOnly);
    if(true == isOK)
    {
        //file 和 xml文档对象关联
        QDomDocument doc;
        isOK = doc.setContent(&file);//读入file内容
        if(true == isOK)
        {
            file.close();
            //获取根节点元素
            QDomElement root = doc.documentElement();

            //获取当前时间
            QDateTime date = QDateTime::currentDateTime();
            QString datestr = date.toString("yyyy-MM-dd");

            if( true == root.hasChildNodes())
            {
                //查找最后一个子节点
                QDomElement lastEmt = root.lastChildElement();
                if(lastEmt.attribute("date") == datestr)
                {

                    writeXML(doc, lastEmt, list);
                }
                else  //今天还未有车辆出售--创建新日期子节点
                {
                    //创建日期子节点元素
                    QDomElement dateEmt = doc.createElement("日期");
                    //创建date属性
                    QDomAttr dateAttr = doc.createAttribute("date");
                    //设置属性的值
                    dateAttr.setNodeValue(datestr);
                    //节点关联属性
                    dateEmt.setAttributeNode(dateAttr);
                    //追加到根节点
                    root.appendChild(dateEmt);

                    //写有效数据
                    writeXML(doc, dateEmt, list);
                }

            }
            else //无子节点
            {
                //创建日期子节点元素
                QDomElement dateEmt = doc.createElement("日期");
                //创建date属性
                QDomAttr dateAttr = doc.createAttribute("date");
                //设置属性的值
                dateAttr.setNodeValue(datestr);
                //节点关联属性
                dateEmt.setAttributeNode(dateAttr);
                //追加到根节点
                root.appendChild(dateEmt);

                //写入有效数据
                writeXML(doc, dateEmt, list);
            }

            //保存文件
            isOK = file.open(QIODevice::WriteOnly);
            if(isOK)
            {
                QTextStream stream(&file);
                doc.save(stream , 4);
                file.close();
            }
            else
            {
                cout << "writeOnly error!";
            }

        }
        else
        {
            cout << "setContent error";
            return;
        }
    }
    else
    {
        cout << "只读打开失败";
        return;


    }
}

void DocXML::writeXML(QDomDocument &doc,QDomElement &root, QStringList &list)
{
    //获取当前时间
    QDateTime time = QDateTime::currentDateTime();
    QString timestr = time.toString("hh:mm:ss");

    //创建时间节点元素
    QDomElement timeEmt = doc.createElement("时间");
    //创建属性
    //    QDomAttr timeAttr = doc.createAttribute("time");
    //    timeAttr.setNodeValue(timestr);
    //    timeEmt.setAttributeNode(timeAttr);
    timeEmt.setAttribute("time", timestr);
    root.appendChild(timeEmt);


    QDomElement factory = doc.createElement("厂家");
    QDomElement brand = doc.createElement("品牌");
    QDomElement price = doc.createElement("报价");
    QDomElement num = doc.createElement("数量");
    QDomElement total = doc.createElement("金额");

    QDomText text = doc.createTextNode(list.at(0));
    factory.appendChild(text);

    text = doc.createTextNode(list.at(1));
    brand.appendChild(text);

    text = doc.createTextNode(list.at(2));
    price.appendChild(text);

    text = doc.createTextNode(list.at(3));
    num.appendChild(text);

    text = doc.createTextNode(list.at(4));
    total.appendChild(text);

    timeEmt.appendChild(factory);
    timeEmt.appendChild(brand);
    timeEmt.appendChild(price);
    timeEmt.appendChild(num);
    timeEmt.appendChild(total);





}

void DocXML::readXML(QString filePath, QString &date, QStringList &timeList, QStringList &fList, QStringList &bList, QStringList &pList, QStringList &nList, QStringList &tList)
{
    QFile file(filePath);
    bool isOK = file.open(QIODevice::ReadOnly);
    if(true == isOK)
    {
        //file 和 xml文档对象关联
        QDomDocument doc;
        isOK = doc.setContent(&file);//读入file内容
        if(true == isOK)
        {
            file.close();
            //获取根节点元素
            QDomElement root = doc.documentElement();

            //获取当前日期
            QDateTime datenow = QDateTime::currentDateTime();
            QString datestr = datenow.toString("yyyy-MM-dd");

            if( true == root.hasChildNodes())
            {
                QDomElement lastEmt = root.lastChildElement();
               if(lastEmt.attribute("date") == datestr)
               {
                   date = lastEmt.attribute("date");
                   //找出当前日期下所有时间子节点
                   QDomNodeList timeNodeList = lastEmt.childNodes();
                   for(int i = 0; i< timeNodeList.size();i++)
                   {
                        //转换为元素，找到时间节点下的所有子节点

                       //QString time = timelist.at(i).toElement().text();
                       //text()返回该元素所有子节点的内容 并拼接在一起
                       QString time = timeNodeList.at(i).toElement().attribute("time");
                       timeList.append(time);

                       QDomNodeList subList = timeNodeList.at(i).toElement().childNodes();

                       QString factory = subList.at(0).toElement().text();
                       fList.append(factory);

                       QString brand = subList.at(1).toElement().text();
                       bList.append(brand);

                       QString price = subList.at(2).toElement().text();
                       pList.append(price);

                       QString num = subList.at(3).toElement().text();
                       nList.append(num);

                       QString total = subList.at(4).toElement().text();
                       tList.append(total);
                   }
               }
               else
               {
                   cout << "不存在当天日期";
                   return;
               }
            }
            else
            {
                cout << "无子节点，没有销售记录";
                return;
            }



        }
        else
        {
            cout << "setContent error!";
            return;
        }
    }
    else
    {
        cout << "file readOnly failed!";
        return;
    }


}











