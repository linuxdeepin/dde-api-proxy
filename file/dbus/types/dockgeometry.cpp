

#include "dockgeometry.h"

#include <QDBusMetaType>

void registerDockGeometryMetaType()
{
    qRegisterMetaType<DockGeometry>("DockGeometry");
    qDBusRegisterMetaType<DockGeometry>();
}
