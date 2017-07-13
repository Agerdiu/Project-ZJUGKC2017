import QtQuick 2.0
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.1
Rectangle{
    id:team_introduction
    width: parent.width
    height: parent.height
    anchors.top:parent.top
    Flickable {
    //flickableItem.interactive: true
    id:team_intro
    contentWidth: parent.width
    contentHeight: 700
    anchors.fill: parent
    boundsBehavior: Flickable.StopAtBounds
    clip:true
    Rectangle{
    id: team_Image
    Image {
        id:team_img
        source: "Image/barcelona.png"
        width: parent.width-20
        height: parent.height-20
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.leftMargin: 10
        anchors.topMargin: 10
    }
    border.color: "white"
    width: 200
    height: 200
    border.width: 5
    radius: 5
    anchors.left: parent.left
    anchors.leftMargin: 30
    anchors.top:parent.top
    anchors.topMargin: 5
    color: "white"
    MouseArea{
        anchors.fill: team_Image
        onClicked: {
        popup.show()
        }
    }
    }
    Popup {
        id: popup
        width: 400; height: 520
        x: 100; y:80
        //anchors.centerIn: parent  // 注意：使用位移动画不能用anchors定位方式
        z: 101
        visible: false;
        radius: 5
        showMask:true
        //animationType:cmbAnimation.currentText
        animationType: "size"
        Image{
            id:mem_list_backgroud
            source: "Image/background_list.jpg"
            width: parent.width-10
            height: parent.height-10
            fillMode: Image.TileVertically
            anchors.left: parent.left
            anchors.leftMargin: 5
            anchors.top:parent.top
            anchors.topMargin: 5
        }

        MemListView{
            id:mem_list
            width:parent.width-10
            height:parent.height-10
        }
    }
    Text{
       id:team_name
       //text:team_intro_name
       font.pointSize: 20
       font.bold: true
       anchors.left: team_Image.right
       anchors.leftMargin: 60
       font.family: "微软雅黑"
       anchors.top:parent.top
       anchors.topMargin: 5
    }

    TeamTable{
        id:team_table
        anchors.left: team_Image.right
        anchors.leftMargin: 20
        anchors.top: team_name.bottom
        anchors.topMargin: 10
    }
    Connections{
        target: data_controll
        onTeamDataChanged:{
            team_name.text=data_controll.TeamName
            team_img.source="./img/"+data_controll.LeagueName+"/"+data_controll.TeamName+".png"
            //lock_team.border.color="transparent"
            //unlock_team.border.color="transparent"
            popup.close()
        }
    }
    MouseArea{
        drag.target: team_intro
    }
    Rectangle{
        id:lock_team
        anchors.top:team_Image.bottom
        anchors.topMargin: 15
        anchors.left: parent.left
        anchors.leftMargin: 65
        width: 60
        height:30
        radius: 4
        border.width: 3
        border.color: "transparent"
        //opacity: 0.5
        color: "hotpink"
        Text {
            id: lock_text
            text: qsTr("锁定球队")
            font.bold: true
            color: "white"
            opacity: 1
            font.family: "微软雅黑"
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
        }
        MouseArea{
            anchors.fill:parent
            onClicked: {
                console.log("锁定球队")
                data_controll.lock=true
                data_controll.LeagueLock=data_controll.LeagueName
                data_controll.TeamLock=data_controll.TeamName
                lock_team.border.color="gray"
                unlock_team.border.color="transparent"
            }
        }
    }
    Rectangle{
        id:unlock_team
        anchors.top:team_Image.bottom
        anchors.topMargin: 15
        anchors.left: lock_team.right
        anchors.leftMargin: 10
        width: 60
        height:30
        radius:4
        color: "blue"
        border.width:3
        border.color: "transparent"
        //opacity: 0.5
        Text {
            id: unlock_text
            text: qsTr("解除锁定")
            font.bold: true
            color: "white"
            opacity: 1
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            font.family: "微软雅黑"
        }
        MouseArea{
            anchors.fill:parent
            onClicked: {
                console.log("解锁球队")
                unlock_team.border.color="gray"
                lock_team.border.color="transparent"
                data_controll.lock=false
            }
        }
    }
    Rectangle{
        id:analyse_data
        anchors.top:team_table.bottom
        anchors.left: parent.left
        anchors.leftMargin: 20
        width: parent.width-40
        height:400
        border.color: "aliceblue"
        border.width: 5
        radius: 5
        Analyse_data_list{
            id:analyse_data_list
        }
    }
    states: State {
        name: "ShowBars"
        when: team_intro.movingVertically
        PropertyChanges { target: verticalScrollBar; opacity: 1 }
    }
    transitions: Transition {
        NumberAnimation { properties: "opacity"; duration: 400 }
    }
}
    ScrollBar {
        id: verticalScrollBar
        orientation: Qt.Vertical
        width: 12; height: team_intro.height-12
        opacity: 0
        anchors.right: team_intro.right
        position: team_intro.visibleArea.yPosition
        pageSize: team_intro.visibleArea.heightRatio

    }
}
