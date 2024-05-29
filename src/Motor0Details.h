#ifndef MOTOR0DETAILS_H
#define MOTOR0DETAILS_H

#include <QObject>

class Motor0Details : public QObject
{
    Q_OBJECT
public:
    explicit Motor0Details(QObject *parent = nullptr);

    Q_PROPERTY(int phaseCCurrent READ phaseCCurrent WRITE setPhaseCCurrent NOTIFY phaseCCurrentChanged FINAL)
    Q_PROPERTY(int phaseBCurrent READ phaseBCurrent WRITE setPhaseBCurrent NOTIFY phaseBCurrentChanged FINAL)
    Q_PROPERTY(int motorVoltageReal READ motorVoltageReal WRITE setMotorVoltageReal NOTIFY motorVoltageRealChanged FINAL)
    Q_PROPERTY(int motorVoltageImag READ motorVoltageImag WRITE setMotorVoltageImag NOTIFY motorVoltageImagChanged FINAL)
    Q_PROPERTY(int motorCurrentReal READ motorCurrentReal WRITE setMotorCurrentReal NOTIFY motorCurrentRealChanged FINAL)
    Q_PROPERTY(int motorCurrentImag READ motorCurrentImag WRITE setMotorCurrentImag NOTIFY motorCurrentImagChanged FINAL)
    Q_PROPERTY(int blackEMF READ blackEMF WRITE setBlackEMF NOTIFY blackEMFChanged FINAL)
    Q_PROPERTY(int voltageRailSupply15 READ voltageRailSupply15 WRITE setVoltageRailSupply15 NOTIFY voltageRailSupply15Changed FINAL)

    Q_PROPERTY(int voltageRailSupply3 READ voltageRailSupply3 WRITE setVoltageRailSupply3 NOTIFY voltageRailSupply3Changed FINAL)
    Q_PROPERTY(int voltageRailSupply2 READ voltageRailSupply2 WRITE setVoltageRailSupply2 NOTIFY voltageRailSupply2Changed FINAL)
    Q_PROPERTY(int heatSinkTemp READ heatSinkTemp WRITE setHeatSinkTemp NOTIFY heatSinkTempChanged FINAL)
    Q_PROPERTY(int motorTemp READ motorTemp WRITE setMotorTemp NOTIFY motorTempChanged FINAL)
    Q_PROPERTY(int dspBoardTemp READ dspBoardTemp WRITE setDspBoardTemp NOTIFY dspBoardTempChanged FINAL)
    Q_PROPERTY(int dcBusAmpHours READ dcBusAmpHours WRITE setDcBusAmpHours NOTIFY dcBusAmpHoursChanged FINAL)
    Q_PROPERTY(int odometer READ odometer WRITE setOdometer NOTIFY odometerChanged FINAL)
    Q_PROPERTY(int slipSpeed READ slipSpeed WRITE setSlipSpeed NOTIFY slipSpeedChanged FINAL)

    Q_PROPERTY(QString byteStreamStr READ byteStreamStr NOTIFY byteStreamStrChanged FINAL)
    Q_PROPERTY(QString encodedByteStreamStr READ encodedByteStreamStr NOTIFY encodedByteStreamStrChanged FINAL)

    int phaseCCurrent() const;
    int phaseBCurrent() const;
    int motorVoltageReal() const;
    int motorVoltageImag() const;
    int motorCurrentReal() const;
    int motorCurrentImag() const;
    int blackEMF() const;
    int voltageRailSupply15() const;

    int voltageRailSupply3() const;
    int voltageRailSupply2() const;
    int heatSinkTemp() const;
    int motorTemp() const;
    int dspBoardTemp() const;
    int dcBusAmpHours() const;
    int odometer() const;
    int slipSpeed() const;

    QByteArray byteStream() const;
    QByteArray encodedByteStream() const;
    QString byteStreamStr() const;
    QString encodedByteStreamStr() const;

public slots:
    void setPhaseCCurrent(int i);
    void setPhaseBCurrent(int i);
    void setMotorVoltageReal(int i);
    void setMotorVoltageImag(int i);
    void setMotorCurrentReal(int i);
    void setMotorCurrentImag(int i);
    void setBlackEMF(int i);
    void setVoltageRailSupply15(int i);

    void setVoltageRailSupply3(int i);
    void setVoltageRailSupply2(int i);
    void setHeatSinkTemp(int i);
    void setMotorTemp(int i);
    void setDspBoardTemp(int i);
    void setDcBusAmpHours(int i);
    void setOdometer(int i);
    void setSlipSpeed(int i);

signals:
    void phaseCCurrentChanged(int i);
    void phaseBCurrentChanged(int i);
    void motorVoltageRealChanged(int i);
    void motorVoltageImagChanged(int i);
    void motorCurrentRealChanged(int i);
    void motorCurrentImagChanged(int i);
    void blackEMFChanged(int i);
    void voltageRailSupply15Changed(int i);

    void voltageRailSupply3Changed(int i);
    void voltageRailSupply2Changed(int i);
    void heatSinkTempChanged(int i);
    void motorTempChanged(int i);
    void dspBoardTempChanged(int i);
    void dcBusAmpHoursChanged(int i);
    void odometerChanged(int i);
    void slipSpeedChanged(int i);

    void byteStreamStrChanged();
    void encodedByteStreamStrChanged();

private:
    int phaseCCurrent_ = 0;
    int phaseBCurrent_ = 0;
    int motorVoltageReal_ = 0;
    int motorVoltageImag_ = 0;
    int motorCurrentReal_ = 0;
    int motorCurrentImag_ = 0;
    int blackEMF_ = 0;
    int voltageRailSupply15_ = 0;

    int voltageRailSupply3_ = 0;
    int voltageRailSupply2_ = 0;
    int heatSinkTemp_ = 0;
    int motorTemp_ = 0;
    int dspBoardTemp_ = 0;
    int dcBusAmpHours_ = 0;
    int odometer_ = 0;
    int slipSpeed_ = 0;

    QByteArray byteStream_;
    QByteArray encodedByteStream_;

    void updateByteStream();

};

#endif // MOTOR0DETAILS_H
