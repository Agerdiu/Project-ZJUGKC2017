/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt Charts module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 or (at your option) any later version
** approved by the KDE Free Qt Foundation. The licenses are as published by
** the Free Software Foundation and appearing in the file LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

import QtQuick 2.0
import QtCharts 2.0
import datasource 1.0
Item {
    anchors.fill: parent

    //![1]
    ChartView {
        title: "Possession"
        titleFont.family: "微软雅黑"
        titleFont.bold: true
        titleFont.pixelSize: 32
        anchors.fill: parent
        legend.visible: true
        antialiasing: true
        dropShadowEnabled: true
        backgroundRoundness: 0
        //plotAreaColor: "grey"
        theme:ChartView.ChartThemeQt
        ValueAxis {
            visible: false
            id: axisX
            min: 0
            max: 12
        }

        ValueAxis {
            id: axisY
            min: 0
            max: 100
        }

        LineSeries {
            id: series1
            axisX: axisX
            axisY: axisY
            pointLabelsVisible: true
            pointLabelsFormat:"@yPoint"
        }
        LineSeries {
            id: cmp
            axisX: axisX
            axisY: axisY
            pointLabelsVisible: false
            style: Qt.DashLine
            width: 1
        }
    }
    Datasource{
        id: ds1
    }

    Component.onCompleted: {
        ds1.preparelineseries(series1,data_controll.LeagueName,data_controll.TeamName,"possession")
        ds1.preparelineseries(cmp,data_controll.LeagueLock,data_controll.TeamLock,"possession")
    }
    Connections{
        target: data_controll
        onTeamDataChanged:{
            ds1.preparelineseries(series1,data_controll.LeagueName,data_controll.TeamName,"possession")
        }
        onTeamLockChanged:{
            ds1.preparelineseries(cmp,data_controll.LeagueLock,data_controll.TeamLock,"possession")
        }
    }

    //![1]
}
