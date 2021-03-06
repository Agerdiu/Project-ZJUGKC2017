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
            ListElement {component: "charts/ViewAerial.qml"}
            ListElement {component: "charts/ViewCorner.qml"}
            ListElement {component: "charts/ViewDispossessed.qml"}
            ListElement {component: "charts/ViewDribbles.qml"}
            ListElement {component: "charts/ViewPass.qml"}
            ListElement {component: "charts/ViewPossession.qml"}
            ListElement {component: "charts/ViewRating.qml"}
            ListElement {component: "charts/ViewShots.qml"}
            ListElement {component: "charts/ViewTackles.qml"}
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
