/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include <QtWidgets>
#include <QString>
#include <iostream>
#include <algorithm>
#include "arrowpad.h"

void ArrowPad::updateLe(){
    lenum=std::max(lenum-1,0);
    leButton->setText(QString::fromLocal8Bit("乐不思蜀").append(QString::number(lenum)));
}
void ArrowPad::updateBing(){
    bingnum=std::max(bingnum-1,0);
    bingButton->setText(QString::fromLocal8Bit("兵粮寸断").append(QString::number(bingnum)));
}
void ArrowPad::updateNan(){
    nannum=std::max(nannum-1,0);
    nanButton->setText(QString::fromLocal8Bit("南蛮入侵").append(QString::number(nannum)));
}
void ArrowPad::updateWugu(){
    wugunum=std::max(wugunum-1,0);
    wuguButton->setText(QString::fromLocal8Bit("五谷丰登").append(QString::number(wugunum)));
}
void ArrowPad::updateWuxie(){
    wuxienum=std::max(wuxienum-1,0);
    wuxieButton->setText(QString::fromLocal8Bit("无懈可击").append(QString::number(wuxienum)));
}
void ArrowPad::updateChai(){
    chainum=std::max(chainum-1,0);
    chaiButton->setText(QString::fromLocal8Bit("过河拆桥").append(QString::number(chainum)));
}

void ArrowPad::updateShun(){
    shunnum=std::max(shunnum-1,0);
    shunButton->setText(QString::fromLocal8Bit("顺手牵羊").append(QString::number(shunnum)));
}

void ArrowPad::updateJiedao(){
    jiedaonum=std::max(jiedaonum-1,0);
    jiedaoButton->setText(QString::fromLocal8Bit("借刀杀人").append(QString::number(jiedaonum)));
}

void ArrowPad::updateTao(){
    taonum=std::max(taonum-1,0);
    taoButton->setText(QString::fromLocal8Bit("桃").append(QString::number(taonum)));
}
void ArrowPad::updateJiu(){
    jiunum=std::max(jiunum-1,0);
    jiuButton->setText(QString::fromLocal8Bit("酒").append(QString::number(jiunum)));
}
void ArrowPad::updateHuosha(){
    huoshanum=std::max(huoshanum-1,0);
    huoshaButton->setText(QString::fromLocal8Bit("火杀").append(QString::number(huoshanum)));
}
void ArrowPad::updateLeisha(){
    leishanum=std::max(leishanum-1,0);
    leishaButton->setText(QString::fromLocal8Bit("雷杀").append(QString::number(leishanum)));
}

ArrowPad::ArrowPad(QWidget *parent)
    : QWidget(parent)
{
//! [0]
    leButton = new QPushButton(QString::fromLocal8Bit("乐不思蜀").append(QString::number(lenum)));
    bingButton =new QPushButton(QString::fromLocal8Bit("兵粮寸断").append(QString::number(bingnum)));
    nanButton =new QPushButton(QString::fromLocal8Bit("南蛮入侵").append(QString::number(nannum)));
    wuguButton =new QPushButton(QString::fromLocal8Bit("五谷丰登").append(QString::number(wugunum)));
//! [0] //! [1]
    wuxieButton = new QPushButton(QString::fromLocal8Bit("无懈可击").append(QString::number(wuxienum)));
    chaiButton=new QPushButton(QString::fromLocal8Bit("过河拆桥").append(QString::number(chainum)));
    shunButton =new QPushButton(QString::fromLocal8Bit("顺手牵羊").append(QString::number(shunnum)));
    jiedaoButton =new QPushButton(QString::fromLocal8Bit("借刀杀人").append(QString::number(jiedaonum)));
//! [1] //! [2]
    jiuButton = new QPushButton(QString::fromLocal8Bit("酒").append(QString::number(jiunum)));
//! [2] //! [3]
    taoButton = new QPushButton(QString::fromLocal8Bit("桃").append(QString::number(taonum)));
//! [3]
//!
    leishaButton =new QPushButton(QString::fromLocal8Bit("雷杀").append(QString::number(leishanum)));
    huoshaButton = new QPushButton(QString::fromLocal8Bit("火杀").append(QString::number(huoshanum)));

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(leButton, 0, 0);
    mainLayout->addWidget(bingButton, 0, 1);
    mainLayout->addWidget(nanButton, 0, 2);
    mainLayout->addWidget(wuguButton, 0, 3);
    mainLayout->addWidget(jiuButton, 3, 1);
    mainLayout->addWidget(wuxieButton, 1, 0);
    mainLayout->addWidget(chaiButton, 1, 1);
    mainLayout->addWidget(shunButton, 1, 2);
    mainLayout->addWidget(jiedaoButton, 1, 3);
    mainLayout->addWidget(taoButton, 3, 0);
    mainLayout->addWidget(leishaButton, 3, 2);
    mainLayout->addWidget(huoshaButton, 3, 3);
    setLayout(mainLayout);
    connect(leButton, SIGNAL(clicked()), this, SLOT(updateLe()));
    connect(bingButton, SIGNAL(clicked()), this, SLOT(updateBing()));
    connect(nanButton, SIGNAL(clicked()), this, SLOT(updateNan()));
    connect(wuguButton, SIGNAL(clicked()), this, SLOT(updateWugu()));
    connect(jiuButton, SIGNAL(clicked()), this, SLOT(updateJiu()));
    connect(wuxieButton, SIGNAL(clicked()), this, SLOT(updateWuxie()));
    connect(chaiButton, SIGNAL(clicked()), this, SLOT(updateChai()));
    connect(jiedaoButton, SIGNAL(clicked()), this, SLOT(updateJiedao()));
    connect(taoButton, SIGNAL(clicked()), this, SLOT(updateTao()));
    connect(leishaButton, SIGNAL(clicked()), this, SLOT(updateLeisha()));
    connect(huoshaButton, SIGNAL(clicked()), this, SLOT(updateHuosha()));
    connect(shunButton, SIGNAL(clicked()), this, SLOT(updateShun()));

}

