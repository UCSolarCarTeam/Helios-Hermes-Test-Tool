#include "KeyMotor.h"
#include "util.h"

#include <QIODevice>
#include <QDebug>

KeyMotor::KeyMotor(QObject *parent)
    : QObject{parent},
    m0Alive_(false),
    m0SetCurrent_(0),
    m0SetVelocity_(0),
    m0BusCurrent_(0),
    m0BusVoltage_(0),
    m0VehicleVelocity_(0),
    m1Alive_(false),
    m1SetCurrent_(0),
    m1SetVelocity_(0),
    m1BusCurrent_(0),
    m1BusVoltage_(0),
    m1VehicleVelocity_(0)
{
    byteStream_.fill(0x00, 47); // packet size 47 - fill zeros by defualt
    byteStream_[0] = 0x2F;      // packet size 47
    byteStream_[1] = 0x01;      // packet ID (1)

    updateByteStream();         //generate checksum and encode empty packet
}

bool KeyMotor::m0Alive() const { return m0Alive_; }

int KeyMotor::m0SetCurrent() const { return m0SetCurrent_; }

int KeyMotor::m0SetVelocity() const { return m0SetVelocity_; }

int KeyMotor::m0BusCurrent() const { return m0BusCurrent_; }

int KeyMotor::m0BusVoltage() const { return m0BusVoltage_; }

int KeyMotor::m0VehicleVelocity() const { return m0VehicleVelocity_; }

bool KeyMotor::m1Alive() const { return m1Alive_; }

int KeyMotor::m1SetCurrent() const { return m1SetCurrent_; }

int KeyMotor::m1SetVelocity() const { return m1SetVelocity_; }

int KeyMotor::m1BusCurrent() const { return m1BusCurrent_; }

int KeyMotor::m1BusVoltage() const { return m1BusVoltage_; }

int KeyMotor::m1VehicleVelocity() const { return m1VehicleVelocity_; }

QByteArray KeyMotor::encodedByteStream() const { return encodedByteStream_; }


void KeyMotor::setM0Alive(bool alive) {
    byteStream_[2] = alive ? 0x01 : 0x00;
    m0Alive_ = alive;
    updateByteStream();
}

void KeyMotor::setM0SetCurrent(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(3, 4, in);
    m0SetCurrent_ = value;
    updateByteStream();
}

void KeyMotor::setM0SetVelocity(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(7, 4, in);
    m0SetVelocity_ = value;
    updateByteStream();
}

void KeyMotor::setM0BusCurrent(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(11, 4, in);
    m0BusCurrent_ = value;
    updateByteStream();
}

void KeyMotor::setM0BusVoltage(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(15, 4, in);
    m0BusVoltage_ = value;
    updateByteStream();
}

void KeyMotor::setM0VehicleVelocity(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(19, 4, in);
    m0VehicleVelocity_ = value;
    updateByteStream();
}

void KeyMotor::setM1Alive(bool alive) {
    byteStream_[21] = alive ? 0x01 : 0x00;
    m1Alive_ = alive;
    updateByteStream();
}

void KeyMotor::setM1SetCurrent(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(24, 4, in);
    m1SetCurrent_ = value;
    updateByteStream();
}

void KeyMotor::setM1SetVelocity(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(28, 4, in);
    m1SetVelocity_ = value;
    updateByteStream();
}

void KeyMotor::setM1BusCurrent(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(32, 4, in);
    m1BusCurrent_ = value;
    updateByteStream();
}

void KeyMotor::setM1BusVoltage(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(36, 4, in);
    m1BusVoltage_ = value;
    updateByteStream();
}

void KeyMotor::setM1VehicleVelocity(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(40, 4, in);
    m1VehicleVelocity_ = value;
    updateByteStream();
}

void KeyMotor::updateByteStream(){
    // (1, size - 4)
    QByteArray checksum = Util::generateChecksum(byteStream_, 1, 43);
    // size - 3 and size - 2
    byteStream_[44] = checksum.at(0);
    byteStream_[45] = checksum.at(1);
    encodedByteStream_ = Util::encodeByteStream(byteStream_);
    emit encodedByteStreamStrChanged();
    emit byteStreamStrChanged();
}

QString KeyMotor::encodedByteStreamStr() const {
    return(encodedByteStream_.toHex(' '));
}

QString KeyMotor::byteStreamStr() const {
    return QString(byteStream_.toHex(' '));
}



