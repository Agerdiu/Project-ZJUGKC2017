import QtQuick 2.0
import QtCharts 2.0
import datasource 1.0
Item {
    anchors.fill: parent

    //![1]
    ChartView {
        title: "Ratings"
        titleFont.family: "微软雅黑"
        titleFont.bold: true
        titleFont.pixelSize: 32
        anchors.fill: parent
        legend.visible: true
        legend.font.family:"微软雅黑"
        antialiasing: true
        dropShadowEnabled: true
        backgroundRoundness: 0
        //plotAreaColor: "grey"
        theme:ChartView.ChartThemeQt
        ValueAxis {
            visible: false
            id: axisX
            min: 0
            max: 9
        }

        ValueAxis {
            labelsFont.family: "微软雅黑"
            id: axisY
            min: 0
            max: 10
        }

        LineSeries {
            id: series1
            axisX: axisX
            axisY: axisY
            pointLabelsVisible: true
            pointLabelsFormat:"@yPoint"
            color: "blue"
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
        ds1.preparelineseries(series1,data_controll.LeagueName,data_controll.TeamName,"ratings")
        ds1.preparelineseries(cmp,"XiJia","Barcelona","ratings")
    }
    Connections{
        target: data_controll
        onTeamDataChanged:{
            ds1.preparelineseries(series1,data_controll.LeagueName,data_controll.TeamName,"ratings")
        }
    }
    Connections{
        target: data_controll
        onLeagueDataChanged:{
            ds1.preparelineseries(series1,data_controll.LeagueName,data_controll.TeamName,"ratings")
        }
    }
    //![1]
}
