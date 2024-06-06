#include "Mppt.h"
#include "util.h"

Mppt::Mppt(int channel, QObject *parent)
    : QObject{parent}
{
    byteStream_.fill(0x00, 14);
    byteStream_[0] = 0x0E;
    byteStream_[1] = 0x09;
    QByteArray channelByte = Util::formatInt(channel, 1);
    byteStream_[2] = channelByte[0];
    updateByteStream();
}

bool Mppt::alive() const{
    return alive_;
}

int Mppt::arrayVoltage() const{
    return arrayVoltage_;
}

int Mppt::arrayCurrent() const{
    return arrayCurrent_;
}

int Mppt::batteryVoltage() const{
    return batteryVoltage_;
}

int Mppt::temp() const{
    return temp_;
}

QByteArray Mppt::byteStream() const{
    return byteStream_;
}

QByteArray Mppt::encodedByteStream() const{
    return encodedByteStream_;
}

QString Mppt::byteStreamStr() const {
    return QString(byteStream_.toHex(' '));
}

QString Mppt::encodedByteStreamStr() const{
    return QString(encodedByteStream_.toHex(' '));
}

void Mppt::setAlive(bool on){
    byteStream_[2] += on ? 0x80 : -0x80;
    alive_ = on;
    updateByteStream();
}

void Mppt::setArrayVoltage(int i){
    QByteArray in = Util::formatInt(i, 2);
    byteStream_.replace(3, 2, in);
    arrayVoltage_ = i;
    updateByteStream();
}

void Mppt::setArrayCurrent(int i){
    QByteArray in = Util::formatInt(i, 2);
    byteStream_.replace(5, 2, in);
    arrayCurrent_ = i;
    updateByteStream();
}

void Mppt::setBatteryVoltage(int i){
    QByteArray in = Util::formatInt(i, 2);
    byteStream_.replace(7, 2, in);
    batteryVoltage_ = i;
    updateByteStream();
}

void Mppt::setTemp(int i){
    QByteArray in = Util::formatInt(i, 2);
    byteStream_.replace(9, 2, in);
    temp_ = i;
    updateByteStream();
}

void Mppt::updateByteStream(){
    QByteArray checksum = Util::generateChecksum(byteStream_, 1, 10);
    byteStream_[11] = checksum.at(0);
    byteStream_[12] = checksum.at(1);
    encodedByteStream_ = Util::encodeByteStream(byteStream_);
    emit encodedByteStreamStrChanged();
    emit byteStreamStrChanged();
}
