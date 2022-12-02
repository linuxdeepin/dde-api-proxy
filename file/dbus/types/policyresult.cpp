

#include <QDBusMetaType>

#include "policyresult.h"

void registerPolicyResultMetaType()
{
    qRegisterMetaType<PolicyResult>("PolicyResult");
    qDBusRegisterMetaType<PolicyResult>();
}
