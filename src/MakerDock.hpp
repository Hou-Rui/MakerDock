#ifndef MAKERDOCK_HPP
#define MAKERDOCK_HPP

#include <KWindowSystem>
#include <QMap>
#include <QObject>

#include "MakerDockRootItem.hpp"
#include "MakerDockWinItem.hpp"

class MakerDock : public QObject {
    Q_OBJECT

public:
    explicit MakerDock(QObject *parent = nullptr);

public slots:
    void appendWinItem(WId windowId);
    void deleteWinItem(WId windowId);
    MakerDockWinItem::Ref winItem(WId windowId);

protected:
    void initRootItem();
    void initWinItems();
    void adjustItemPos(MakerDockItem::Ref item);
    void adjustAllItemsPos();
    void updateLocationBounds();
    void setItemLocation(MakerDockItem::Ref item, int x, int y);

protected slots:
    void tryAttractItem(MakerDockWinItem::Ref item);

private:
    int m_largestX = 0;
    MakerDockRootItem::Ref m_rootItem;
    QMap<WId, MakerDockWinItem::Ref> m_winItems;
    QMap<MakerDockItem::Ref, QPoint> m_itemLocations;
};

#endif  // MAKERDOCK_HPP
