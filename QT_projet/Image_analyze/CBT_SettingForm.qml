import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.3
import QtCharts 2.1
import QtQuick.Controls.Material 2.0


Page {
    id:page_cbt_setting
    width: 1280
    height: 915
    visible: true

    Button{
        x: 970
        y: 703
        width: 204
        height: 143
        text: "SET CBT"
        font.pointSize: 18
    }


    Image {
        id: cbt_strip_image
        x: 73
        y: 48
        width: 530
        height: 400
        source: "strip_image/20200921/131532_capture-0.png"
        fillMode: Image.PreserveAspectFit
    }



    Label {
        id: label1
        x: 133
        y: 501
        text: qsTr("Control start")
        font.pointSize: 25
    }
    Label {
        x: 133
        y: 551
        text: qsTr("Control end")
        font.pointSize: 25
    }
    Label {
        x: 133
        y: 601
        text: qsTr("Test start")
        font.pointSize: 25
    }

    Label {
        x: 133
        y: 651
        text: qsTr("Test end")
        font.pointSize: 25
    }

    Label {
        x: 133
        y: 701
        text: qsTr("Back start")
        font.pointSize: 25
    }

    Label {
        x: 133
        y: 751
        text: qsTr("Back end")
        font.pointSize: 25
    }
//====================================

    TextField {
        x: 391
        y: 495
        font.pointSize: 25
        placeholderText: qsTr("Text Field")
        validator: RegExpValidator { regExp: /[0-9A-F]+/ }
        selectByMouse: true
        MouseArea {
            anchors.fill: parent
            cursorShape: Qt.IBeamCursor
            acceptedButtons: Qt.NoButton
        }
    }
    TextField {
        x: 391
        y: 495
        font.pointSize: 25
        placeholderText: qsTr("Text Field")
        validator: RegExpValidator { regExp: /[0-9A-F]+/ }
        selectByMouse: true
        MouseArea {
            anchors.fill: parent
            cursorShape: Qt.IBeamCursor
            acceptedButtons: Qt.NoButton
        }
    }
    TextField {
        x: 391
        y: 495
        font.pointSize: 25
        placeholderText: qsTr("Text Field")
        validator: RegExpValidator { regExp: /[0-9A-F]+/ }
        selectByMouse: true
        MouseArea {
            anchors.fill: parent
            cursorShape: Qt.IBeamCursor
            acceptedButtons: Qt.NoButton
        }
    }
    TextField {
        x: 391
        y: 495
        font.pointSize: 25
        placeholderText: qsTr("Text Field")
        validator: RegExpValidator { regExp: /[0-9A-F]+/ }
        selectByMouse: true
        MouseArea {
            anchors.fill: parent
            cursorShape: Qt.IBeamCursor
            acceptedButtons: Qt.NoButton
        }
    }
    TextField {
        x: 391
        y: 495
        font.pointSize: 25
        placeholderText: qsTr("Text Field")
        validator: RegExpValidator { regExp: /[0-9A-F]+/ }
        selectByMouse: true
        MouseArea {
            anchors.fill: parent
            cursorShape: Qt.IBeamCursor
            acceptedButtons: Qt.NoButton
        }
    }
    TextField {
        x: 391
        y: 495
        font.pointSize: 25
        placeholderText: qsTr("Text Field")
        validator: RegExpValidator { regExp: /[0-9A-F]+/ }
        selectByMouse: true
        MouseArea {
            anchors.fill: parent
            cursorShape: Qt.IBeamCursor
            acceptedButtons: Qt.NoButton
        }
    }

    SpinBox {
        id: spinBox6
        x: 592
        y: 659
        width: 182
        height: 99
        font.pointSize: 25
    }


}

/*##^##
Designer {
    D{i:0;formeditorZoom:0.6600000262260437}
}
##^##*/
