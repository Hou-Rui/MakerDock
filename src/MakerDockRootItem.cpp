#include "MakerDockRootItem.hpp"

MakerDockRootItem::MakerDockRootItem(const QPixmap &pixmap, QWidget *parent)
    : MakerDockItem(parent), m_iconLabel(new QLabel(this)) {
    m_iconLabel->setPixmap(pixmap);
}

MakerDockRootItem::MakerDockRootItem(QWidget *parent)
    : MakerDockItem(parent), m_iconLabel(new QLabel(this)) {
    m_iconLabel->setText("ROOT");
    m_iconLabel->setAlignment(Qt::AlignCenter);
    m_iconLabel->setFixedSize(width(), height());
}

void MakerDockRootItem::mouseMoveEvent(QMouseEvent *event) {
    MakerDockItem::mouseMoveEvent(event);
    emit positionChanged();
}
