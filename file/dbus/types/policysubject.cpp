

#include <QDBusMetaType>

#include "policysubject.h"

void registerPolicySubjectMetaType()
{
    qRegisterMetaType<PolicySubject>("PolicySubject");
    qDBusRegisterMetaType<PolicySubject>();
}
