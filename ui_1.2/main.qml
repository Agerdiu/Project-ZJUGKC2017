//绘制程序主体窗口
import QtQuick 2.3
import QtQuick.Controls 1.2
import Data_Controller 1.0
ApplicationWindow {
    id: mainWindow
    visible: true
    width: 900
    height: 600
    title: qsTr("Hello World")
    flags: Qt.Window | Qt.FramelessWindowHint   //去标题栏
    Rectangle {
           id: mainTitle                       //创建标题栏
           anchors.top: parent.top             //对标题栏定位
           anchors.left: parent.left
           anchors.right: parent.right
           height: 25                          //设置标题栏高度
           color: "#00A600"                    //设置标题栏背景颜色
    Image{
        id: skinpic
        x:  0
        y:  0
        width: 900
        height: 600
        fillMode: Image.TileHorizontally
        sourceSize.height: 600
        sourceSize.width: 900
        source: "Image/background_mainwnd.jpg"
        state: "green"
        states:
        [
            State{
                name:"green"
                PropertyChanges {
                    target: skinpic
                    source:"Image/background_mainwnd.jpg"
                }
            },
            State {
                name:"purple"
                PropertyChanges {
                    target: skinpic
                    source:"Image/background_purple.jpg"
                }
            }
        ]
    MouseArea { //为窗口添加鼠标事件
        anchors.fill: parent
        acceptedButtons: Qt.LeftButton //只处理鼠标左键
        property point clickPos: "0,0"
        onPressed: { //接收鼠标按下事件
            clickPos  = Qt.point(mouse.x,mouse.y)
        }
        onPositionChanged: { //鼠标按下后改变位置
            var delta = Qt.point(mouse.x-clickPos.x, mouse.y-clickPos.y)
            //如果mainwindow继承自QWidget,用setPos
            mainWindow.setX(mainWindow.x+delta.x)
            mainWindow.setY(mainWindow.y+delta.y)
       }
    }

    Text {
        id: title
        x: 10
        y: 10
        width: 125
        height: 12
        color: "#ffffff"
        text: "测试程序 by 张懿"
        font.pointSize: 9
        font.family: "微软雅黑"
        font.pixelSize: 12
    }
    //窗口主体界面，包括按钮，积分榜，球队分析界面等等
    TabWidget
    {
        id: mainscreen
        x: 0;
        y: 40;
        width:900
        height:600
    }

    Image
    {
        id: logo
        x: 800
        y: 40
        source: "Image/logo.png"
    }

    SysBtnGroup
    {
        id: sysbtngrp
        x: 755
        y: 0
        onMin: mainWindow.showMinimized()
        onClose: mainWindow.close()
        onSkin: {
            console.log("skin has been changed")
            skinpic.state=="green"?skinpic.state="purple":skinpic.state="green"
        }
    }
   }
  }
}
