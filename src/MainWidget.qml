import QtQuick 2.5
import Data_Controller 1.0
Rectangle {
    id:widget
    width:parent.width
    height:parent.height
    color:"white"
    state:"hide"

    property int index: 0
    property string default_color:  "white"
    property string background_color: "white"
    property string league_name: "英超"
        //屏幕1/3为积分榜，用ListView设计
        Rectangle
        {
            //anchors.fill: parent
            id: list
            width: parent.width/3
            height: parent.height
            anchors.left: parent.left
            anchors.margins: 0
            //anchors.margins: 50
            //color:"#99FF0000"
            Image{
            id: listBackground
            width:parent.width
            height: parent.height
            fillMode: Image.TileVertically
            source: "Image/background_list.jpg"
            ListPage{
              id:listpage
              width:parent.width
              height:parent.height
            }
            }
        }
        //屏幕右2/3为数据分析界面，暂时只有Text元素
        Rectangle
        {
            id: analyse
            anchors.left: list.right
            anchors.top:widget.top
            //anchors.leftMargin: 12
            //anchors.fill: parent
            //color:background_color
            width: 2*parent.width/3
            height: parent.height
            Text
            {
                id:league_text
                font.pointSize: 10
                font.family: "微软雅黑"
                color:default_color
                anchors.centerIn: parent
                //text:"XiJia"
            }
            Text {
                id: team_text
                font.pointSize: 10
                font.family: "微软雅黑"
                color:default_color
                anchors.verticalCenter: parent.verticalCenter
                anchors.left:league_text.right
                anchors.leftMargin: 10
                //text: "球队0"
            }
             TeamIntro{
              id: team_analyse
              width:parent.width
              height: parent.height
              anchors.top:parent.top
              //anchors.left: parent.left;
            }
        }
    /*    
    Connections{
        target: data_controll
        onTeamDataChanged:{
            team_text.text=data_controll.TeamName
        }
    }
    Connections{
        target: data_controll
        onLeagueDataChanged:{
            league_text.text=data_controll.LeagueName
        }
    }*/
    states:
    [
        State
        {
            name:"active"
            PropertyChanges
            {
                target: widget
                x:parent.x
            }

        },
        State
        {
            name:"hide"
            PropertyChanges
            {
                target: widget
                x:parent.x - width
            }
        }

    ]
/*
    transitions:
    [
        Transition
        {
            PropertyAnimation
            {
                property:"x"
                duration: 500
                easing.type: Easing.OutBounce
                easing.amplitude: 0.5
            }
        }
    ]*/
}
