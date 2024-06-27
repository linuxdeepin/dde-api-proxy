// SPDX-FileCopyrightText: 2018 - 2022 UnionTech Software Technology Co., Ltd.
// 
// SPDX-License-Identifier: GPL-3.0-or-later
#ifndef NEWDOCKRECT_H
#define NEWDOCKRECT_H

#include <QRect>
#include <QDBusMetaType>

struct DockRect;
using NewDockRect = QRect;

Q_DECLARE_METATYPE(NewDockRect)

void registerNewDockRectMetaType();

#endif // NEWDOCKRECT_H
