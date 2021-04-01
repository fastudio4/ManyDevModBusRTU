#include "device.h"

Device::Device(QString name, QObject *parent)
    : QObject(parent)
{
    nameDev = name;
}


Device::~Device()
{

}
