#ifndef UDPRECEIVER_H
#define UDPRECEIVER_H

#include <QtNetwork/QUdpSocket>


class UdpReceiver : public QUdpSocket
{
    Q_OBJECT
public:
    int clientPort;
    QHostAddress *address;
    QByteArray datagram;
    int datagramSize;
    QUdpSocket *socket = Q_NULLPTR;

    explicit UdpReceiver(QObject *parent = nullptr);
    void newConnect(int port);

 signals:
    void receivedData(QByteArray*);

 public slots:
    void readMessage();
};

#endif // UDPRECEIVER_H

