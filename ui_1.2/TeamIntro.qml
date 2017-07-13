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
    contentHeight: 800
    anchors.fill: parent
    boundsBehavior: Flickable.StopAtBounds
    clip:true
    Rectangle{
    id: team_Image
    Image {
        id:team_img
        source: "Image/barcelona.png"
        //source: "http://b.hiphotos.baidu.com/baike/w%3D268%3Bg%3D0/sign=99b6d6ab4b086e066aa8384d3a331cc9/9358d109b3de9c82f077b3156b81800a19d8431d.jpg"
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
            console.log("233333333333")
        }
    }
    }
    Popup {
        id: popup
        width: 400; height: 600
        x: 100; y:100
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
        MouseArea{
            anchors.fill:parent
            onDoubleClicked: {
                popup.hide()
            }
            drag.target: mem_list.__scroller
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
    }/*
    Text {
        id: team_introduction
        width: parent.width-team_Image.width
        text: team_intro_text
        anchors.left: team_Image.right
        anchors.leftMargin: 20
        anchors.right: parent.right
        anchors.top: team_name.bottom
        font.family: "微软雅黑"
        wrapMode: Text.WrapAnywhere
    }*/
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
            //team_img.source="file:///C:/Users/zerorin/Desktop/ui_1.2/"+data_controll.LeagueName+"/"+data_controll.TeamName+".png"
            team_img.source=".//img/"+data_controll.LeagueName+"/"+data_controll.TeamName+".png"
            popup.close()
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
