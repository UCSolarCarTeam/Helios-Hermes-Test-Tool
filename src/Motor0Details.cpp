#include "Motor0Details.h"
#include "util.h"

#include <QIODevice>
#include <QDebug>

Motor0Details::Motor0Details(QObject *parent)
    : QObject{parent}
{
    byteStream_.fill(0x00, 69); // packet size 69 - fill zeros by defualt
    byteStream_[0] = 0x45;      // packet size 69
    byteStream_[1] = 0x02;      // packet ID (2)

    updateByteStream();         //generate checksum and encode empty packet
}

int Motor0Details::phaseBCurrent() const { return phaseBCurrent_; }
int Motor0Details::phaseCCurrent() const { return phaseCCurrent_; }
int Motor0Details::motorVoltageReal() const { return motorVoltageReal_; }
int Motor0Details::motorVoltageImag() const { return motorVoltageImag_; }
int Motor0Details::motorCurrentReal() const { return motorCurrentReal_; }
int Motor0Details::motorCurrentImag() const { return motorCurrentImag_; }
int Motor0Details::blackEMF() const { return blackEMF_; }
int Motor0Details::voltageRailSupply15() const { return voltageRailSupply15_; }
int Motor0Details::voltageRailSupply3() const { return voltageRailSupply3_; }
int Motor0Details::voltageRailSupply2() const { return voltageRailSupply2_; }
int Motor0Details::heatSinkTemp() const { return heatSinkTemp_; }
int Motor0Details::motorTemp() const { return motorTemp_; }
int Motor0Details::dspBoardTemp() const { return dspBoardTemp_; }
int Motor0Details::dcBusAmpHours() const { return dcBusAmpHours_; }
int Motor0Details::odometer() const { return odometer_; }
int Motor0Details::slipSpeed() const { return slipSpeed_; }

QByteArray Motor0Details::encodedByteStream() const { return encodedByteStream_; }

void Motor0Details::setPhaseCCurrent(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(2, 4, in);
    phaseCCurrent_ = value;
    updateByteStream();
}

void Motor0Details::setPhaseBCurrent(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(6, 4, in);
    phaseBCurrent_ = value;
    updateByteStream();
}

void Motor0Details::setMotorVoltageReal(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(10, 4, in);
    motorVoltageReal_ = value;
    updateByteStream();
}

void Motor0Details::setMotorVoltageImag(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(14, 4, in);
    motorVoltageImag_ = value;
    updateByteStream();
}

void Motor0Details::setMotorCurrentReal(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(18, 4, in);
    motorCurrentReal_ = value;
    updateByteStream();
}

void Motor0Details::setMotorCurrentImag(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(22, 4, in);
    motorCurrentImag_ = value;
    updateByteStream();
}

void Motor0Details::setBlackEMF(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(26, 4, in);
    blackEMF_ = value;
    updateByteStream();
}

void Motor0Details::setVoltageRailSupply15(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(30, 4, in);
    voltageRailSupply15_ = value;
    updateByteStream();
}

void Motor0Details::setVoltageRailSupply3(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(34, 4, in);
    voltageRailSupply3_ = value;
    updateByteStream();
}

void Motor0Details::setVoltageRailSupply2(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(38, 4, in);
    voltageRailSupply2_ = value;
    updateByteStream();
}

void Motor0Details::setHeatSinkTemp(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(42, 4, in);
    heatSinkTemp_ = value;
    updateByteStream();
}

void Motor0Details::setMotorTemp(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(46, 4, in);
    motorTemp_ = value;
    updateByteStream();
}

void Motor0Details::setDspBoardTemp(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(50, 4, in);
    dspBoardTemp_ = value;
    updateByteStream();
}

void Motor0Details::setDcBusAmpHours(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(54, 4, in);
    dcBusAmpHours_ = value;
    updateByteStream();
}

void Motor0Details::setOdometer(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(58, 4, in);
    odometer_ = value;
    updateByteStream();
}

void Motor0Details::setSlipSpeed(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(62, 4, in);
    slipSpeed_ = value;
    updateByteStream();
}

void Motor0Details::updateByteStream(){
    // (1, size - 4)
    QByteArray checksum = Util::generateChecksum(byteStream_, 1, 65);
    // size - 3 and size - 2
    byteStream_[66] = checksum.at(0);
    byteStream_[67] = checksum.at(1);
    encodedByteStream_ = Util::encodeByteStream(byteStream_);
    emit encodedByteStreamStrChanged();
    emit byteStreamStrChanged();
}

QString Motor0Details::encodedByteStreamStr() const {
    return(encodedByteStream_.toHex(' '));
}

QString Motor0Details::byteStreamStr() const {
    return QString(byteStream_.toHex(' '));
}



