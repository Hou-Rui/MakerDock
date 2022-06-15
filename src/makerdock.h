#ifndef MAKERDOCK_H
#define MAKERDOCK_H

#include <QMainWindow>
#include <QScopedPointer>

namespace Ui {
class MakerDock;
}

class MakerDock : public QMainWindow
{
    Q_OBJECT

public:
    explicit MakerDock(QWidget *parent = nullptr);
    ~MakerDock() override;

private:
    QScopedPointer<Ui::MakerDock> m_ui;
};

#endif // MAKERDOCK_H
