#include "qgpib.h"

QGpib::QGpib(QObject *parent)
    : QIODevice(parent)
{
}

QGpib::~QGpib()
{
    if (isOpen())
        close();
}
