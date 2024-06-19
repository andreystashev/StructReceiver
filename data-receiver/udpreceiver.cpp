#include "udpreceiver.h"


UdpReceiver::UdpReceiver(QObject *parent)
    : QUdpSocket{parent}
{

}

void UdpReceiver::newConnect(int port)
{
    clientPort = port;
    address = new QHostAddress();

    if(socket == Q_NULLPTR) {
        socket = new QUdpSocket;

    }
    socket->bind(QHostAddress::Any,clientPort);
    connect(socket,SIGNAL(readyRead()),this,SLOT(readMessage()));
}


void UdpReceiver::readMessage()
{
    socket->readDatagram(datagram.data(),datagramSize,address);
    emit receivedData(&datagram);
}


