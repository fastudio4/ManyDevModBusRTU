#ifndef DEVICE_H
#define DEVICE_H

#include <QObject>
#include <QVariant>

class Device : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString nameDev READ nameDevice WRITE setNameDevice)
    Q_PROPERTY(uint idDev READ IdDevice WRITE setIdDevice)
    Q_PROPERTY(uint regDev READ registerDevice WRITE setRegisterDevice)
    Q_PROPERTY(uint countDev READ countRegister WRITE setCountRegister)
    Q_PROPERTY(uint funcDev READ intFunction WRITE setIntFunction)

public:
    explicit Device(QString name, QObject *parent = nullptr);
    QString nameDevice() {return nameDev;}
    void setNameDevice(const QString &newName) {nameDev = newName;}
    uint IdDevice() {return idDev;}
    void setIdDevice(const uint &id) { idDev = id;}
    uint registerDevice() {return registerDev;}
    void setRegisterDevice(const uint reg) {registerDev = reg;}
    uint countRegister() {return countReg;}
    void setCountRegister(const uint &count) {countReg = count;}
    uint intFunction() {return function;}
    void setIntFunction(const uint &func) {function = func;}
    virtual ~Device();

private:
    QString nameDev;
    uint idDev;
    uint registerDev;
    uint countReg;
    uint function;
};

#endif // DEVICE_H
