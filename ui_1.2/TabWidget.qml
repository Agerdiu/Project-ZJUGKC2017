//窗口主体界面，包括按钮，积分榜，球队分析界面等等
import QtQuick 2.5
import Data_Controller 1.0
Rectangle
{
    id: tabwidget
    color: "transparent"
    function currentChanged(curIndex)
    {
        content.currentChange(curIndex)
    }
    Data_Controller{
        id:data_controll
        //TeamName:"球队0"
        //LeagueName:"XiJia"
    }
    //由西甲/德甲/英超/意甲四个按钮构成的ROW
    Row
    {
        id: toolbar
        spacing: 12
        anchors.left: tabwidget.left
        anchors.leftMargin: 10
        property int current: 0
        signal clicked
        onCurrentChanged:setCurrentToolBtn()
        //当按下联赛按钮切换屏幕显示内容
        function setCurrentToolBtn()
        {
            for(var i = 0; i < toolbar.children.length; i++)
            {
                toolbar.children[i].state = (toolbar.current == i ? 'checked' : 'leave')
            }
            tabwidget.currentChanged(toolbar.current)
        }

        ToolBtn
        {
            index:0
            state:"checked"
            picSrc: "Image/laliga.png"
            btnText:"西甲"
            onClicked:{
                toolbar.current=btnIndex
                data_controll.LeagueName="XiJia"
            }
        }
        ToolBtn
        {
            index:1
            picSrc: "Image/bundes.png"
            btnText:"德甲"
            onClicked:{
                data_controll.LeagueName="DeJia"
                toolbar.current=btnIndex
            }
        }
        ToolBtn
        {
            index:2
            picSrc: "Image/scd.png"
            btnText:"英超"
            onClicked:{
                data_controll.LeagueName="YinChao"
                toolbar.current=btnIndex
            }
        }
        ToolBtn
        {
            index:3
            picSrc: "Image/s1.png"
            btnText:"意甲"
            onClicked:{
                data_controll.LeagueName="YiJia"
                toolbar.current=btnIndex
            }
        }
    }


    Rectangle
    {
        id:content
        width:tabwidget.width
        anchors.top: toolbar.bottom
        anchors.topMargin: -5
        height: 500
        color:"white"

        property int current: 0
        function currentChange(curIndex)
        {
            content.children[curIndex].x=width
            content.children[curIndex].state='active'
            content.children[current].state='hide'
            current = curIndex
            toolbar.clicked()
        }
        // MainWidget提供积分榜与数据分析界面
        //这里有一些小问题，实际不需要四个MainWidget
        MainWidget
        {
            id:widget1
            state: "active"
            league_name: "西甲"
            default_color: "red"
        }
        MainWidget
        {
            league_name: "德甲"
            default_color: "blue"
        }
        MainWidget
        {
            league_name: "英超"
            default_color: "yellow"
        }
        MainWidget
        {
            league_name: "意甲"
            default_color: "green"
        }
    }
}
