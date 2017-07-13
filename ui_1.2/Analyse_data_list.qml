import QtQuick 2.0

Item {
    width: parent.width
    height: parent.height
    /*View1{
     id:view1
     visible:true
    }
    View2{
     id:view2
     visible:false
    }*/
    ListView {
        id: root
        focus: true
        anchors.fill: parent
        snapMode: ListView.SnapOneItem
        highlightRangeMode: ListView.StrictlyEnforceRange
        highlightMoveDuration: 250
        orientation: ListView.Horizontal
        boundsBehavior: Flickable.StopAtBounds

        onCurrentIndexChanged: {
            if (infoText.opacity > 0.0) {
                if (sourceLoaded)
                    infoText.opacity = 0.0;
                else if (currentIndex != 0)
                    currentIndex = 0;
            }
        }

        model: ListModel {
            ListElement {component: "ViewAerial.qml"}
            ListElement {component: "ViewCorner.qml"}
            ListElement {component: "ViewDispossessed.qml"}
            ListElement {component: "ViewDribbles.qml"}
            ListElement {component: "ViewPass.qml"}
            ListElement {component: "ViewPossession.qml"}
            ListElement {component: "ViewRating.qml"}
            ListElement {component: "ViewShots.qml"}
            ListElement {component: "ViewTackles.qml"}
        }

        delegate: Loader {
            width: root.width
            height: root.height

            source: component
            asynchronous: true

            onLoaded: sourceLoaded = true
        }
    }

}
