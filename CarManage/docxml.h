#ifndef DOCXML_H
#define DOCXML_H
#include <QString>
#include <QStringList>
#include <QDomDocument>
class DocXML
{
public:
    DocXML();

    static void createXML(QString filePath);//创建xml空文件
    static void appendXML(QString filePath, QStringList list);//list(0)为厂家
    static void writeXML(QDomDocument &doc,QDomElement &root, QStringList &list);
    static void readXML(QString filePath,
                        QString &date,
                        QStringList &timeList,
                        QStringList &fList,
                        QStringList &bList,
                        QStringList &pList,
                        QStringList &nList,
                        QStringList &tList);

};

#endif // DOCXML_H
