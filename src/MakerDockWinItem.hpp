#ifndef SRC_MAKERDOCKWINITEM_HPP
#define SRC_MAKERDOCKWINITEM_HPP

#include <KWindowSystem>
#include <QLabel>
#include <QWidget>

#include "MakerDockItem.hpp"

class MakerDockWinItem : public MakerDockItem {
    Q_OBJECT

public:
    UTILS_DEFINE_REF(MakerDockWinItem)
    explicit MakerDockWinItem(WId windowId, QWidget *parent = nullptr);
    WId windowId() const;

protected:
    void loadWindowIcon();

private:
    WId m_windowId;
    QLabel *m_iconLabel;
};

#endif /* SRC_MAKERDOCKWINITEM_HPP */
