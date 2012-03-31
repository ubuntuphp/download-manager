#ifndef DOWNLOAD_H
#define DOWNLOAD_H

#include <QNetworkReply>

class download : public QNetworkReply
{
    Q_OBJECT
    QString url;
public:
    explicit download(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // DOWNLOAD_H
