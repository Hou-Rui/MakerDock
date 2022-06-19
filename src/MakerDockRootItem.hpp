#ifndef SRC_MAKERDOCKROOTITEM_HPP
#define SRC_MAKERDOCKROOTITEM_HPP

#include <QLabel>

#include "MakerDockItem.hpp"

class MakerDockRootItem : public MakerDockItem {
    Q_OBJECT

public:
    UTILS_DEFINE_REF(MakerDockRootItem)
    MakerDockRootItem(QWidget *parent = nullptr);
    MakerDockRootItem(const QPixmap &pixmap, QWidget *parent = nullptr);

signals:
    void positionChanged();

protected:
    void mouseMoveEvent(QMouseEvent *event) override;

private:
    QSharedPointer<QLabel> m_iconLabel;
};

#endif /* SRC_MAKERDOCKROOTITEM_HPP */
