import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12
import QtCharts 2.3

// ==================

Window {

    property int slid_wid : 400


    width: 1280
    height: 960
    visible: true

    title: qsTr("Hello World")

    Image {
        id: image
        x: 73
        y: 67
        width: 479
        height: 360
        source: "qrc:/qtquickplugin/images/template_image.png"
        fillMode: Image.PreserveAspectFit
    }

    SwipeView {
        id: swipeView
        x: 73
        y: 490
        width: 479
        height: 360
    }

    TabBar {
        id: tabBar
        x: 73
        y: 850
        width: 479
        height: 86
    }

    Rectangle {
        id: rectangle
        x: 694
        y: 490
        width: 479
        height: 360
        color: "#ffffff"

        Column {
            id: row
            width: parent.width
            height: parent.height
            spacing: 40
            anchors.horizontalCenter: parent.horizontalCenter


            Slider {
                width: slid_wid
                value: 0.5
            }
            Slider {
                width: slid_wid
                value: 0.5
            }
            Slider {
                width: slid_wid
                value: 0.5
            }
            Slider {
                width: slid_wid
                value: 0.5
            }
            Slider {
                width: slid_wid
                value: 0.5
            }
        }

    }
}

/*##^##
Designer {
    D{i:0;formeditorZoom:0.6600000262260437}
}
##^##*/
