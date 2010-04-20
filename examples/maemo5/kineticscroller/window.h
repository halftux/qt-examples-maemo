/****************************************************************************
**
** Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** No Commercial Usage
** This file contains pre-release code and may not be distributed.
** You may use this file in accordance with the terms and conditions
** contained in the Technology Preview License Agreement accompanying
** this package.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
**
**
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QAbstractKineticScroller;
class QTableView;
class QLabel;
class QGridLayout;


class ScrollerWindow : public QWidget
{
    Q_OBJECT

public:
    ScrollerWindow();

protected slots:
    void setLowFrictionEnabled(bool);

    void setAutoMode();
    void setPushMode();
    void setAccelerationMode();

    void setDragInertia(int);
    void setDirectionErrorMargin(int);
    void setPanningThreshold(int);
    void setDecelerationFactor(int);
    void setFastVelocityFactor(int);
    void setMinimumVelocity(int);
    void setMaximumVelocity(int);
    void setOvershootWhenScrollable();
    void setOvershootAlwaysOn();
    void setOvershootAlwaysOff();
    void setAxisLockThreshold(int);
    void setFPS(int);

    void scrollToRandom();

protected:

    void updateNumberLabels();
    void setupSlider( const char* text, int min, int max, int value, const char* slot, int *row, QGridLayout *layout);

    QTableView *table;
    QAbstractKineticScroller *scroller1;
    QAbstractKineticScroller *scroller2;

    QLabel *numberLabels[9];
};


#endif
