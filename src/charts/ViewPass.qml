import QtQuick 2.0

import QtQuick 2.0
import QtCharts 2.0
import datasource 1.0
Item {
    anchors.fill: parent

    //![1]
    ChartView {
        title: "Pass Success"
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
        ds1.preparelineseries(series1,data_controll.LeagueName,data_controll.TeamName,"pass_success")
        ds1.preparelineseries(cmp,data_controll.LeagueLock,data_controll.TeamLock,"pass_success")
    }
    Connections{
        target: data_controll
        onTeamDataChanged:{
            ds1.preparelineseries(series1,data_controll.LeagueName,data_controll.TeamName,"pass_success")
        }
        onTeamLockChanged:{
            ds1.preparelineseries(cmp,data_controll.LeagueLock,data_controll.TeamLock,"pass_success")
        }
    }

    //![1]
}
