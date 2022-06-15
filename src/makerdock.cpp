#include "makerdock.h"
#include "ui_makerdock.h"

MakerDock::MakerDock(QWidget *parent) :
    QMainWindow(parent),
    m_ui(new Ui::MakerDock)
{
    m_ui->setupUi(this);
}

MakerDock::~MakerDock() = default;
