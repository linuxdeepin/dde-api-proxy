#include "permissionsinfo.h"
void registerPermissionsInfoMetaType()
{
    qRegisterMetaType<PermissionsInfo>("PermissionsInfo");
    qDBusRegisterMetaType<PermissionsInfo>();
}
