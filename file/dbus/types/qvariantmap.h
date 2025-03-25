// SPDX-FileCopyrightText: 2018 - 2022 UnionTech Software Technology Co., Ltd.
// 
// SPDX-License-Identifier: GPL-3.0-or-later
#ifndef DDE_QVARIANTMAP_H
#define DDE_QVARIANTMAP_H

#include <QList>
#include <QVariant>
#include <QDBusMetaType>

typedef QMap<QString, QVariant> QVariantMap;

void registerQVariantMapMetaType();

#endif // DDE_QVARIANTMAP_H
