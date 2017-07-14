import QtQuick 2.0


/**
测试分页视图（PageView）
*/
PageView{
    id: root
    width: parent.width
    height: parent.height
    Rectangle{
        width:root.width; height:root.height;
        color: 'red'
    }
    Rectangle{
        width:root.width; height:root.height;
        color: 'green'
    }
    Rectangle{
        width:root.width; height:root.height;
        color: 'blue'
    }
}
