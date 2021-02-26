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
#include <QLabel>

#include "arrowpad.h"
#include "mainwindow.h"
#include "analysisbox.h"
#include <iostream>

MainWindow::MainWindow()
{
//! [0]
    this->setWindowTitle(QString::fromLocal8Bit("记牌器v1.0"));
    arrowPad = new ArrowPad;
    analysisBox = new QGroupBox(QString::fromLocal8Bit("牌堆分析"));
    QLabel *jibenLabel = new QLabel(analysisBox);
    QLabel *jinnangLabel = new QLabel(analysisBox);
    QLabel *zhuangbeiLabel = new QLabel(analysisBox);
    jibenLabel->setText(QString::fromLocal8Bit("基本牌85"));
    jinnangLabel->setText(QString::fromLocal8Bit("锦囊牌50"));
    zhuangbeiLabel->setText(QString::fromLocal8Bit("装备牌26"));
    QLabel *label = new QLabel(analysisBox);
    label->setText(QString::fromUtf8("Copyright Cu 2021"));
    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addStretch(1);
    vbox->addWidget(jibenLabel);
    vbox->addWidget(jinnangLabel);
    vbox->addWidget(zhuangbeiLabel);
    vbox->addWidget(label);
    analysisBox->setLayout(vbox);
    QSplitter *m=new QSplitter;
    m->addWidget(arrowPad);
    m->addWidget(analysisBox);
//! [0]
    setCentralWidget(m);

//! [1]
    exitAct = new QAction(tr("E&xit"), this);
    exitAct->setShortcuts(QKeySequence::Quit);
    connect(exitAct, SIGNAL(triggered()), this, SLOT(close()));
//! [1]
    mode1 = new QAction(QString::fromLocal8Bit("关键牌"),this);

    mode2 = new QAction(QString::fromLocal8Bit("点数花色检索"),this);
    mode3 = new QAction(QString::fromLocal8Bit("完整牌名"),this);

    mode4 = new QAction(QString::fromLocal8Bit("牌堆构成"),this);

    mode5 = new QAction(QString::fromLocal8Bit("摸牌堆分析"),this);
    mode6 = new QAction(QString::fromLocal8Bit("弃牌堆分析"),this);
    fileMenu = menuBar()->addMenu(QString::fromLocal8Bit("记牌模式"));
    //fileMenu->addAction(exitAct);
    fileMenu->addAction(mode1);
    fileMenu->addAction(mode2);
    fileMenu->addAction(mode3);
    analyzeMenu = menuBar()->addMenu(QString::fromLocal8Bit("分析模式"));
    analyzeMenu->addAction(mode4);
    analyzeMenu->addAction(mode5);
    analyzeMenu->addAction(mode6);
}
