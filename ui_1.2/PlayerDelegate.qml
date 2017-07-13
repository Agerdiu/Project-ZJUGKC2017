import QtQuick 2.2
import Data_Controller 1.0
Item {
    id: mem_analyse
    width: parent.width
    height: 60
    property alias name:mem_name.text
    property alias age:mem_age.text
    property alias goal:mem_goal.text
    property alias assist:mem_assi.text
    property alias score:mem_score.text

    Rectangle {
        anchors.fill: parent
        color: "#11ffffff"
        visible: mouse.pressed
    }
    Text {
        id: mem_name
        color: "white"
        font.pointSize: 10
        font.bold: true
        font.family: "微软雅黑"
        //text: team_listview.model.modelData.Ranking
        text:name
        width: 80
        wrapMode: Text.WordWrap
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: parent.left
        anchors.leftMargin: 30
    }

    Text {
        id: mem_age
        color: "white"
        font.pointSize: 10
        font.bold: true
        font.family: "微软雅黑"
        //text: team_listview.model.modelData.TeamName
        text:age
        anchors.verticalCenter: parent.verticalCenter
        anchors.right: parent.right
        anchors.rightMargin: 200
    }
    Text {
        id: mem_goal
        color: "white"
        font.pointSize: 10
        font.bold: true
        font.family: "微软雅黑"
        //text: team_listview.model.modelData.Win_num
        text:win
        anchors.verticalCenter: parent.verticalCenter
        anchors.right:parent.right
        anchors.rightMargin: 150
    }

    Text {
        id: mem_assi
        color: "white"
        font.pointSize: 10
        font.bold: true
        font.family: "微软雅黑"
        //text: team_listview.model.modelData.Draw_num
        text:draw
        anchors.verticalCenter: parent.verticalCenter
        anchors.right: parent.right
        anchors.rightMargin: 95
    }
    Text {
        id: mem_score
        color: "white"
        font.pointSize: 10
        //text: team_listview.model.modelData.Loss_num
        text:loss
        font.bold: true
        font.family: "微软雅黑"
        anchors.verticalCenter: parent.verticalCenter
        anchors.right: parent.right
        anchors.rightMargin: 30
    }


    Rectangle {
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.margins: 15
        height: 1
        color: "#424246"
    }



    MouseArea {
        id: mouse
        anchors.fill: parent
        onClicked: {
            root.clicked()
            mem_listview.currentIndex=index
            console.log("Delegate "+index+" has been clicked")
            //data_controll.TeamName=team_name.text
        }
    }/*
    Component.onCompleted: {
         team_img.source ="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRHoHxIuqD8GTAYxUXt82MehJgfrAtsPHo0C812qakLR5Gi9vxw4A"
    }*/

    Connections{
        target: toolbar
        onClicked:{
            mem_listview.currentIndex=0
            //data_controll.TeamName=team_name.text
        }
    }
}
