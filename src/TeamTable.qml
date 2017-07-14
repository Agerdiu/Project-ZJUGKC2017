import QtQuick 2.2
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.2
import Data_Controller 1.0
Item {
    width: 300
    height: 200

    TableView{
        id:tableView
        anchors.fill: parent
        headerDelegate: null
        //rowDelegate: rowDele
        frameVisible: false
        //alternatingRowColors: true
        sortIndicatorVisible: false
        model: libraryModel
        TableViewColumn{
            id:prop_Column
            title: "Prop"
            role:"prop"
            movable: false
            resizable: false
            width: tableView.viewport.width/2
            delegate: Rectangle{
                //color: "aliceblue"
                //height:240
                Text{
                 height:20
                 font.pixelSize: 15
                 anchors.right: parent.right
                 anchors.verticalCenter: parent.verticalCenter
                 anchors.rightMargin: 15
                 text: styleData.value
                 font.family: "微软雅黑"
                }
            }
        }
        TableViewColumn{
            id:val_Column
            title: "Val"
            role:"val"
            movable: false
            resizable: false
            width: tableView.viewport.width/2
            delegate: Rectangle{
                //color: "aliceblue"
                Text{
                 height: 20
                 font.pixelSize: 15
                 anchors.left: parent.left
                 anchors.verticalCenter: parent.verticalCenter
                 anchors.leftMargin: 15
                 text: styleData.value
                 font.family: "微软雅黑"
                }
            }
        }
        rowDelegate: Rectangle {
         height:20
         /*SystemPalette {
         id: systemPalette
         colorGroup: SystemPalette.Active
         }
         color: {
         var baseColor = styleData.alternate ? systemPalette.alternateBase : systemPalette.base
         return styleData.selected ? "aliceblue": baseColor
          }*/
         }
    }
    ListModel{
        id: libraryModel
        ListElement {
            prop: "Goals per game"
            val: "0"
        }
        ListElement {
            prop: "Tackles per game"
            val: "20.4"
        }
        ListElement {
            prop: "Avg. Possession"
            val: "45.6%"
        }
        ListElement {
            prop: "Season"
            val: "2016/2017"
        }
        ListElement {
            prop: "Tournament"
            val: "La Liga"
        }
        ListElement {
            prop: "Shots per game"
            val: "9.9"
        }
        ListElement {
            prop: "Dribbles per game"
            val: "7.3"
        }
        ListElement {
            prop: "Pass Accuracy"
            val: "72.6%"
        }
    }
    Connections{
        target: data_controll
        onSignalInfo:{
            libraryModel.clear()
            libraryModel.append({"prop":"Pass Accuracy","val":info_data.TeamInfoPass})
            libraryModel.append({"prop":"Dribbles per game","val":info_data.TeamInfoDribble})
            libraryModel.append({"prop":"Tournament","val":info_data.TeamInfoTourn})
            libraryModel.append({"prop":"Shots per game","val":info_data.TeamInfoShot})
            libraryModel.append({"prop":"Avg. Possession","val":info_data.TeamInfoPoss})
            libraryModel.append({"prop":"Goals per game","val":info_data.TeamInfoGoal})
            libraryModel.append({"prop":"Seasons","val":info_data.TeamInfoSeason})
            libraryModel.append({"prop":"Tackles","val":info_data.TeamInfoTackle})
        }
    }
}
