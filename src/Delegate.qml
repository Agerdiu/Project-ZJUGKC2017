import QtQuick 2.2
import Data_Controller 1.0
Item {
    id: root
    width: parent.width
    height: 60
    property alias rank:text_rank.text
    property alias name:team_name.text
    property alias win:team_win.text
    property alias draw:team_draw.text
    property alias loss:team_loss.text
    property alias score:team_score.text
    signal clicked

    Rectangle {
        id:compare
        anchors.fill: parent
        color: "Ivory"
        visible: mouse.pressed
        opacity: 0.2
    }
    Text {
        id: text_rank
        color: "white"
        font.pointSize: 10
        font.bold: true
        font.family: "微软雅黑"
        //text: team_listview.model.modelData.Ranking
        text:rank
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: parent.left
        anchors.leftMargin: 10
    }
    /*Image {
        id: team_img
        asynchronous: true;
        anchors.left: parent.left
        anchors.leftMargin: 20
        anchors.verticalCenter: parent.verticalCenter
        //source: "Image/menu_pressed.jpg"
        height: 30
        width: 39
        source: "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRHoHxIuqD8GTAYxUXt82MehJgfrAtsPHo0C812qakLR5Gi9vxw4A"
    }*/
    Text {
        id: team_name
        color: "white"
        font.pointSize: 7
        font.bold: true
        font.family: "微软雅黑"
        //text: team_listview.model.modelData.TeamName
        text:name
        width: 60
        wrapMode: Text.WordWrap
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: parent.left
        anchors.leftMargin: 40
    }
    Text {
        id: team_win
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
        id: team_draw
        color: "white"
        font.pointSize: 10
        font.bold: true
        font.family: "微软雅黑"
        //text: team_listview.model.modelData.Draw_num
        text:draw
        anchors.verticalCenter: parent.verticalCenter
        anchors.right: parent.right
        anchors.rightMargin: 115
    }
    Text {
        id: team_loss
        color: "white"
        font.pointSize: 10
        //text: team_listview.model.modelData.Loss_num
        text:loss
        font.bold: true
        font.family: "微软雅黑"
        anchors.verticalCenter: parent.verticalCenter
        anchors.right: parent.right
        anchors.rightMargin: 80
    }

    Text {
        id: team_score
        color: "white"
        font.pointSize: 10
        font.bold: true
        font.family: "微软雅黑"
        //text: team_listview.model.modelData.Score_num
        text:score
        anchors.verticalCenter: parent.verticalCenter
        anchors.right: parent.right
        anchors.rightMargin: 40
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
            team_listview.currentIndex=index
            data_controll.TeamName=team_name.text
      }
    }
    PropertyAnimation{
        id:animWidthIncrease
        target: root
        duration:500
        easing.type:Easing.OutBounce
        property: 'width'
        from:0
        to:root.width
    }
    PropertyAnimation {
        id:animFadeIn
        target: root
        duration: 500
        easing.type: Easing.OutBounce
        property: 'opacity';
        from: 0;
        to: root.opacity
    }
    Component.onCompleted: {
        animFadeIn.start()
    }
    Connections{
        target: toolbar
        onClicked:{
            team_listview.currentIndex=0
            //data_controll.TeamName=team_name.text
        }
    }
}
