#include "makerdock.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MakerDock w;
    w.show();

    return app.exec();
}

