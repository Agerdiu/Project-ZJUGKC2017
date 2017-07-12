
import QtQuick 2.2
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.1
import Data_Controller 1.0
ScrollView {
    width: parent.width-10
    height: parent.height-10
    anchors.left: parent.left
    anchors.leftMargin: 5
    anchors.top: parent.top
    anchors.topMargin: 5
    flickableItem.interactive: true
    ListView {
        id: mem_listview
        anchors.fill: parent
        //model: data_controll.teamlist
        model:data_controll.getTeamMemList("Real Madrid")
        delegate: PlayerDelegate{
            name:model.modelData.MemName
            age:model.modelData.MemAge
            goal:model.modelData.MemGoal
            assist: model.modelData.MemAssist
            score: model.modelData.MemScore
        }
        highlightFollowsCurrentItem: true;
        focus: true;
        header: Rectangle{
            id: banner
            width: parent.width;height: 60
            color: "aliceblue"
            opacity: 0.5
            Text{
                id:teamname
                anchors.left: parent.left
                anchors.leftMargin: 65
                anchors.verticalCenter:  parent.verticalCenter
                text:"球员"
                font.family: "微软雅黑"
                font.bold: true
                font.pointSize: 10
                color: "white"
                opacity: 1
            }
            Text{
                id:win
                anchors.left: teamname.right
                anchors.leftMargin : 70
                text:"年龄"
                anchors.verticalCenter:  parent.verticalCenter
                font.family: "微软雅黑"
                font.bold: true
                font.pointSize: 10
                color: "white"
                opacity: 1
            }
            Text{
                id:draw
                anchors.left: win.right
                anchors.leftMargin : 30
                text:"进球"
                anchors.verticalCenter:  parent.verticalCenter
                font.family: "微软雅黑"
                font.bold: true
                font.pointSize: 10
                color: "white"
                opacity: 1
            }
            Text{
                id:loss
                anchors.left: draw.right
                anchors.leftMargin : 30
                text:"助攻"
                anchors.verticalCenter:  parent.verticalCenter
                font.family: "微软雅黑"
                font.bold: true
                font.pointSize: 10
                color: "white"
                opacity: 1
            }
            Text{
                id:score
                anchors.left: loss.right
                anchors.leftMargin : 30
                text:"评分"
                anchors.verticalCenter : parent.verticalCenter
                font.family: "微软雅黑"
                font.bold: true
                font.pointSize: 10
                color: "white"
                opacity: 1
            }
        }
    Connections{
      target: data_controll
      onSignalMemList:{
         mem_listview.model=mem_data
         //console.log(team_listview.model.modelData.toString())
      }
    }
    Component.onCompleted: {
        data_controll.getTeamMemList("Real Madrid")
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
                anchors.leftMargin: 6
                anchors.rightMargin: 2
                anchors.bottomMargin: 6
            }
        }
        scrollBarBackground: Item {
            implicitWidth: 14
            implicitHeight: 26
        }
    }

}
