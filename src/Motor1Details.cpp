#include "Motor1Details.h"
#include "util.h"

#include <QIODevice>
#include <QDebug>

Motor1Details::Motor1Details(QObject *parent)
    : QObject{parent}
{
    byteStream_.fill(0x00, 69); // packet size 69 - fill zeros by defualt
    byteStream_[0] = 0x45;      // packet size 69
    byteStream_[1] = 0x02;      // packet ID (2)

    updateByteStream();         //generate checksum and encode empty packet
}

int Motor1Details::phaseBCurrent() const { return phaseBCurrent_; }
int Motor1Details::phaseCCurrent() const { return phaseCCurrent_; }
int Motor1Details::motorVoltageReal() const { return motorVoltageReal_; }
int Motor1Details::motorVoltageImag() const { return motorVoltageImag_; }
int Motor1Details::motorCurrentReal() const { return motorCurrentReal_; }
int Motor1Details::motorCurrentImag() const { return motorCurrentImag_; }
int Motor1Details::blackEMF() const { return blackEMF_; }
int Motor1Details::voltageRailSupply15() const { return voltageRailSupply15_; }
int Motor1Details::voltageRailSupply3() const { return voltageRailSupply3_; }
int Motor1Details::voltageRailSupply2() const { return voltageRailSupply2_; }
int Motor1Details::heatSinkTemp() const { return heatSinkTemp_; }
int Motor1Details::motorTemp() const { return motorTemp_; }
int Motor1Details::dspBoardTemp() const { return dspBoardTemp_; }
int Motor1Details::dcBusAmpHours() const { return dcBusAmpHours_; }
int Motor1Details::odometer() const { return odometer_; }
int Motor1Details::slipSpeed() const { return slipSpeed_; }

QByteArray Motor1Details::encodedByteStream() const { return encodedByteStream_; }

void Motor1Details::setPhaseCCurrent(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(2, 4, in);
    phaseCCurrent_ = value;
    updateByteStream();
}

void Motor1Details::setPhaseBCurrent(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(6, 4, in);
    phaseBCurrent_ = value;
    updateByteStream();
}

void Motor1Details::setMotorVoltageReal(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(10, 4, in);
    motorVoltageReal_ = value;
    updateByteStream();
}

void Motor1Details::setMotorVoltageImag(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(14, 4, in);
    motorVoltageImag_ = value;
    updateByteStream();
}

void Motor1Details::setMotorCurrentReal(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(18, 4, in);
    motorCurrentReal_ = value;
    updateByteStream();
}

void Motor1Details::setMotorCurrentImag(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(22, 4, in);
    motorCurrentImag_ = value;
    updateByteStream();
}

void Motor1Details::setBlackEMF(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(26, 4, in);
    blackEMF_ = value;
    updateByteStream();
}

void Motor1Details::setVoltageRailSupply15(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(30, 4, in);
    voltageRailSupply15_ = value;
    updateByteStream();
}

void Motor1Details::setVoltageRailSupply3(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(34, 4, in);
    voltageRailSupply3_ = value;
    updateByteStream();
}

void Motor1Details::setVoltageRailSupply2(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(38, 4, in);
    voltageRailSupply2_ = value;
    updateByteStream();
}

void Motor1Details::setHeatSinkTemp(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(42, 4, in);
    heatSinkTemp_ = value;
    updateByteStream();
}

void Motor1Details::setMotorTemp(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(46, 4, in);
    motorTemp_ = value;
    updateByteStream();
}

void Motor1Details::setDspBoardTemp(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(50, 4, in);
    dspBoardTemp_ = value;
    updateByteStream();
}

void Motor1Details::setDcBusAmpHours(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(54, 4, in);
    dcBusAmpHours_ = value;
    updateByteStream();
}

void Motor1Details::setOdometer(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(58, 4, in);
    odometer_ = value;
    updateByteStream();
}

void Motor1Details::setSlipSpeed(int value) {
    QByteArray in = Util::formatFloat(value);
    byteStream_.replace(62, 4, in);
    slipSpeed_ = value;
    updateByteStream();
}

void Motor1Details::updateByteStream(){
    // (1, size - 4)
    QByteArray checksum = Util::generateChecksum(byteStream_, 1, 65);
    // size - 3 and size - 2
    byteStream_[66] = checksum.at(0);
    byteStream_[67] = checksum.at(1);
    encodedByteStream_ = Util::encodeByteStream(byteStream_);
    emit encodedByteStreamStrChanged();
    emit byteStreamStrChanged();
}

QString Motor1Details::encodedByteStreamStr() const {
    return(encodedByteStream_.toHex(' '));
}

QString Motor1Details::byteStreamStr() const {
    return QString(byteStream_.toHex(' '));
}



