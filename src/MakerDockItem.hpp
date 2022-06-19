// <one line to give the program's name and a brief idea of what it does.>
// SPDX-FileCopyrightText: 2022 Hou Rui <email>
// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef MAKERDOCKITEM_HPP
#define MAKERDOCKITEM_HPP

#include <KWindowSystem>
#include <QSharedPointer>
#include <QWidget>

#include "utils.hpp"

class MakerDockItem : public QWidget {
    Q_OBJECT

public:
    UTILS_DEFINE_REF(MakerDockItem)
    static constexpr int PIX_WIDTH = 92;

signals:
    void mouseDragFinished();

protected:
    explicit MakerDockItem(QWidget *parent = nullptr);
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    QPoint m_pressedPoint;
};

#endif  // MAKERDOCKITEM_HPP
