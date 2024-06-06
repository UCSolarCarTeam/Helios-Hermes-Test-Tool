#ifndef AUXBMS_H
#define AUXBMS_H

#include <QObject>

class AuxBms : public QObject
{
    Q_OBJECT
public:
    explicit AuxBms(QObject *parent = nullptr);

    Q_PROPERTY(int prechargeState READ prechargeState WRITE setPrechargeState NOTIFY prechargeStateChanged FINAL)
    Q_PROPERTY(int auxVoltage READ auxVoltage WRITE setAuxVoltage NOTIFY auxVoltageChanged FINAL)

    Q_PROPERTY(bool bmsAlive READ bmsAlive WRITE setBmsAlive NOTIFY bmsAliveChanged FINAL)
    Q_PROPERTY(bool strobeLight READ strobeLight WRITE setStrobeLight NOTIFY strobeLightChanged FINAL)
    Q_PROPERTY(bool allowCharge READ allowCharge WRITE setAllowCharge NOTIFY allowChargeChanged FINAL)
    Q_PROPERTY(bool highVoltageEnable READ highVoltageEnable WRITE setHighVoltageEnable NOTIFY highVoltageEnableChanged FINAL)
    Q_PROPERTY(bool allowDischarge READ allowDischarge WRITE setAllowDischarge NOTIFY allowDischargeChanged FINAL)
    Q_PROPERTY(bool orionRecieved READ orionRecieved WRITE setOrionRecieved NOTIFY orionRecievedChanged FINAL)

    Q_PROPERTY(bool chargeContactor READ chargeContactor WRITE setChargeContactor NOTIFY chargeContactorChanged FINAL)
    Q_PROPERTY(bool dischargeContactor READ dischargeContactor WRITE setDischargeContactor NOTIFY dischargeContactorChanged FINAL)
    Q_PROPERTY(bool commonContactor READ commonContactor WRITE setCommonContactor NOTIFY commonContactorChanged FINAL)
    Q_PROPERTY(bool dischargeShould READ dischargeShould WRITE setDischargeShould NOTIFY dischargeShouldChanged FINAL)
    Q_PROPERTY(bool chargeShould READ chargeShould WRITE setChargeShould NOTIFY chargeShouldChanged FINAL)
    Q_PROPERTY(bool chargeOpen READ chargeOpen WRITE setChargeOpen NOTIFY chargeOpenChanged FINAL)
    Q_PROPERTY(bool dischargeOpen READ dischargeOpen WRITE setDischargeOpen NOTIFY dischargeOpenChanged FINAL)

    Q_PROPERTY(bool ctHighCellVoltage READ ctHighCellVoltage WRITE setCtHighCellVoltage NOTIFY ctHighCellVoltageChanged FINAL)
    Q_PROPERTY(bool ctHighTempCurrent READ ctHighTempCurrent WRITE setCtHighTempCurrent NOTIFY ctHighTempCurrentChanged FINAL)
    Q_PROPERTY(bool ctPackCurrent READ ctPackCurrent WRITE setCtPackCurrent NOTIFY ctPackCurrentChanged FINAL)
    Q_PROPERTY(bool dtLowCellVoltage READ dtLowCellVoltage WRITE setDtLowCellVoltage NOTIFY dtLowCellVoltageChanged FINAL)
    Q_PROPERTY(bool dtHighTempCurrent READ dtHighTempCurrent WRITE setDtHighTempCurrent NOTIFY dtHighTempCurrentChanged FINAL)
    Q_PROPERTY(bool dtPackCurrent READ dtPackCurrent WRITE setDtPackCurrent NOTIFY dtPackCurrentChanged FINAL)
    Q_PROPERTY(bool protection READ protection WRITE setProtection NOTIFY protectionChanged FINAL)
    Q_PROPERTY(bool orionTimeout READ orionTimeout WRITE setOrionTimeout NOTIFY orionTimeoutChanged FINAL)
    Q_PROPERTY(bool cncHighCurrent READ cncHighCurrent WRITE setCncHighCurrent NOTIFY cncHighCurrentChanged FINAL)
    Q_PROPERTY(bool dncHighCurrent READ dncHighCurrent WRITE setDncHighCurrent NOTIFY dncHighCurrentChanged FINAL)
    Q_PROPERTY(bool contactorDisconnected READ contactorDisconnected WRITE setContactorDisconnected NOTIFY contactorDisconnectedChanged FINAL)

    Q_PROPERTY(QString byteStreamStr READ byteStreamStr NOTIFY byteStreamStrChanged FINAL)
    Q_PROPERTY(QString encodedByteStreamStr READ encodedByteStreamStr NOTIFY encodedByteStreamStrChanged FINAL)

    int prechargeState() const;
    int auxVoltage() const;

    bool bmsAlive() const;
    bool strobeLight() const;
    bool allowCharge() const;
    bool highVoltageEnable() const;
    bool allowDischarge() const;
    bool orionRecieved() const;

    bool chargeContactor() const;
    bool dischargeContactor() const;
    bool commonContactor() const;
    bool dischargeShould() const;
    bool chargeShould() const;
    bool chargeOpen() const;
    bool dischargeOpen() const;

    bool ctHighCellVoltage() const;
    bool ctHighTempCurrent() const;
    bool ctPackCurrent() const;
    bool dtLowCellVoltage() const;
    bool dtHighTempCurrent() const;
    bool dtPackCurrent() const;
    bool protection() const;
    bool orionTimeout() const;
    bool cncHighCurrent() const;
    bool dncHighCurrent() const;
    bool contactorDisconnected() const;

    QByteArray byteStream() const;
    QByteArray encodedByteStream() const; //HERE
    QString byteStreamStr() const;
    QString encodedByteStreamStr() const; //HERE

public slots:
    void setPrechargeState(int i);
    void setAuxVoltage(int i);

    void setBmsAlive(bool on);
    void setStrobeLight(bool on);
    void setAllowCharge(bool on);
    void setHighVoltageEnable(bool on);
    void setAllowDischarge(bool on);
    void setOrionRecieved(bool on);

    void setChargeContactor(bool on);
    void setDischargeContactor(bool on);
    void setCommonContactor(bool on);
    void setDischargeShould(bool on);
    void setChargeShould(bool on);
    void setChargeOpen(bool on);
    void setDischargeOpen(bool on);

    void setCtHighCellVoltage(bool on);
    void setCtHighTempCurrent(bool on);
    void setCtPackCurrent(bool on);
    void setDtLowCellVoltage(bool on);
    void setDtHighTempCurrent(bool on);
    void setDtPackCurrent(bool on);
    void setProtection(bool on);
    void setOrionTimeout(bool on);
    void setCncHighCurrent(bool on);
    void setDncHighCurrent(bool on);
    void setContactorDisconnected(bool on);


signals:
    void prechargeStateChanged(int i);
    void auxVoltageChanged(int i);

    void bmsAliveChanged(bool on);
    void strobeLightChanged(bool on);
    void allowChargeChanged(bool on);
    void highVoltageEnableChanged(bool on);
    void allowDischargeChanged(bool on);
    void orionRecievedChanged(bool on);

    void chargeContactorChanged(bool on);
    void dischargeContactorChanged(bool on);
    void commonContactorChanged(bool on);
    void dischargeShouldChanged(bool on);
    void chargeShouldChanged(bool on);
    void chargeOpenChanged(bool on);
    void dischargeOpenChanged(bool on);

    void ctHighCellVoltageChanged(bool on);
    void ctHighTempCurrentChanged(bool on);
    void ctPackCurrentChanged(bool on);
    void dtLowCellVoltageChanged(bool on);
    void dtHighTempCurrentChanged(bool on);
    void dtPackCurrentChanged(bool on);
    void protectionChanged(bool on);
    void orionTimeoutChanged(bool on);
    void cncHighCurrentChanged(bool on);
    void dncHighCurrentChanged(bool on);
    void contactorDisconnectedChanged(bool on);

    void byteStreamStrChanged();
    void encodedByteStreamStrChanged();

private:
    int prechargeState_ = 0;
    int auxVoltage_ = 0;

    bool bmsAlive_ = false;
    bool strobeLight_ = false;
    bool allowCharge_ = false;
    bool highVoltageEnable_ = false;
    bool allowDischarge_ = false;
    bool orionRecieved_ = false;

    bool chargeContactor_ = false;
    bool dischargeContactor_ = false;
    bool commonContactor_ = false;
    bool dischargeShould_ = false;
    bool chargeShould_ = false;
    bool chargeOpen_ = false;
    bool dischargeOpen_ = false;

    bool ctHighCellVoltage_ = false;
    bool ctHighTempCurrent_ = false;
    bool ctPackCurrent_ = false;
    bool dtLowCellVoltage_ = false;
    bool dtHighTempCurrent_ = false;
    bool dtPackCurrent_ = false;
    bool protection_ = false;
    bool orionTimeout_ = false;
    bool cncHighCurrent_ = false;
    bool dncHighCurrent_ = false;
    bool contactorDisconnected_ = false;

    QByteArray byteStream_;
    QByteArray encodedByteStream_;

    void updateByteStream();
};

#endif // AUXBMS_H
