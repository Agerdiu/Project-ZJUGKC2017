import QtQuick 2.0
import QtCharts 2.0
import datasource 1.0
Item {
    anchors.fill: parent

    //![1]
    ChartView {
        title: "Corners"
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
        BarSeries {
            id: series

            axisX: BarCategoryAxis {
                visible: false
                categories: ["1","2","3","4","5","6","7","8","9","10"]
            }
            axisY: ValueAxis{
                labelFormat: "%d"
                tickCount: 5
                min:0
                max:16
            }
        }
        BarSeries {
            id: cmp
            opacity: 0.0
            axisX: BarCategoryAxis {
                visible: false
                categories: ["1","2","3","4","5","6","7","8","9","10"]
            }
            axisY: ValueAxis{
                visible: false
                min:0
                max:16
            }
        }
        BarSeries {
            id: spacer
            visible:false
        }

    }
    Datasource{
        id: ds1
    }

    Component.onCompleted: {
        ds1.preparebarseries(series,data_controll.LeagueName,data_controll.TeamName,"corners",false)
        ds1.preparebarseries(cmp,"","","",true)
    }
    Connections{
        target: data_controll
        onTeamDataChanged:{
            ds1.preparebarseries(series,data_controll.LeagueName,data_controll.TeamName,"corners",false)
            ds1.preparebarseries(cmp,data_controll.LeagueLock,data_controll.TeamLock,"corners",true)
        }
        onTeamLockChanged:{
            ds1.preparebarseries(series,data_controll.LeagueName,data_controll.TeamName,"corners",false)
            ds1.preparebarseries(cmp,data_controll.LeagueLock,data_controll.TeamLock,"corners",true)
        }
    }
    //![1]
}
