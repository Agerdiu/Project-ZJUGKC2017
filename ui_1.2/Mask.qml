import QtQuick 2.0
import QtQuick.Window 2.1

/**灯箱效果，禁止操作下层的对象*/
Rectangle {
    id:mask0
    //anchors.fill: getRoot(this)
    color: 'lightgrey'
    opacity: 0.5
    z:50
    MouseArea{
        anchors.fill: parent;
        onPressed:{
             mouse.accepted = true
        }
    }

    function getRoot(item)
    {
        return (item.parent !== null) ? getRoot(item.parent) : item;
    }
    Component.onCompleted: {
        this.parent=popup.parent;
        this.anchors.fill=popup.parent;
        console.log("z="+mask0.z)
    }
}
