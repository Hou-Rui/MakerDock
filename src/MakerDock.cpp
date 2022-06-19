#include "MakerDock.hpp"

#include <QDebug>

#include "utils.hpp"

MakerDock::MakerDock(QObject *parent)
    : QObject(parent) {
    initRootItem();
    initWinItems();
}

void MakerDock::initRootItem() {
    m_rootItem = MakerDockRootItem::Ref::create();
    m_itemLocations[m_rootItem] = { 0, 0 };
    connect(m_rootItem.get(), &MakerDockRootItem::positionChanged,
            this, &MakerDock::adjustAllItemsPos);
    m_rootItem->move(0, 0);
    m_rootItem->show();
}

void MakerDock::initWinItems() {
    const auto &windows = KWindowSystem::windows();
    for (auto windowId : windows) {
        if (KWindowSystem::hasWId(windowId)) {
            appendWinItem(windowId);
        }
    }
}

void MakerDock::adjustItemPos(MakerDockItem::Ref item) {
    auto delta = MakerDockItem::PIX_WIDTH * m_itemLocations[item];
    item->move(m_rootItem->window()->pos() + delta);
}

void MakerDock::adjustAllItemsPos() {
    for (auto item : m_itemLocations.keys()) {
        if (item == m_rootItem) continue;
        adjustItemPos(item);
    }
}

void MakerDock::updateLocationBounds() {
    for (auto loc : m_itemLocations.values()) {
        m_largestX = std::max(m_largestX, loc.x());
    }
}

void MakerDock::setItemLocation(MakerDockItem::Ref item, int x, int y) {
    m_itemLocations[item] = { x, y };
    adjustItemPos(item);
}

void MakerDock::tryAttractItem(MakerDockWinItem::Ref item) {
    int x = Utils::roundDiv(item->x() - m_rootItem->x(), MakerDockItem::PIX_WIDTH);
    int y = Utils::roundDiv(item->y() - m_rootItem->y(), MakerDockItem::PIX_WIDTH);
    setItemLocation(item, x, y);
    updateLocationBounds();
}

void MakerDock::appendWinItem(WId windowId) {
    m_largestX++;
    auto item = MakerDockWinItem::Ref::create(windowId);
    m_winItems[windowId] = item;
    setItemLocation(item, m_largestX, 0);
    connect(item.get(), &MakerDockWinItem::mouseDragFinished,
            [this, item]() { tryAttractItem(item); });
    item->show();
}

void MakerDock::deleteWinItem(WId windowId) {
    if (auto item = m_winItems[windowId]; !item.isNull()) {
        item->close();
        m_winItems.remove(windowId);
        updateLocationBounds();
    }
}

MakerDockWinItem::Ref MakerDock::winItem(WId windowId) {
    return m_winItems[windowId];
}
