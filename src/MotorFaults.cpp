#include "MotorFaults.h"
#include "util.h"

#include <QIODevice>
#include <QDebug>

MotorFaults::MotorFaults(QObject *parent)
    : QObject{parent}
{
    byteStream_.fill(0x00, 13); // packet size 13 - fill zeros by defualt
    byteStream_[0] = 0x0D;      // packet size 13
    byteStream_[1] = 0x05;      // packet ID (5)

    updateByteStream();         //generate checksum and encode empty packet
}

bool MotorFaults::motorOverSpeedM0() const { return motorOverSpeedM0_;}

bool MotorFaults::softwareOverCurrentM0() const { return softwareOverCurrentM0_;}

bool MotorFaults::dcBusOverVoltageM0() const { return dcBusOverVoltageM0_; }

bool MotorFaults::badMotorPHSM0() const { return badMotorPHSM0_; }

bool MotorFaults::watchdogCausedLastResetM0() const { return watchdogCausedLastResetM0_; }

bool MotorFaults::configReadErrorM0() const { return configReadErrorM0_; }

bool MotorFaults::railUnderVoltageLockM0() const { return railUnderVoltageLockM0_; }

bool MotorFaults::desaturationFaultM0() const { return desaturationFaultM0_; }

bool MotorFaults::motorOverSpeedM1() const { return motorOverSpeedM1_; }

bool MotorFaults::softwareOverCurrentM1() const { return softwareOverCurrentM1_; }

bool MotorFaults::dcBusOverVoltageM1() const { return dcBusOverVoltageM1_; }

bool MotorFaults::badMotorPHSM1() const { return badMotorPHSM1_; }

bool MotorFaults::watchdogCausedLastResetM1() const { return watchdogCausedLastResetM1_; }

bool MotorFaults::configReadErrorM1() const { return configReadErrorM1_; }

bool MotorFaults::railUnderVoltageLockM1() const { return railUnderVoltageLockM1_; }

bool MotorFaults::desaturationFaultM1() const { return desaturationFaultM1_; }

bool MotorFaults::outputVoltagePWMM0() const { return outputVoltagePWMM0_; }

bool MotorFaults::motorCurrentM0() const { return motorCurrentM0_; }

bool MotorFaults::velocityM0() const { return velocityM0_; }

bool MotorFaults::busCurrentM0() const { return busCurrentM0_; }

bool MotorFaults::busVoltageUpperM0() const { return busVoltageUpperM0_; }

bool MotorFaults::busVoltageLowerM0() const { return busVoltageLowerM0_; }

bool MotorFaults::motorTemperatureIPMM0() const { return motorTemperatureIPMM0_; }

bool MotorFaults::outputVoltagePWMM1() const { return outputVoltagePWMM1_; }

bool MotorFaults::motorCurrentM1() const { return motorCurrentM1_; }

bool MotorFaults::velocityM1() const { return velocityM1_; }

bool MotorFaults::busCurrentM1() const { return busCurrentM1_; }

bool MotorFaults::busVoltageUpperM1() const { return busVoltageUpperM1_; }

bool MotorFaults::busVoltageLowerM1() const { return busVoltageLowerM1_; }

bool MotorFaults::motorTemperatureIPMM1() const { return motorTemperatureIPMM1_; }

int MotorFaults::CANRXErrorCountM0() const { return CANRXErrorCountM0_; }

int MotorFaults::CANTXErrorCountM0() const { return CANTXErrorCountM0_; }

int MotorFaults::CANRXErrorCountM1() const { return CANRXErrorCountM1_; }

int MotorFaults::CANTXErrorCountM1() const { return CANTXErrorCountM1_; }

QByteArray MotorFaults::byteStream() const { return byteStream_; }

QByteArray MotorFaults::encodedByteStream() const{ return encodedByteStream_; }

QString MotorFaults::byteStreamStr() const {
    return QString(byteStream_.toHex(' '));
}

QString MotorFaults::encodedByteStreamStr() const{
    return QString(encodedByteStream_.toHex(' '));
}

void MotorFaults::setMotorOverSpeedM0(bool on) {
    byteStream_[2] += on ? 0x01 : -0x01;
    motorOverSpeedM0_ = on;
    updateByteStream();
}

void MotorFaults::setSoftwareOverCurrentM0(bool on) {
    byteStream_[2] += on ? 0x02 : -0x02;
    softwareOverCurrentM0_ = on;
    updateByteStream();
}

void MotorFaults::setDcBusOverVoltageM0(bool on) {
    byteStream_[2] += on ? 0x04 : -0x04;
    dcBusOverVoltageM0_ = on;
    updateByteStream();
}

void MotorFaults::setBadMotorPHSM0(bool on) {
    byteStream_[2] += on ? 0x08 : -0x08;
    badMotorPHSM0_ = on;
    updateByteStream();
}

void MotorFaults::setWatchdogCausedLastResetM0(bool on) {
    byteStream_[2] += on ? 0x10 : -0x10;
    watchdogCausedLastResetM0_ = on;
    updateByteStream();
}

void MotorFaults::setConfigReadErrorM0(bool on) {
    byteStream_[2] += on ? 0x20 : -0x20;
    configReadErrorM0_ = on;
    updateByteStream();
}

void MotorFaults::setRailUnderVoltageLockM0(bool on) {
    byteStream_[2] += on ? 0x40 : -0x40;
    railUnderVoltageLockM0_ = on;
    updateByteStream();
}

void MotorFaults::setDesaturationFaultM0(bool on) {
    byteStream_[2] += on ? 0x80 : -0x80;
    desaturationFaultM0_ = on;
    updateByteStream();
}

void MotorFaults::setMotorOverSpeedM1(bool on) {
    byteStream_[3] += on ? 0x01 : -0x01;
    motorOverSpeedM1_ = on;
    updateByteStream();
}

void MotorFaults::setSoftwareOverCurrentM1(bool on) {
    byteStream_[3] += on ? 0x02 : -0x02;
    softwareOverCurrentM1_ = on;
    updateByteStream();
}

void MotorFaults::setDcBusOverVoltageM1(bool on) {
    byteStream_[3] += on ? 0x04 : -0x04;
    dcBusOverVoltageM1_ = on;
    updateByteStream();
}

void MotorFaults::setBadMotorPHSM1(bool on) {
    byteStream_[3] += on ? 0x08 : -0x08;
    badMotorPHSM1_ = on;
    updateByteStream();
}

void MotorFaults::setWatchdogCausedLastResetM1(bool on) {
    byteStream_[3] += on ? 0x10 : -0x10;
    watchdogCausedLastResetM1_ = on;
    updateByteStream();
}

void MotorFaults::setConfigReadErrorM1(bool on) {
    byteStream_[3] += on ? 0x20 : -0x20;
    configReadErrorM1_ = on;
    updateByteStream();
}

void MotorFaults::setRailUnderVoltageLockM1(bool on) {
    byteStream_[3] += on ? 0x40 : -0x40;
    railUnderVoltageLockM1_ = on;
    updateByteStream();
}

void MotorFaults::setDesaturationFaultM1(bool on) {
    byteStream_[3] += on ? 0x80 : -0x80;
    desaturationFaultM1_ = on;
    updateByteStream();
}

void MotorFaults::setOutputVoltagePWMM0(bool on) {
    byteStream_[4] += on ? 0x01 : -0x01;
    outputVoltagePWMM0_ = on;
    updateByteStream();
}

void MotorFaults::setMotorCurrentM0(bool on) {
    byteStream_[4] += on ? 0x02 : -0x02;
    motorCurrentM0_ = on;
    updateByteStream();
}

void MotorFaults::setVelocityM0(bool on) {
    byteStream_[4] += on ? 0x04 : -0x04;
    velocityM0_ = on;
    updateByteStream();
}

void MotorFaults::setBusCurrentM0(bool on) {
    byteStream_[4] += on ? 0x08 : -0x08;
    busCurrentM0_ = on;
    updateByteStream();
}

void MotorFaults::setBusVoltageUpperM0(bool on) {
    byteStream_[4] += on ? 0x10 : -0x10;
    busVoltageUpperM0_ = on;
    updateByteStream();
}

void MotorFaults::setBusVoltageLowerM0(bool on) {
    byteStream_[4] += on ? 0x20 : -0x20;
    busVoltageLowerM0_ = on;
    updateByteStream();
}

void MotorFaults::setMotorTemperatureIPMM0(bool on) {
    byteStream_[4] += on ? 0x40 : -0x40;
    motorTemperatureIPMM0_ = on;
    updateByteStream();
}

void MotorFaults::setOutputVoltagePWMM1(bool on) {
    byteStream_[5] += on ? 0x01 : -0x01;
    outputVoltagePWMM1_ = on;
    updateByteStream();
}

void MotorFaults::setMotorCurrentM1(bool on) {
    byteStream_[5] += on ? 0x02 : -0x02;
    motorCurrentM1_ = on;
    updateByteStream();
}

void MotorFaults::setVelocityM1(bool on) {
    byteStream_[5] += on ? 0x04 : -0x04;
    velocityM1_ = on;
    updateByteStream();
}

void MotorFaults::setBusCurrentM1(bool on) {
    byteStream_[5] += on ? 0x08 : -0x08;
    busCurrentM1_ = on;
    updateByteStream();
}

void MotorFaults::setBusVoltageUpperM1(bool on) {
    byteStream_[5] += on ? 0x10 : -0x10;
    busVoltageUpperM1_ = on;
    updateByteStream();
}

void MotorFaults::setBusVoltageLowerM1(bool on) {
    byteStream_[5] += on ? 0x20 : -0x20;
    busVoltageLowerM1_ = on;
    updateByteStream();
}

void MotorFaults::setMotorTemperatureIPMM1(bool on) {
    byteStream_[5] += on ? 0x40 : -0x40;
    motorTemperatureIPMM1_ = on;
    updateByteStream();
}

void MotorFaults::setCANRXErrorCountM0(int i) {
    QByteArray in = Util::formatInt(i, 1);
    byteStream_[6] = in[0];
    CANRXErrorCountM0_ = i;
    updateByteStream();
}

void MotorFaults::setCANTXErrorCountM0(int i) {
    QByteArray in = Util::formatInt(i, 1);
    byteStream_[7] = in[0];
    CANTXErrorCountM0_ = i;
    updateByteStream();
}

void MotorFaults::setCANRXErrorCountM1(int i) {
    QByteArray in = Util::formatInt(i, 1);
    byteStream_[8] = in[0];
    CANRXErrorCountM1_ = i;
    updateByteStream();
}

void MotorFaults::setCANTXErrorCountM1(int i) {
    QByteArray in = Util::formatInt(i, 1);
    byteStream_[9] = in[0];
    CANTXErrorCountM1_ = i;
    updateByteStream();
}

void MotorFaults::updateByteStream(){
    QByteArray checksum = Util::generateChecksum(byteStream_, 1, 9);
    byteStream_[10] = checksum.at(0);
    byteStream_[11] = checksum.at(1);
    encodedByteStream_ = Util::encodeByteStream(byteStream_);
    emit encodedByteStreamStrChanged();
    emit byteStreamStrChanged();
}
