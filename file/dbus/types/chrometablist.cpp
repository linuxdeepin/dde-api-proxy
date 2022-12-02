

#include "chrometablist.h"

QDBusArgument &operator<<(QDBusArgument &arg, const ChromeTabInfo &info)
{
    arg.beginStructure();
    arg << info.id << info.title << info.memory;
    arg.endStructure();

    return arg;
}

const QDBusArgument &operator>>(const QDBusArgument &arg, ChromeTabInfo &info)
{
    arg.beginStructure();
    arg >> info.id >> info.title >> info.memory;
    arg.endStructure();

    return arg;
}

bool ChromeTabInfo::operator ==(const ChromeTabInfo &info)
{
    return id == info.id;
}

void registerChromeTabListMetaType()
{
    qRegisterMetaType<ChromeTabInfo>("ChromeTabInfo");
    qDBusRegisterMetaType<ChromeTabInfo>();

    qRegisterMetaType<ChromeTabList>("ChromeTabList");
    qDBusRegisterMetaType<ChromeTabList>();
}
