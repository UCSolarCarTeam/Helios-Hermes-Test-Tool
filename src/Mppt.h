#ifndef MPPT_H
#define MPPT_H

#include <QObject>

class Mppt : public QObject
{
    Q_OBJECT
public:
    explicit Mppt(int channel, QObject *parent = nullptr);

    Q_PROPERTY(bool alive READ alive WRITE setAlive NOTIFY aliveChanged FINAL)

    Q_PROPERTY(int arrayVoltage READ arrayVoltage WRITE setArrayVoltage NOTIFY arrayVoltageChanged FINAL)
    Q_PROPERTY(int arrayCurrent READ arrayCurrent WRITE setArrayCurrent NOTIFY arrayCurrentChanged FINAL)
    Q_PROPERTY(int batteryVoltage READ batteryVoltage WRITE setBatteryVoltage NOTIFY batteryVoltageChanged FINAL)
    Q_PROPERTY(int temp READ temp WRITE setTemp NOTIFY tempChanged FINAL)

    Q_PROPERTY(QString byteStreamStr READ byteStreamStr NOTIFY byteStreamStrChanged FINAL)
    Q_PROPERTY(QString encodedByteStreamStr READ encodedByteStreamStr NOTIFY encodedByteStreamStrChanged FINAL)

    bool alive() const;

    int arrayVoltage() const;
    int arrayCurrent() const;
    int batteryVoltage() const;
    int temp() const;

    QByteArray byteStream() const;
    QByteArray encodedByteStream() const;
    QString byteStreamStr() const;
    QString encodedByteStreamStr() const;

public slots:
    void setAlive(bool on);

    void setArrayVoltage(int i);
    void setArrayCurrent(int i);
    void setBatteryVoltage(int i);
    void setTemp(int i);

signals:
    void aliveChanged(bool on);

    void arrayVoltageChanged(int i);
    void arrayCurrentChanged(int i);
    void batteryVoltageChanged(int i);
    void tempChanged(int i);

    void byteStreamStrChanged();
    void encodedByteStreamStrChanged();

private:
    bool alive_ = false;

    int arrayVoltage_ = 0;
    int arrayCurrent_ = 0;
    int batteryVoltage_ = 0;
    int temp_ = 0;

    QByteArray byteStream_;
    QByteArray encodedByteStream_;

    void updateByteStream();

};

#endif // MPPT_H
