// SPDX-FileCopyrightText: 2018 - 2022 UnionTech Software Technology Co., Ltd.
// 
// SPDX-License-Identifier: GPL-3.0-or-later
#ifndef PERMISSIONSINFO_H
#define PERMISSIONSINFO_H

#include <QMap>
#include <QDBusMetaType>

typedef QMap<QString, QString> PermissionsInfo;

void registerPermissionsInfoMetaType();

#endif // PERMISSIONSINFO_H
