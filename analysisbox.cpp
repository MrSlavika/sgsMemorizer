#include "analysisbox.h"
#include <QtWidgets>
#include <QString>
AnalysisBox::AnalysisBox()

{
    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addStretch(1);
    this->setLayout(vbox);
}
