#include "BatteryFaults.h"

#include "util.h"

BatteryFaults::BatteryFaults(QObject *parent)
    : QObject{parent}
{
    byteStream_.fill(0x00, 10);
    byteStream_[0] = 0x0A;
    byteStream_[1] = 0x06;
}

bool BatteryFaults::internalCommunication() const{
    return internalCommunication_;
}

bool BatteryFaults::internalConversion() const{
    return internalConversion_;
}

bool BatteryFaults::weakCell() const{
    return weakCell_;
}

bool BatteryFaults::lowCellVoltage() const{
    return lowCellVoltage_;
}

bool BatteryFaults::openWiring() const{
    return openWiring_;
}

bool BatteryFaults::currentSensor() const{
    return currentSensor_;
}

bool BatteryFaults::packVoltageSensor() const{
    return packVoltageSensor_;
}

bool BatteryFaults::weakPack() const{
    return weakPack_;
}

bool BatteryFaults::voltageRedundancy() const{
    return voltageRedundancy_;
}

bool BatteryFaults::fanMonitor() const{
    return fanMonitor_;
}

bool BatteryFaults::thermistor() const{
    return thermistor_;
}

bool BatteryFaults::canbusCommunications() const{
    return canbusCommunications_;
}

bool BatteryFaults::alwaysOnSupply() const{
    return alwaysOnSupply_;
}

bool BatteryFaults::highVoltageIsolation() const{
    return highVoltageIsolation_;
}

bool BatteryFaults::powerSupply12V() const{
    return powerSupply12V_;
}

bool BatteryFaults::chargeLimitEnforcement() const{
    return chargeLimitEnforcement_;
}

bool BatteryFaults::dischargeLimitEnforcement() const{
    return dischargeLimitEnforcement_;
}

bool BatteryFaults::chargerSafetyRelay() const{
    return chargerSafetyRelay_;
}

bool BatteryFaults::internalMemory() const{
    return internalMemory_;
}

bool BatteryFaults::internalThermistor() const{
    return internalThermistor_;
}

bool BatteryFaults::internalLogic() const{
    return internalLogic_;
}

bool BatteryFaults::dclSoc() const{
    return dclSoc_;
}

bool BatteryFaults::dclCellResistance() const{
    return dclCellResistance_;
}

bool BatteryFaults::dclTemperature() const{
    return dclTemperature_;
}

bool BatteryFaults::dclPackVoltage() const{
    return dclPackVoltage_;
}

bool BatteryFaults::dclCellVoltage() const{
    return dclCellVoltage_;
}

bool BatteryFaults::dclCclVoltage() const{
    return dclCclVoltage_;
}

bool BatteryFaults::dclCclCommunication() const{
    return dclCclCommunication_;
}

bool BatteryFaults::cclSoc() const{
    return cclSoc_;
}

bool BatteryFaults::cclCellResistance() const{
    return cclCellResistance_;
}

bool BatteryFaults::cclTemperature() const{
    return cclTemperature_;
}

bool BatteryFaults::cclCellVoltage() const{
    return cclCellVoltage_;
}

bool BatteryFaults::cclPackVoltage() const{
    return cclPackVoltage_;
}

bool BatteryFaults::cclChargerLatch() const{
    return cclChargerLatch_;
}

bool BatteryFaults::cclCurrent() const{
    return cclCurrent_;
}

QByteArray BatteryFaults::byteStream() const{
    return byteStream_;
}

QByteArray BatteryFaults::encodedByteStream() const{
    return encodedByteStream_;
}

QString BatteryFaults::encodedByteStreamStr() const {
    return(encodedByteStream_.toHex(' '));    // bool cclChargerVoltage() const;

}

QString BatteryFaults::byteStreamStr() const {
    return QString(byteStream_.toHex(' '));
}

void BatteryFaults::setInternalCommunication(bool on){
    byteStream_[2] += on ? 0x01 : -0x01;
    internalCommunication_ = on;
    updateByteStream();
}

void BatteryFaults::setInternalConversion(bool on){
    byteStream_[2] += on ? 0x02 : -0x02;
    internalConversion_ = on;
    updateByteStream();
}

void BatteryFaults::setWeakCell(bool on){
    byteStream_[2] += on ? 0x04 : -0x04;
    weakCell_ = on;
    updateByteStream();
}

void BatteryFaults::setLowCellVoltage(bool on){
    byteStream_[2] += on ? 0x08 : -0x08;
    lowCellVoltage_ = on;
    updateByteStream();
}

void BatteryFaults::setOpenWiring(bool on){
    byteStream_[2] += on ? 0x10 : -0x10;
    openWiring_ = on;
    updateByteStream();
}

void BatteryFaults::setCurrentSensor(bool on){
    byteStream_[2] += on ? 0x20 : -0x20;
    openWiring_ = on;
    updateByteStream();
}

void BatteryFaults::setPackVoltageSensor(bool on){
    byteStream_[2] += on ? 0x40 : -0x40;
    packVoltageSensor_ = on;
    updateByteStream();
}

void BatteryFaults::setWeakPack(bool on){
    byteStream_[2] += on ? 0x80 : -0x80;
    weakPack_ = on;
    updateByteStream();
}

void BatteryFaults::setVoltageRedundancy(bool on){
    byteStream_[3] += on ? 0x01 : -0x01;
    voltageRedundancy_ = on;
    updateByteStream();
}

void BatteryFaults::setFanMonitor(bool on){
    byteStream_[3] += on ? 0x02 : -0x02;
    fanMonitor_ = on;
    updateByteStream();
}

void BatteryFaults::setThermistor(bool on){
    byteStream_[3] += on ? 0x04 : -0x04;
    thermistor_ = on;
    updateByteStream();
}

void BatteryFaults::setCanbusCommunications(bool on){
    byteStream_[3] += on ? 0x08 : -0x08;
    canbusCommunications_ = on;
    updateByteStream();
}

void BatteryFaults::setAlwaysOnSupply(bool on){
    byteStream_[3] += on ? 0x10 : -0x10;
    alwaysOnSupply_ = on;
    updateByteStream();
}

void BatteryFaults::setHighVoltageIsolation(bool on){
    byteStream_[3] += on ? 0x20 : -0x20;
    highVoltageIsolation_ = on;
    updateByteStream();
}

void BatteryFaults::setPowerSupply12V(bool on){
    byteStream_[3] += on ? 0x40 : -0x40;
    powerSupply12V_ = on;
    updateByteStream();
}

void BatteryFaults::setChargeLimitEnforcement(bool on){
    byteStream_[3] += on ? 0x80 : -0x80;
    chargeLimitEnforcement_ = on;
    updateByteStream();
}

void BatteryFaults::setDischargeLimitEnforcement(bool on){
    byteStream_[4] += on ? 0x01 : -0x01;
    dischargeLimitEnforcement_ = on;
    updateByteStream();
}

void BatteryFaults::setChargerSafetyRelay(bool on){
    byteStream_[4] += on ? 0x02 : -0x02;
    chargerSafetyRelay_ = on;
    updateByteStream();
}

void BatteryFaults::setInternalMemory(bool on){
    byteStream_[4] += on ? 0x04 : -0x04;
    internalMemory_ = on;
    updateByteStream();
}

void BatteryFaults::setInternalThermistor(bool on){
    byteStream_[4] += on ? 0x08 : -0x08;
    internalThermistor_ = on;
    updateByteStream();
}

void BatteryFaults::setInternalLogic(bool on){
    byteStream_[4] += on ? 0x10 : -0x10;
    internalLogic_ = on;
    updateByteStream();
}

void BatteryFaults::setDclSoc(bool on){
    byteStream_[5] += on ? 0x01 : -0x01;
    dclSoc_ = on;
    updateByteStream();
}

void BatteryFaults::setDclCellResistance(bool on){
    byteStream_[5] += on ? 0x02 : -0x02;
    dclCellResistance_ = on;
    updateByteStream();
}

void BatteryFaults::setDclTemperature(bool on){
    byteStream_[5] += on ? 0x04 : -0x04;
    dclTemperature_ = on;
    updateByteStream();
}

void BatteryFaults::setDclCellVoltage(bool on){
    byteStream_[5] += on ? 0x08 : -0x08;
    dclCellVoltage_ = on;
    updateByteStream();
}

void BatteryFaults::setDclPackVoltage(bool on){
    byteStream_[5] += on ? 0x10 : -0x10;
    dclPackVoltage_ = on;
    updateByteStream();
}

void BatteryFaults::setDclCclVoltage(bool on){
    byteStream_[5] += on ? 0x40 : -0x40;
    dclCclVoltage_ = on;
    updateByteStream();
}

void BatteryFaults::setDclCclCommunication(bool on){
    byteStream_[5] += on ? 0x80 : -0x80;
    dclCclCommunication_ = on;
    updateByteStream();
}

void BatteryFaults::setCclSoc(bool on){
    byteStream_[6] += on ? 0x02 : -0x02;
    cclSoc_ = on;
    updateByteStream();
}

void BatteryFaults::setCclCellResistance(bool on){
    byteStream_[6] += on ? 0x04 : -0x04;
    cclCellResistance_ = on;
    updateByteStream();
}

void BatteryFaults::setCclTemperature(bool on){
    byteStream_[6] += on ? 0x08 : -0x08;
    cclTemperature_ = on;
    updateByteStream();
}

void BatteryFaults::setCclCellVoltage(bool on){
    byteStream_[6] += on ? 0x10 : -0x10;
    cclCellVoltage_ = on;
    updateByteStream();
}

void BatteryFaults::setCclPackVoltage(bool on){
    byteStream_[6] += on ? 0x20 : -0x20;
    cclPackVoltage_  = on;
    updateByteStream();
}

void BatteryFaults::setCclChargerLatch(bool on){
    byteStream_[6] += on ? 0x40 : -0x40;
    cclChargerLatch_ = on;
    updateByteStream();
}

void BatteryFaults::setCclCurrent(bool on){
    byteStream_[6] += on ? 0x80 : -0x80;
    cclCurrent_ = on;
    updateByteStream();
}



void BatteryFaults::updateByteStream(){
    QByteArray checksum = Util::generateChecksum(byteStream_, 1, 6);
    byteStream_[7] = checksum.at(0);
    byteStream_[8] = checksum.at(1);
    encodedByteStream_ = Util::encodeByteStream(byteStream_);
    emit encodedByteStreamStrChanged();
    emit byteStreamStrChanged();
}
