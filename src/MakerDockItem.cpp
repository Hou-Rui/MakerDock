// <one line to give the program's name and a brief idea of what it does.>
// SPDX-FileCopyrightText: 2022 Hou Rui <email>
// SPDX-License-Identifier: GPL-3.0-or-later

#include "MakerDockItem.hpp"

#include <QMouseEvent>
#include <QPixmap>

MakerDockItem::MakerDockItem(QWidget* parent)
    : QWidget(parent) {
    setWindowFlag(Qt::FramelessWindowHint, true);
    setWindowFlag(Qt::X11BypassWindowManagerHint, true);
    setFixedSize(PIX_WIDTH, PIX_WIDTH);
}

void MakerDockItem::mousePressEvent(QMouseEvent* event) {
    QWidget::mousePressEvent(event);
    m_pressedPoint = event->pos();
}

void MakerDockItem::mouseMoveEvent(QMouseEvent* event) {
    QWidget::mouseMoveEvent(event);
    auto delta = event->pos() - m_pressedPoint;
    move(pos() + delta);
}

void MakerDockItem::mouseReleaseEvent(QMouseEvent* event) {
    QWidget::mouseReleaseEvent(event);
    emit mouseDragFinished();
}
