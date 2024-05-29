#ifndef MOTORFAULTS_H
#define MOTORFAULTS_H


#include <QObject>

class MotorFaults : public QObject
{
    Q_OBJECT
public:
    explicit MotorFaults(QObject *parent = nullptr);

    Q_PROPERTY(bool motorOverSpeedM0 READ motorOverSpeedM0 WRITE setMotorOverSpeedM0 NOTIFY motorOverSpeedM0Changed FINAL)
    Q_PROPERTY(bool softwareOverCurrentM0 READ softwareOverCurrentM0 WRITE setSoftwareOverCurrentM0 NOTIFY softwareOverCurrentM0Changed FINAL)
    Q_PROPERTY(bool dcBusOverVoltageM0 READ dcBusOverVoltageM0 WRITE setDcBusOverVoltageM0 NOTIFY dcBusOverVoltageM0Changed FINAL)
    Q_PROPERTY(bool badMotorPHSM0 READ badMotorPHSM0 WRITE setBadMotorPHSM0 NOTIFY badMotorPHSM0Changed FINAL)
    Q_PROPERTY(bool watchdogCausedLastResetM0 READ watchdogCausedLastResetM0 WRITE setWatchdogCausedLastResetM0 NOTIFY watchdogCausedLastResetM0Changed FINAL)
    Q_PROPERTY(bool configReadErrorM0 READ configReadErrorM0 WRITE setConfigReadErrorM0 NOTIFY configReadErrorM0Changed FINAL)
    Q_PROPERTY(bool railUnderVoltageLockM0 READ railUnderVoltageLockM0 WRITE setRailUnderVoltageLockM0 NOTIFY railUnderVoltageLockM0Changed FINAL)
    Q_PROPERTY(bool desaturationFaultM0 READ desaturationFaultM0 WRITE setDesaturationFaultM0 NOTIFY desaturationFaultM0Changed FINAL)

    Q_PROPERTY(bool motorOverSpeedM1 READ motorOverSpeedM1 WRITE setMotorOverSpeedM1 NOTIFY motorOverSpeedM1Changed FINAL)
    Q_PROPERTY(bool softwareOverCurrentM1 READ softwareOverCurrentM1 WRITE setSoftwareOverCurrentM1 NOTIFY softwareOverCurrentM1Changed FINAL)
    Q_PROPERTY(bool dcBusOverVoltageM1 READ dcBusOverVoltageM1 WRITE setDcBusOverVoltageM1 NOTIFY dcBusOverVoltageM1Changed FINAL)
    Q_PROPERTY(bool badMotorPHSM1 READ badMotorPHSM1 WRITE setBadMotorPHSM1 NOTIFY badMotorPHSM1Changed FINAL)
    Q_PROPERTY(bool watchdogCausedLastResetM1 READ watchdogCausedLastResetM1 WRITE setWatchdogCausedLastResetM1 NOTIFY watchdogCausedLastResetM1Changed FINAL)
    Q_PROPERTY(bool configReadErrorM1 READ configReadErrorM1 WRITE setConfigReadErrorM1 NOTIFY configReadErrorM1Changed FINAL)
    Q_PROPERTY(bool railUnderVoltageLockM1 READ railUnderVoltageLockM1 WRITE setRailUnderVoltageLockM1 NOTIFY railUnderVoltageLockM1Changed FINAL)
    Q_PROPERTY(bool desaturationFaultM1 READ desaturationFaultM1 WRITE setDesaturationFaultM1 NOTIFY desaturationFaultM1Changed FINAL)

    Q_PROPERTY(bool outputVoltagePWMM0 READ outputVoltagePWMM0 WRITE setOutputVoltagePWMM0 NOTIFY outputVoltagePWMM0Changed FINAL)
    Q_PROPERTY(bool motorCurrentM0 READ motorCurrentM0 WRITE setMotorCurrentM0 NOTIFY motorCurrentM0Changed FINAL)
    Q_PROPERTY(bool velocityM0 READ velocityM0 WRITE setVelocityM0 NOTIFY velocityM0Changed FINAL)
    Q_PROPERTY(bool busCurrentM0 READ busCurrentM0 WRITE setBusCurrentM0 NOTIFY busCurrentM0Changed FINAL)
    Q_PROPERTY(bool busVoltageUpperM0 READ busVoltageUpperM0 WRITE setBusVoltageUpperM0 NOTIFY busVoltageUpperM0Changed FINAL)
    Q_PROPERTY(bool busVoltageLowerM0 READ busVoltageLowerM0 WRITE setBusVoltageLowerM0 NOTIFY busVoltageLowerM0Changed FINAL)
    Q_PROPERTY(bool motorTemperatureIPMM0 READ motorTemperatureIPMM0 WRITE setMotorTemperatureIPMM0 NOTIFY motorTemperatureIPMM0Changed FINAL)

    Q_PROPERTY(bool outputVoltagePWMM1 READ outputVoltagePWMM1 WRITE setOutputVoltagePWMM1 NOTIFY outputVoltagePWMM1Changed FINAL)
    Q_PROPERTY(bool motorCurrentM1 READ motorCurrentM1 WRITE setMotorCurrentM1 NOTIFY motorCurrentM1Changed FINAL)
    Q_PROPERTY(bool velocityM1 READ velocityM1 WRITE setVelocityM1 NOTIFY velocityM1Changed FINAL)
    Q_PROPERTY(bool busCurrentM1 READ busCurrentM1 WRITE setBusCurrentM1 NOTIFY busCurrentM1Changed FINAL)
    Q_PROPERTY(bool busVoltageUpperM1 READ busVoltageUpperM1 WRITE setBusVoltageUpperM1 NOTIFY busVoltageUpperM1Changed FINAL)
    Q_PROPERTY(bool busVoltageLowerM1 READ busVoltageLowerM1 WRITE setBusVoltageLowerM1 NOTIFY busVoltageLowerM1Changed FINAL)
    Q_PROPERTY(bool motorTemperatureIPMM1 READ motorTemperatureIPMM1 WRITE setMotorTemperatureIPMM0 NOTIFY motorTemperatureIPMM1Changed FINAL)

    Q_PROPERTY(int CANRXErrorCountM0 READ CANRXErrorCountM0 WRITE setCANRXErrorCountM0 NOTIFY CANRXErrorCountM0Changed FINAL)
    Q_PROPERTY(int CANTXErrorCountM0 READ CANTXErrorCountM0 WRITE setCANTXErrorCountM0 NOTIFY CANTXErrorCountM0Changed FINAL)
    Q_PROPERTY(int CANRXErrorCountM1 READ CANRXErrorCountM1 WRITE setCANRXErrorCountM1 NOTIFY CANRXErrorCountM1Changed FINAL)
    Q_PROPERTY(int CANTXErrorCountM1 READ CANTXErrorCountM1 WRITE setCANTXErrorCountM1 NOTIFY CANTXErrorCountM1Changed FINAL)

    Q_PROPERTY(QString byteStreamStr READ byteStreamStr NOTIFY byteStreamStrChanged)
    Q_PROPERTY(QString encodedByteStreamStr READ encodedByteStreamStr NOTIFY encodedByteStreamStrChanged FINAL)

    bool motorOverSpeedM0() const;
    bool softwareOverCurrentM0() const;
    bool dcBusOverVoltageM0() const;
    bool badMotorPHSM0() const;
    bool watchdogCausedLastResetM0() const;
    bool configReadErrorM0() const;
    bool railUnderVoltageLockM0() const;
    bool desaturationFaultM0() const;

    bool motorOverSpeedM1() const;
    bool softwareOverCurrentM1() const;
    bool dcBusOverVoltageM1() const;
    bool badMotorPHSM1() const;
    bool watchdogCausedLastResetM1() const;
    bool configReadErrorM1() const;
    bool railUnderVoltageLockM1() const;
    bool desaturationFaultM1() const;

    bool outputVoltagePWMM0() const;
    bool motorCurrentM0() const;
    bool velocityM0() const;
    bool busCurrentM0() const;
    bool busVoltageUpperM0() const;
    bool busVoltageLowerM0() const;
    bool motorTemperatureIPMM0() const;

    bool outputVoltagePWMM1() const;
    bool motorCurrentM1() const;
    bool velocityM1() const;
    bool busCurrentM1() const;
    bool busVoltageUpperM1() const;
    bool busVoltageLowerM1() const;
    bool motorTemperatureIPMM1() const;

    int CANRXErrorCountM0() const;
    int CANTXErrorCountM0() const;
    int CANRXErrorCountM1() const;
    int CANTXErrorCountM1() const;

    QByteArray byteStream() const;
    QByteArray encodedByteStream() const;
    QString byteStreamStr() const;
    QString encodedByteStreamStr() const;

public slots:
    void setMotorOverSpeedM0(bool alive);
    void setSoftwareOverCurrentM0(bool alive);
    void setDcBusOverVoltageM0(bool alive);
    void setBadMotorPHSM0(bool alive);
    void setWatchdogCausedLastResetM0(bool alive);
    void setConfigReadErrorM0(bool alive);
    void setRailUnderVoltageLockM0(bool alive);
    void setDesaturationFaultM0(bool alive);

    void setMotorOverSpeedM1(bool alive);
    void setSoftwareOverCurrentM1(bool alive);
    void setDcBusOverVoltageM1(bool alive);
    void setBadMotorPHSM1(bool alive);
    void setWatchdogCausedLastResetM1(bool alive);
    void setConfigReadErrorM1(bool alive);
    void setRailUnderVoltageLockM1(bool alive);
    void setDesaturationFaultM1(bool alive);

    void setOutputVoltagePWMM0(bool alive);
    void setMotorCurrentM0(bool alive);
    void setVelocityM0(bool alive);
    void setBusCurrentM0(bool alive);
    void setBusVoltageUpperM0(bool alive);
    void setBusVoltageLowerM0(bool alive);
    void setMotorTemperatureIPMM0(bool alive);

    void setOutputVoltagePWMM1(bool alive);
    void setMotorCurrentM1(bool alive);
    void setVelocityM1(bool alive);
    void setBusCurrentM1(bool alive);
    void setBusVoltageUpperM1(bool alive);
    void setBusVoltageLowerM1(bool alive);
    void setMotorTemperatureIPMM1(bool alive);

    void setCANRXErrorCountM0(int i);
    void setCANTXErrorCountM0(int i);
    void setCANRXErrorCountM1(int i);
    void setCANTXErrorCountM1(int i);

signals:
    void motorOverSpeedM0Changed(bool alive);
    void softwareOverCurrentM0Changed(bool alive);
    void dcBusOverVoltageM0Changed(bool alive);
    void badMotorPHSM0Changed(bool alive);
    void watchdogCausedLastResetM0Changed(bool alive);
    void configReadErrorM0Changed(bool alive);
    void railUnderVoltageLockM0Changed(bool alive);
    void desaturationFaultM0Changed(bool alive);

    void motorOverSpeedM1Changed(bool alive);
    void softwareOverCurrentM1Changed(bool alive);
    void dcBusOverVoltageM1Changed(bool alive);
    void badMotorPHSM1Changed(bool alive);
    void watchdogCausedLastResetM1Changed(bool alive);
    void configReadErrorM1Changed(bool alive);
    void railUnderVoltageLockM1Changed(bool alive);
    void desaturationFaultM1Changed(bool alive);

    void outputVoltagePWMM0Changed(bool alive);
    void motorCurrentM0Changed(bool alive);
    void velocityM0Changed(bool alive);
    void busCurrentM0Changed(bool alive);
    void busVoltageUpperM0Changed(bool alive);
    void busVoltageLowerM0Changed(bool alive);
    void motorTemperatureIPMM0Changed(bool alive);

    void outputVoltagePWMM1Changed(bool alive);
    void motorCurrentM1Changed(bool alive);
    void velocityM1Changed(bool alive);
    void busCurrentM1Changed(bool alive);
    void busVoltageUpperM1Changed(bool alive);
    void busVoltageLowerM1Changed(bool alive);
    void motorTemperatureIPMM1Changed(bool alive);

    void CANRXErrorCountM0Changed(int i);
    void CANTXErrorCountM0Changed(int i);
    void CANRXErrorCountM1Changed(int i);
    void CANTXErrorCountM1Changed(int i);

    void byteStreamStrChanged();
    void encodedByteStreamStrChanged();

private:
    bool motorOverSpeedM0_ = false;
    bool softwareOverCurrentM0_ = false;
    bool dcBusOverVoltageM0_ = false;
    bool badMotorPHSM0_ = false;
    bool watchdogCausedLastResetM0_ = false;
    bool configReadErrorM0_ = false;
    bool railUnderVoltageLockM0_ = false;
    bool desaturationFaultM0_ = false;

    bool motorOverSpeedM1_ = false;
    bool softwareOverCurrentM1_ = false;
    bool dcBusOverVoltageM1_ = false;
    bool badMotorPHSM1_ = false;
    bool watchdogCausedLastResetM1_ = false;
    bool configReadErrorM1_ = false;
    bool railUnderVoltageLockM1_ = false;
    bool desaturationFaultM1_ = false;

    bool outputVoltagePWMM0_ = false;
    bool motorCurrentM0_ = false;
    bool velocityM0_ = false;
    bool busCurrentM0_ = false;
    bool busVoltageUpperM0_ = false;
    bool busVoltageLowerM0_ = false;
    bool motorTemperatureIPMM0_ = false;

    bool outputVoltagePWMM1_ = false;
    bool motorCurrentM1_ = false;
    bool velocityM1_ = false;
    bool busCurrentM1_ = false;
    bool busVoltageUpperM1_ = false;
    bool busVoltageLowerM1_ = false;
    bool motorTemperatureIPMM1_ = false;

    int CANRXErrorCountM0_ = 0;
    int CANTXErrorCountM0_ = 0;
    int CANRXErrorCountM1_ = 0;
    int CANTXErrorCountM1_ = 0;

    QByteArray byteStream_;
    QByteArray encodedByteStream_;

    void updateByteStream();

};


#endif // MOTORFAULTS_H
