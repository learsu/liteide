/**************************************************************************
** This file is part of LiteIDE
**
** Copyright (c) 2011-2013 LiteIDE Team. All rights reserved.
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License as published by the Free Software Foundation; either
** version 2.1 of the License, or (at your option) any later version.
**
** This library is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
** Lesser General Public License for more details.
**
** In addition, as a special exception,  that plugins developed for LiteIDE,
** are allowed to remain closed sourced and can be distributed under any license .
** These rights are included in the file LGPL_EXCEPTION.txt in this package.
**
**************************************************************************/
// Module: litedebugoption.h
// Creator: visualfc <visualfc@gmail.com>

#ifndef LITEDEBUGOPTION_H
#define LITEDEBUGOPTION_H

#include "liteapi/liteapi.h"

namespace Ui {
    class LiteDebugOption;
}

class LiteDebugOption : public LiteApi::IOption
{
    Q_OBJECT

public:
    explicit LiteDebugOption(LiteApi::IApplication *app, QObject *parent = 0);
    ~LiteDebugOption();
    virtual QWidget *widget();
    virtual QString name() const;
    virtual QString mimeType() const;
    virtual void apply();
private:
    LiteApi::IApplication   *m_liteApp;
    QWidget           *m_widget;
    Ui::LiteDebugOption *ui;
};

#endif // LITEDEBUGOPTION_H
