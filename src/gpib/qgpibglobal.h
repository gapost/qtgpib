#ifndef GPIB_GLOBAL_H
#define GPIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(Q_GPIB_BUILD_LIB)
#  define Q_GPIB_EXPORT Q_DECL_EXPORT
#else
#  define Q_GPIB_EXPORT Q_DECL_IMPORT
#endif

#endif // GPIB_GLOBAL_H
