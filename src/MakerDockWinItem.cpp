#include "MakerDockWinItem.hpp"

MakerDockWinItem::MakerDockWinItem(WId windowId, QWidget *parent)
    : MakerDockItem(parent),
      m_windowId(windowId),
      m_iconLabel(new QLabel(this)) {
    loadWindowIcon();
}

WId MakerDockWinItem::windowId() const {
    return m_windowId;
}

void MakerDockWinItem::loadWindowIcon() {
    auto icon = KWindowSystem::icon(m_windowId, PIX_WIDTH, PIX_WIDTH, true);
    m_iconLabel->setPixmap(icon);
}
