#include "port.h"

Port::Port(QObject *parent)
    :QSerialPort(parent)
{

}

bool Port::addDevice(const QString &nameDev, uint idD)
{
    if(!listDevice.isEmpty())
    {
        for(int i = 0; i < listDevice.size(); i++)
        {
            if(listDevice[i]->IdDevice() == idD) return false;
        }
    }
    Device *newDev = new Device(nameDev, this);
    newDev->setIdDevice(idD);
    listDevice.append(newDev);
    return true;
}

bool Port::editDevice(Device *dev, int index)
{
    if(listDevice[index]->IdDevice() == dev->IdDevice()) return false;
    listDevice.replace(index, dev);
    return true;
}

void Port::deleteDevice(int index)
{
    listDevice.removeAt(index);
}

Port::~Port()
{

}
