// SPDX-FileCopyrightText: 2018 - 2022 UnionTech Software Technology Co., Ltd.
// 
// SPDX-License-Identifier: GPL-3.0-or-later
#include "dockrect.h"
#include <QDebug>

DockRect::DockRect()
    : x(0)
    , y(0)
    , w(0)
    , h(0)
{

}

QDebug operator<<(QDebug debug, const DockRect &rect)
{
    debug << QString("DockRect(%1, %2, %3, %4)").arg(rect.x)
                                                .arg(rect.y)
                                                .arg(rect.w)
                                                .arg(rect.h);

    return debug;
}

bool DockRect::operator ==(const DockRect &rect) const
{
    return this->x == rect.x &&
            this->y == rect.y &&
            this->w == rect.w &&
            this->h == rect.h;
}

DockRect::operator QRect() const
{
    return QRect(x, y, w, h);
}

QDBusArgument &operator<<(QDBusArgument &arg, const DockRect &rect)
{
    arg.beginStructure();
    arg << rect.x << rect.y << rect.w << rect.h;
    arg.endStructure();

    return arg;
}

const QDBusArgument &operator>>(const QDBusArgument &arg, DockRect &rect)
{
    arg.beginStructure();
    arg >> rect.x >> rect.y >> rect.w >> rect.h;
    arg.endStructure();

    return arg;
}

void registerDockRectMetaType()
{
    qRegisterMetaType<DockRect>("DockRect");
    qDBusRegisterMetaType<DockRect>();
}
