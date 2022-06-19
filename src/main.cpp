#include <QApplication>

#include "MakerDock.hpp"
#include "MakerDockWinItem.hpp"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MakerDock dock;
    return app.exec();
}
