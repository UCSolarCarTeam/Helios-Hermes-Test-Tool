#ifndef BATTERYFAULTS_H
#define BATTERYFAULTS_H

#include <QObject>

class BatteryFaults : public QObject
{
    Q_OBJECT
public:
    explicit BatteryFaults(QObject *parent = nullptr);
    Q_PROPERTY(bool internalCommunication READ internalCommunication WRITE setInternalCommunication NOTIFY internalCommunicationChanged FINAL)
    Q_PROPERTY(bool internalConversion READ internalConversion WRITE setInternalConversion NOTIFY internalConversionChanged FINAL)
    Q_PROPERTY(bool weakCell READ weakCell WRITE setWeakCell NOTIFY weakCellChanged FINAL)
    Q_PROPERTY(bool lowCellVoltage READ lowCellVoltage WRITE setLowCellVoltage NOTIFY lowCellVoltageChanged FINAL)
    Q_PROPERTY(bool openWiring READ openWiring WRITE setOpenWiring NOTIFY openWiringChanged FINAL)
    Q_PROPERTY(bool currentSensor READ currentSensor WRITE setCurrentSensor NOTIFY currentSensorChanged FINAL)
    Q_PROPERTY(bool packVoltageSensor READ packVoltageSensor WRITE setPackVoltageSensor NOTIFY packVoltageSensorChanged FINAL)
    Q_PROPERTY(bool weakPack READ weakPack WRITE setWeakPack NOTIFY weakPackChanged FINAL)
    Q_PROPERTY(bool voltageRedundancy READ voltageRedundancy WRITE setVoltageRedundancy NOTIFY voltageRedundancyChanged FINAL)
    Q_PROPERTY(bool fanMonitor READ fanMonitor WRITE setFanMonitor NOTIFY fanMonitorChanged FINAL)
    Q_PROPERTY(bool thermistor READ thermistor WRITE setThermistor NOTIFY thermistorChanged FINAL)
    Q_PROPERTY(bool canbusCommunications READ canbusCommunications WRITE setCanbusCommunications NOTIFY canbusCommunicationsChanged FINAL)
    Q_PROPERTY(bool alwaysOnSupply READ alwaysOnSupply WRITE setAlwaysOnSupply NOTIFY alwaysOnSupplyChanged FINAL)
    Q_PROPERTY(bool highVoltageIsolation READ highVoltageIsolation WRITE setHighVoltageIsolation NOTIFY highVoltageIsolationChanged FINAL)
    Q_PROPERTY(bool powerSupply12V READ powerSupply12V WRITE setPowerSupply12V NOTIFY powerSupply12VChanged FINAL)
    Q_PROPERTY(bool chargeLimitEnforcement READ chargeLimitEnforcement WRITE setChargeLimitEnforcement NOTIFY chargeLimitEnforcementChanged FINAL)
    Q_PROPERTY(bool dischargeLimitEnforcement READ dischargeLimitEnforcement WRITE setDischargeLimitEnforcement NOTIFY dischargeLimitEnforcementChanged FINAL)
    Q_PROPERTY(bool chargerSafetyRelay READ chargerSafetyRelay WRITE setChargerSafetyRelay NOTIFY chargerSafetyRelayChanged FINAL)
    Q_PROPERTY(bool internalMemory READ internalMemory WRITE setInternalMemory NOTIFY internalMemoryChanged FINAL)
    Q_PROPERTY(bool internalThermistor READ internalThermistor WRITE setInternalThermistor NOTIFY internalThermistorChanged FINAL)
    Q_PROPERTY(bool internalLogic READ internalLogic WRITE setInternalLogic NOTIFY internalLogicChanged FINAL)

    Q_PROPERTY(bool dclSoc READ dclSoc WRITE setDclSoc NOTIFY dclSocChanged FINAL)
    Q_PROPERTY(bool dclCellResistance READ dclCellResistance WRITE setDclCellResistance NOTIFY dclCellResistanceChanged FINAL)
    Q_PROPERTY(bool dclTemperature READ dclTemperature WRITE setDclTemperature NOTIFY dclTemperatureChanged FINAL)
    Q_PROPERTY(bool dclPackVoltage READ dclPackVoltage WRITE setDclPackVoltage NOTIFY dclPackVoltageChanged FINAL)
    Q_PROPERTY(bool dclCellVoltage READ dclCellVoltage WRITE setDclCellVoltage NOTIFY dclCellVoltageChanged FINAL)
    Q_PROPERTY(bool dclCclVoltage READ dclCclVoltage WRITE setDclCclVoltage NOTIFY dclCclVoltageChanged FINAL)
    Q_PROPERTY(bool dclCclCommunication READ dclCclCommunication WRITE setDclCclCommunication NOTIFY dclCclCommunicationChanged FINAL)
    Q_PROPERTY(bool cclSoc READ cclSoc WRITE setCclSoc NOTIFY cclSocChanged FINAL)
    Q_PROPERTY(bool cclCellResistance READ cclCellResistance WRITE setCclCellResistance NOTIFY cclCellResistanceChanged FINAL)
    Q_PROPERTY(bool cclTemperature READ cclTemperature WRITE setCclTemperature NOTIFY cclTemperatureChanged FINAL)
    Q_PROPERTY(bool cclCellVoltage READ cclCellVoltage WRITE setCclCellVoltage NOTIFY cclCellVoltageChanged FINAL)
    Q_PROPERTY(bool cclPackVoltage READ cclPackVoltage WRITE setCclPackVoltage NOTIFY cclPackVoltageChanged FINAL)
    Q_PROPERTY(bool cclChargerLatch READ cclChargerLatch WRITE setCclChargerLatch NOTIFY cclChargerLatchChanged FINAL)
    Q_PROPERTY(bool cclCurrent READ cclCurrent WRITE setCclCurrent NOTIFY cclCurrentChanged FINAL)

    Q_PROPERTY(QString byteStreamStr READ byteStreamStr NOTIFY byteStreamStrChanged FINAL)
    Q_PROPERTY(QString encodedByteStreamStr READ encodedByteStreamStr NOTIFY encodedByteStreamStrChanged FINAL)

    bool internalCommunication() const;
    bool internalConversion() const;
    bool weakCell() const;
    bool lowCellVoltage() const;
    bool openWiring() const;
    bool currentSensor() const;
    bool packVoltageSensor() const;
    bool weakPack() const;
    bool voltageRedundancy() const;
    bool fanMonitor() const;
    bool thermistor() const;
    bool canbusCommunications() const;
    bool alwaysOnSupply() const;
    bool highVoltageIsolation() const;
    bool powerSupply12V() const;
    bool chargeLimitEnforcement() const;
    bool dischargeLimitEnforcement() const;
    bool chargerSafetyRelay() const;
    bool internalMemory() const;
    bool internalThermistor() const;
    bool internalLogic() const;

    bool dclSoc() const;
    bool dclCellResistance() const;
    bool dclTemperature() const;
    bool dclPackVoltage() const;
    bool dclCellVoltage() const;
    bool dclCclVoltage() const;
    bool dclCclCommunication() const;
    bool cclSoc() const;
    bool cclCellResistance() const;
    bool cclTemperature() const;
    bool cclCellVoltage() const;
    bool cclPackVoltage() const;
    bool cclChargerLatch() const;
    bool cclCurrent() const;

    QByteArray byteStream() const;
    QByteArray encodedByteStream() const; //HERE
    QString byteStreamStr() const;
    QString encodedByteStreamStr() const; //HERE

public slots:
    void setInternalCommunication(bool on);
    void setInternalConversion(bool on);
    void setWeakCell(bool on);
    void setLowCellVoltage(bool on);
    void setOpenWiring(bool on);
    void setCurrentSensor(bool on);
    void setPackVoltageSensor(bool on);
    void setWeakPack(bool on);
    void setVoltageRedundancy(bool on);
    void setFanMonitor(bool on);
    void setThermistor(bool on);
    void setCanbusCommunications(bool on);
    void setAlwaysOnSupply(bool on);
    void setHighVoltageIsolation(bool on);
    void setPowerSupply12V(bool on);
    void setChargeLimitEnforcement(bool on);
    void setDischargeLimitEnforcement(bool on);
    void setChargerSafetyRelay(bool on);
    void setInternalMemory(bool on);
    void setInternalThermistor(bool on);
    void setInternalLogic(bool on);

    void setDclSoc(bool on);
    void setDclCellResistance(bool on);
    void setDclTemperature(bool on);
    void setDclPackVoltage(bool on);
    void setDclCellVoltage(bool on);
    void setDclCclVoltage(bool on);
    void setDclCclCommunication(bool on);
    void setCclSoc(bool on);
    void setCclCellResistance(bool on);
    void setCclTemperature(bool on);
    void setCclCellVoltage(bool on);
    void setCclPackVoltage(bool on);
    void setCclChargerLatch(bool on);
    void setCclCurrent(bool on);

signals:
    void internalCommunicationChanged(bool on);
    void internalConversionChanged(bool on);
    void weakCellChanged(bool on);
    void lowCellVoltageChanged(bool on);
    void openWiringChanged(bool on);
    void currentSensorChanged(bool on);
    void packVoltageSensorChanged(bool on);
    void weakPackChanged(bool on);
    void voltageRedundancyChanged(bool on);
    void fanMonitorChanged(bool on);
    void thermistorChanged(bool on);
    void canbusCommunicationsChanged(bool on);
    void alwaysOnSupplyChanged(bool on);
    void highVoltageIsolationChanged(bool on);
    void powerSupply12VChanged(bool on);
    void chargeLimitEnforcementChanged(bool on);
    void dischargeLimitEnforcementChanged(bool on);
    void chargerSafetyRelayChanged(bool on);
    void internalMemoryChanged(bool on);
    void internalThermistorChanged(bool on);
    void internalLogicChanged(bool on);

    void dclSocChanged(bool on);
    void dclCellResistanceChanged(bool on);
    void dclTemperatureChanged(bool on);
    void dclPackVoltageChanged(bool on);
    void dclCellVoltageChanged(bool on);
    void dclCclVoltageChanged(bool on);
    void dclCclCommunicationChanged(bool on);
    void cclSocChanged(bool on);
    void cclCellResistanceChanged(bool on);
    void cclChargerVoltageChanged(bool on);
    void cclTemperatureChanged(bool on);
    void cclCellVoltageChanged(bool on);
    void cclPackVoltageChanged(bool on);
    void cclChargerLatchChanged(bool on);
    void cclCurrentChanged(bool on);

    void byteStreamStrChanged();
    void encodedByteStreamStrChanged();

private:
    // I am much too lazy to set these in the constructor
    bool internalCommunication_ = 0;
    bool internalConversion_ = 0;
    bool weakCell_ = 0;
    bool lowCellVoltage_ = 0;
    bool openWiring_ = 0;
    bool currentSensor_ = 0;
    bool packVoltageSensor_ = 0;
    bool weakPack_ = 0;
    bool voltageRedundancy_ = 0;
    bool fanMonitor_ = 0;
    bool thermistor_ = 0;
    bool canbusCommunications_ = 0;
    bool alwaysOnSupply_ = 0;
    bool highVoltageIsolation_ = 0;
    bool powerSupply12V_ = 0;
    bool chargeLimitEnforcement_ = 0;
    bool dischargeLimitEnforcement_ = 0;
    bool chargerSafetyRelay_ = 0;
    bool internalMemory_ = 0;
    bool internalThermistor_ = 0;
    bool internalLogic_ = 0;

    bool dclSoc_ = 0;
    bool dclCellResistance_ = 0;
    bool dclTemperature_ = 0;
    bool dclPackVoltage_ = 0;
    bool dclCellVoltage_ = 0;
    bool dclCclVoltage_ = 0;
    bool dclCclCommunication_ = 0;
    bool cclSoc_ = 0;
    bool cclCellResistance_ = 0;
    bool cclChargerVoltage_ = 0;
    bool cclTemperature_ = 0;
    bool cclCellVoltage_ = 0;
    bool cclPackVoltage_ = 0;
    bool cclChargerLatch_ = 0;
    bool cclCurrent_ = 0;

    QByteArray byteStream_;
    QByteArray encodedByteStream_;

    void updateByteStream();
};

#endif // BATTERYFAULTS_H
