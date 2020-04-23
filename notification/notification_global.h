#ifndef NOTIFICATION_GLOBAL_H
#define NOTIFICATION_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(NOTIFICATION_LIBRARY)
#  define NOTIFICATIONSHARED_EXPORT Q_DECL_EXPORT
#else
#  define NOTIFICATIONSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // NOTIFICATION_GLOBAL_H
