#include "AuxBms.h"
#include "util.h"

AuxBms::AuxBms(QObject *parent)
    : QObject{parent}
{
    byteStream_.fill(0x00, 15);
    byteStream_[0] = 0x0F;
    byteStream_[1] = 0x0B;
    updateByteStream();
}

int AuxBms::prechargeState() const{
    return prechargeState_;
}

int AuxBms::auxVoltage() const{
    return auxVoltage_;
};

bool AuxBms::bmsAlive() const{
    return bmsAlive_;
}

bool AuxBms::strobeLight() const{
    return strobeLight_;
}

bool AuxBms::allowCharge() const{
    return allowCharge_;
}

bool AuxBms::highVoltageEnable() const{
    return highVoltageEnable_;
}

bool AuxBms::allowDischarge() const{
    return allowDischarge_;
}

bool AuxBms::orionRecieved() const{
    return orionRecieved_;
}

bool AuxBms::chargeContactor() const{
    return chargeContactor_;
}

bool AuxBms::dischargeContactor() const{
    return dischargeContactor_;
}

bool AuxBms::commonContactor() const{
    return commonContactor_;
}

bool AuxBms::dischargeShould() const{
    return dischargeShould_;
}

bool AuxBms::chargeShould() const{
    return chargeShould_;
}

bool AuxBms::chargeOpen() const{
    return chargeOpen_;
}

bool AuxBms::dischargeOpen() const{
    return dischargeOpen_;
}

bool AuxBms::ctHighCellVoltage() const{
    return ctHighCellVoltage_;
}

bool AuxBms::ctHighTempCurrent() const{
    return ctHighTempCurrent_;
}

bool AuxBms::ctPackCurrent() const{
    return ctPackCurrent_;
}

bool AuxBms::dtLowCellVoltage() const{
    return dtLowCellVoltage_;
}

bool AuxBms::dtHighTempCurrent() const{
    return dtHighTempCurrent_;
}

bool AuxBms::dtPackCurrent() const{
    return dtPackCurrent_;
}

bool AuxBms::protection() const{
    return protection_;
}

bool AuxBms::orionTimeout() const{
    return orionTimeout_;
}

bool AuxBms::cncHighCurrent() const{
    return cncHighCurrent_;
}

bool AuxBms::dncHighCurrent() const{
    return dncHighCurrent_;
}

bool AuxBms::contactorDisconnected() const{
    return contactorDisconnected_;
}

QByteArray AuxBms::byteStream() const{
    return byteStream_;
}

QByteArray AuxBms::encodedByteStream() const{
    return encodedByteStream_;
}

QString AuxBms::byteStreamStr() const {
    return QString(byteStream_.toHex(' '));
}

QString AuxBms::encodedByteStreamStr() const{
    return QString(encodedByteStream_.toHex(' '));
}

void AuxBms::setPrechargeState(int i){
    QByteArray in = Util::formatInt(i, 1);
    byteStream_[2] = in[0];
    prechargeState_ = i;
    updateByteStream();
}

void AuxBms::setAuxVoltage(int i){
    QByteArray in = Util::formatInt(i, 1);
    byteStream_[3] = in[0];
    auxVoltage_ = i;
    updateByteStream();
}

void AuxBms::setBmsAlive(bool on){
    byteStream_[4] = on ? 0x01 : 0x00;
    bmsAlive_ = on;
    updateByteStream();
}

void AuxBms::setStrobeLight(bool on){
    byteStream_[5] = on ? 0x01 : 0x00;
    strobeLight_ = on;
    updateByteStream();
}

void AuxBms::setAllowCharge(bool on){
    byteStream_[6] = on ? 0x01 : 0x00;
    allowCharge_ = on;
    updateByteStream();
}

void AuxBms::setHighVoltageEnable(bool on){
    byteStream_[7] = on ? 0x01 : 0x00;
    highVoltageEnable_ = on;
    updateByteStream();
}

void AuxBms::setAllowDischarge(bool on){
    byteStream_[8] = on ? 0x01 : 0x00;
    allowDischarge_ = on;
    updateByteStream();
}

void AuxBms::setOrionRecieved(bool on){
    byteStream_[9] = on ? 0x01 : 0x00;
    orionRecieved_ = on;
    updateByteStream();
}

void AuxBms::setChargeContactor(bool on){
    byteStream_[10] += on ? 0x01 : -0x01;
    chargeContactor_ = on;
    updateByteStream();
}

void AuxBms::setDischargeContactor(bool on){
    byteStream_[10] += on ? 0x02 : -0x02;
    dischargeContactor_ = on;
    updateByteStream();
}

void AuxBms::setCommonContactor(bool on){
    byteStream_[10] += on ? 0x04 : -0x04;
    commonContactor_ = on;
    updateByteStream();
}

void AuxBms::setDischargeShould(bool on){
    byteStream_[10] += on ? 0x08 : -0x08;
    dischargeShould_ = on;
    updateByteStream();
}

void AuxBms::setChargeShould(bool on){
    byteStream_[10] += on ? 0x10 : -0x10;
    chargeShould_ = on;
    updateByteStream();
}

void AuxBms::setChargeOpen(bool on){
    byteStream_[10] += on ? 0x20 : -0x20;
    chargeOpen_ = on;
    updateByteStream();
}

void AuxBms::setDischargeOpen(bool on){
    byteStream_[10] += on ? 0x40 : -0x40;
    dischargeOpen_ = on;
    updateByteStream();
}

void AuxBms::setCtHighCellVoltage(bool on){
    byteStream_[11] += on ? 0x01 : -0x01;
    ctHighCellVoltage_ = on;
    updateByteStream();
}

void AuxBms::setCtHighTempCurrent(bool on){
    byteStream_[11] += on ? 0x02 : -0x02;
    ctHighTempCurrent_ = on;
    updateByteStream();
}

void AuxBms::setCtPackCurrent(bool on){
    byteStream_[11] += on ? 0x04 : -0x04;
    ctPackCurrent_ = on;
    updateByteStream();
}

void AuxBms::setDtLowCellVoltage(bool on){
    byteStream_[11] += on ? 0x08 : -0x08;
    dtLowCellVoltage_ = on;
    updateByteStream();
}

void AuxBms::setDtHighTempCurrent(bool on){
    byteStream_[11] += on ? 0x10 : -0x10;
    dtHighTempCurrent_ = on;
    updateByteStream();
}

void AuxBms::setDtPackCurrent(bool on){
    byteStream_[11] += on ? 0x20 : -0x20;
    dtPackCurrent_ = on;
    updateByteStream();
}

void AuxBms::setProtection(bool on){
    byteStream_[11] += on ? 0x40 : -0x40;
    protection_ = on;
    updateByteStream();
 }

 /*

BELOW IS NOT DISPLAYED IN DEBUG DASHBOARD

find out if needed

*/

void AuxBms::setOrionTimeout(bool on){
    //byteStream_[11] += on ? 0x80 : -0x80;
    orionTimeout_ = on;
    updateByteStream();
}

void AuxBms::setCncHighCurrent(bool on){
    //byteStream_[12] += on ? 0x01 : -0x01;
    cncHighCurrent_ = on;
    updateByteStream();
}

void AuxBms::setDncHighCurrent(bool on){
    //byteStream_[12] += on ? 0x02 : -0x02;
    dncHighCurrent_ = on;
    updateByteStream();
}

void AuxBms::setContactorDisconnected(bool on){
    //byteStream_[12] += on ? 0x04 : -0x04;
    contactorDisconnected_ = on;
    updateByteStream();
}

/*

ABOVE IS NOT DISPLAYED IN DEBUG DASHBOARD

find out if needed

*/

void AuxBms::updateByteStream(){
    QByteArray checksum = Util::generateChecksum(byteStream_, 1, 11);
    byteStream_[12] = checksum.at(0);
    byteStream_[13] = checksum.at(1);
    encodedByteStream_ = Util::encodeByteStream(byteStream_);
    emit encodedByteStreamStrChanged();
    emit byteStreamStrChanged();
}
