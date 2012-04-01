#ifndef DOWNLOAD_H
#define DOWNLOAD_H

#include <QNetworkReply>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QFile>
class download : public QObject
{
    Q_OBJECT
    QString url;
    QString saveurl;
    QNetworkAccessManager * manager;
    QNetworkReply * reply;
    QFile file;
public:
    explicit download(QObject *parent = 0);
    void requestdownload(QString url, QString saveurl);
    QNetworkReply * networkreply();
signals:
    
public slots:
    
};

#endif // DOWNLOAD_H
