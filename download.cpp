#include "download.h"

download::download(QObject *parent) :
    QObject(parent)
{
    manager = new QNetworkAccessManager(this);
}
void download::requestdownload(QString url ,QString saveurl)
{
    reply = manager->get(QNetworkRequest(QUrl(url)));
}
QNetworkReply * download::networkreply()
{
    return reply;
}
