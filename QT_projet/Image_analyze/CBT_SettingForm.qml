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
        objectName: "cbt_btn"
        signal setClicked(string mes)
        x: 970
        y: 703
        width: 204
        height: 143
        text: "SET CBT"
        font.pointSize: 18

        onClicked:{
            this.setClicked("CBT Setting clicked!")
        }
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


    Slider {
        id: slider
        x: 73
        y: 463
        width: 530
        height: 40
        value: 0.5
    }

    Column{
        x: 110
        y: 540
        spacing: 15
        Label {
            text: qsTr("Control start")
            font.pointSize: 25
        }
        Label {
            text: qsTr("Control end")
            font.pointSize: 25
        }
        Label {
            text: qsTr("Test start")
            font.pointSize: 25
        }

        Label {
            text: qsTr("Test end")
            font.pointSize: 25
        }

        Label {
            text: qsTr("Back start")
            font.pointSize: 25
        }

        Label {
            text: qsTr("Back end")
            font.pointSize: 25
        }
    }
//====================================

    Column{
        id: col_textfield
        x: 319
        y: 534
        spacing: 5

        TextField {
            id: cbt_cs
            font.pointSize: 25
            placeholderText: qsTr("-")
            validator: RegExpValidator { regExp: /[0-9A-F]+/ }
            selectByMouse: true
            MouseArea {
                anchors.fill: parent
                cursorShape: Qt.IBeamCursor
                acceptedButtons: Qt.NoButton
            }
        }
        TextField {
            id: cbt_ce
            font.pointSize: 25
            placeholderText: qsTr("-")
            validator: RegExpValidator { regExp: /[0-9A-F]+/ }
            selectByMouse: true
            MouseArea {
                anchors.fill: parent
                cursorShape: Qt.IBeamCursor
                acceptedButtons: Qt.NoButton
            }
        }
        TextField {
            id: cbt_ts
            font.pointSize: 25
            placeholderText: qsTr("-")
            validator: RegExpValidator { regExp: /[0-9A-F]+/ }
            selectByMouse: true
            MouseArea {
                anchors.fill: parent
                cursorShape: Qt.IBeamCursor
                acceptedButtons: Qt.NoButton
            }
        }
        TextField {
            id: cbt_te
            font.pointSize: 25
            placeholderText: qsTr("-")
            validator: RegExpValidator { regExp: /[0-9A-F]+/ }
            selectByMouse: true
            MouseArea {
                anchors.fill: parent
                cursorShape: Qt.IBeamCursor
                acceptedButtons: Qt.NoButton
            }
        }
        TextField {
            id: cbt_bs
            font.pointSize: 25
            placeholderText: qsTr("-")
            validator: RegExpValidator { regExp: /[0-9A-F]+/ }
            selectByMouse: true
            MouseArea {
                anchors.fill: parent
                cursorShape: Qt.IBeamCursor
                acceptedButtons: Qt.NoButton
            }
        }
        TextField {
            id: cbt_be
            font.pointSize: 25
            placeholderText: qsTr("-")
            validator: RegExpValidator { regExp: /[0-9A-F]+/ }
            selectByMouse: true
            MouseArea {
                anchors.fill: parent
                cursorShape: Qt.IBeamCursor
                acceptedButtons: Qt.NoButton
            }
        }
    }

    Column{
        id: col_spinbox
        x: 540
        y: 534
        spacing: 5

        SpinBox {
            id: sp_cs
            font.pointSize: 25
            wheelEnabled: true
            editable: true;

            value: cbt_cs.text
            from: 0
            to: cbt_ce.text
        }
        SpinBox {
            id: sp_ce
            font.pointSize: 25
            wheelEnabled: true
            editable: true;

            value: cbt_ce.text
            from: cbt_cs.text
            to: cbt_ts.text
        }
        SpinBox {
            id: sp_ts
            font.pointSize: 25
            wheelEnabled: true
            editable: true;

            value: cbt_ts.text
            from: cbt_ce.text
            to: cbt_te.text
        }
        SpinBox {
            id: sp_te
            font.pointSize: 25
            wheelEnabled: true
            editable: true;

            value: cbt_te.text
            from: cbt_ts.text
            to: cbt_bs.text
        }
        SpinBox {
            id: sp_bs
            font.pointSize: 25
            wheelEnabled: true
            editable: true;

            value: cbt_bs.text
            from: cbt_te.text
            to: cbt_be.text
        }
        SpinBox {
            id: sp_be
            font.pointSize: 25
            wheelEnabled: true
            editable: true;

            value: cbt_be.text
            from: cbt_cs.text
            to: 808
        }

    }

    Column{
        id: col_slider
        x: 700
        y: 526
        spacing: 13

        Slider{
            width: 333

            value: cbt_cs.text
            to: cbt_ce.text
        }
        Slider{
            width: 333

            value: cbt_ce.text
            from: cbt_cs.text
            to: cbt_ts.text
        }
        Slider{
            width: 333
            value: cbt_ts.text
            from: cbt_ce.text
            to: cbt_te.text
        }
        Slider{
            width: 333
            value: cbt_te.text
            from: cbt_ts.text
            to: cbt_bs.text
        }
        Slider{
            width: 333
            value: cbt_bs.text
            from: cbt_te.text
            to: cbt_be.text
        }
        Slider{
            width: 333
            value: cbt_be.text
            from: cbt_cs.text
        }
    }


    function updateCBT(cs, ce, ts, te, bs, be){

        cbt_cs.text = cs
        cbt_ce.text = ce
        cbt_ts.text = ts
        cbt_te.text = te
        cbt_bs.text = bs
        cbt_be.text = be

        sp_cs.value = cs
        return "OK"
    }



}



/*##^##
Designer {
    D{i:0;formeditorZoom:0.5}
}
##^##*/
