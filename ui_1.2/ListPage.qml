
import QtQuick 2.2
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.1
import Data_Controller 1.0
ScrollView {
    width: parent.width
    height: parent.height

    flickableItem.interactive: true
    ListView {
        id: team_listview
        anchors.fill: parent
        model: data_controll.getTeamList("XiJia")
        delegate: Delegate {
            rank:model.modelData.TeamListRank
            name: model.modelData.TeamListName;
            win: model.modelData.TeamListWin;
            draw: model.modelData.TeamListDraw;
            loss: model.modelData.TeamListLose;
            score: model.modelData.TeamListScore;
        }
        highlight: Rectangle{
            id:highlight_rect
            color: "lightsteelblue";
            radius: 3;
            opacity: 0.5
            z:team_listview.z + 2;
        }
        highlightFollowsCurrentItem: true;
        focus: true;
        header: Rectangle{
            id: banner
            width: parent.width;height: 40
            color: "green"
            state: "green"
            Text{
                id:teamname
                anchors.left: parent.left
                anchors.leftMargin: 40
                anchors.verticalCenter:  parent.verticalCenter
                text:"球队"
                font.family: "微软雅黑"
                font.pointSize: 10
                color: "white"
            }
            Text{
                id:win
                anchors.left: teamname.right
                anchors.leftMargin : 70
                text:"胜"
                anchors.verticalCenter:  parent.verticalCenter
                font.family: "微软雅黑"
                font.pointSize: 10
                color: "white"
            }
            Text{
                id:draw
                anchors.left: win.right
                anchors.leftMargin : 25
                text:"平"
                anchors.verticalCenter:  parent.verticalCenter
                font.family: "微软雅黑"
                font.pointSize: 10
                color: "white"
            }
            Text{
                id:loss
                anchors.left: draw.right
                anchors.leftMargin : 20
                text:"负"
                anchors.verticalCenter:  parent.verticalCenter
                font.family: "微软雅黑"
                font.pointSize: 10
                color: "white"
            }
            Text{
                id:score
                anchors.left: loss.right
                anchors.leftMargin : 20
                text:"积分"
                anchors.verticalCenter : parent.verticalCenter
                font.family: "微软雅黑"
                font.pointSize: 10
                color: "white"
            }
            states:
            [
                State{
                    name:"green"
                    PropertyChanges {
                        target: banner
                        color:"green"
                    }
                },
                State {
                    name:"purple"
                    PropertyChanges {
                        target: banner
                        color:"purple"
                    }
                }
            ]
        Connections{
           target:sysbtngrp
           onSkin:{
              banner.state=="green"?banner.state="purple":banner.state="green"
               }
            }
        }
    Connections{
      target: data_controll
      onSignalList:{
         team_listview.model=data
         //console.log(team_listview.model.modelData.toString())
      }
    }

    Component.onCompleted: {
        data_controll.getTeamList("XiJia")
    }
}
    style: ScrollViewStyle {
        transientScrollBars: true
        handle: Item {
            implicitWidth: 14
            implicitHeight: 26
            Rectangle {
                color: "#424246"
                anchors.fill: parent
                anchors.topMargin: 6
                anchors.leftMargin: 4
                anchors.rightMargin: 4
                anchors.bottomMargin: 6
            }
        }
        scrollBarBackground: Item {
            implicitWidth: 14
            implicitHeight: 26
        }
    }
}
