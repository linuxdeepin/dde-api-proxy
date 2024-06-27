// SPDX-FileCopyrightText: 2018 - 2022 UnionTech Software Technology Co., Ltd.
// 
// SPDX-License-Identifier: GPL-3.0-or-later
#include "newdockrect.h"
#include "dockrect.h"
#include <QDebug>

void registerNewDockRectMetaType()
{
    qRegisterMetaType<NewDockRect>("NewDockRect");
    qDBusRegisterMetaType<NewDockRect>();
}
