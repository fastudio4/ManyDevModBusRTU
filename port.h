#ifndef PORT_H
#define PORT_H

#include <QSerialPort>
#include "device.h"

class Port : public QSerialPort
{
    Q_OBJECT
public:
    Port(QObject *parent = nullptr);
    bool addDevice(const QString &nameDev, uint idD);
    bool editDevice(Device *dev, int index);
    void deleteDevice(int index);
    virtual ~Port();

protected:
    QList<Device*> listDevice;

};

#endif // PORT_H
