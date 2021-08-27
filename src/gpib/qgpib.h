#ifndef QGPIB_H
#define QGPIB_H

#include <QtCore/qiodevice.h>

#include "qgpibglobal.h"

class Q_GPIB_EXPORT QGpib : public QIODevice
{
    Q_OBJECT

public:
    explicit QGpib(QObject *parent = nullptr);
    //explicit QGpib(const QString& name, QObject *parent = nullptr);
    virtual ~QGpib();
};

#endif // QGPIB_H
