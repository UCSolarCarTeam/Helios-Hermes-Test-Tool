#ifndef KEYMOTOR_H
#define KEYMOTOR_H

#include <QObject>

class KeyMotor : public QObject
{
    Q_OBJECT
public:
    explicit KeyMotor(QObject *parent = nullptr);

    Q_PROPERTY(bool m0Alive READ m0Alive WRITE setM0Alive NOTIFY m0AliveChanged)
    Q_PROPERTY(int m0SetCurrent READ m0SetCurrent WRITE setM0SetCurrent NOTIFY m0SetCurrentChanged)
    Q_PROPERTY(int m0SetVelocity READ m0SetVelocity WRITE setM0SetVelocity NOTIFY m0SetVelocityChanged)
    Q_PROPERTY(int m0BusCurrent READ m0BusCurrent WRITE setM0BusCurrent NOTIFY m0BusCurrentChanged)
    Q_PROPERTY(int m0BusVoltage READ m0BusVoltage WRITE setM0BusVoltage NOTIFY m0BusVoltageChanged)
    Q_PROPERTY(int m0VehicleVelocity READ m0VehicleVelocity WRITE setM0VehicleVelocity NOTIFY m0VehicleVelocityChanged)

    Q_PROPERTY(bool m1Alive READ m1Alive NOTIFY m1AliveChanged)
    Q_PROPERTY(int m1SetCurrent READ m1SetCurrent NOTIFY m1SetCurrentChanged)
    Q_PROPERTY(int m1SetVelocity READ m1SetVelocity NOTIFY m1SetVelocityChanged)
    Q_PROPERTY(int m1BusCurrent READ m1BusCurrent NOTIFY m1BusCurrentChanged)
    Q_PROPERTY(int m1BusVoltage READ m1BusVoltage NOTIFY m1BusVoltageChanged)
    Q_PROPERTY(int m1VehicleVelocity READ m1VehicleVelocity NOTIFY m1VehicleVelocityChanged)

    Q_PROPERTY(QString byteStreamStr READ byteStreamStr NOTIFY byteStreamStrChanged)
    Q_PROPERTY(QString encodedByteStreamStr READ encodedByteStreamStr NOTIFY encodedByteStreamStrChanged FINAL)

    bool m0Alive() const;
    int m0SetCurrent() const;
    int m0SetVelocity() const;
    int m0BusCurrent() const;
    int m0BusVoltage() const;
    int m0VehicleVelocity() const;

    bool m1Alive() const;
    int m1SetCurrent() const;
    int m1SetVelocity() const;
    int m1BusCurrent() const;
    int m1BusVoltage() const;
    int m1VehicleVelocity() const;

    QByteArray byteStream() const;
    QByteArray encodedByteStream() const;
    QString byteStreamStr() const;
    QString encodedByteStreamStr() const;

public slots:
    void setM0Alive(bool alive);
    void setM0SetCurrent(int value);
    void setM0SetVelocity(int value);
    void setM0BusCurrent(int value);
    void setM0BusVoltage(int value);
    void setM0VehicleVelocity(int value);

    void setM1Alive(bool alive);
    void setM1SetCurrent(int value);
    void setM1SetVelocity(int value);
    void setM1BusCurrent(int value);
    void setM1BusVoltage(int value);
    void setM1VehicleVelocity(int value);

signals:
    void m0AliveChanged(bool alive);
    void m0SetCurrentChanged(int value);
    void m0SetVelocityChanged(int value);
    void m0BusCurrentChanged(int value);
    void m0BusVoltageChanged(int value);
    void m0VehicleVelocityChanged(int value);

    void m1AliveChanged(bool alive);
    void m1SetCurrentChanged(int value);
    void m1SetVelocityChanged(int value);
    void m1BusCurrentChanged(int value);
    void m1BusVoltageChanged(int value);
    void m1VehicleVelocityChanged(int value);

    // void byteStreamChanged();
    void byteStreamStrChanged();
    void encodedByteStreamStrChanged();


private:
    bool m0Alive_;
    int m0SetCurrent_;
    int m0SetVelocity_;
    int m0BusCurrent_;
    int m0BusVoltage_;
    int m0VehicleVelocity_;
    bool m1Alive_;
    int m1SetCurrent_;
    int m1SetVelocity_;
    int m1BusCurrent_;
    int m1BusVoltage_;
    int m1VehicleVelocity_;
    QByteArray byteStream_;
    QByteArray encodedByteStream_;

    void updateByteStream();

};

#endif // KEYMOTOR_H
