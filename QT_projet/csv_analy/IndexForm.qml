import QtQuick 2.0
import QtQuick.Controls 2.2
import QtQuick.Controls.Styles 1.4
import QtQuick.Controls.Material 2.0
import QtQuick.Extras 1.4
import QtQuick.Window 2.12

Page {
    width: page_form.width
    height: page_form.height



    Label {
        id: label
        objectName: "test_label"
        x: 175
        y: 115
        width: 34
        height: 14
        text: qsTr("Label")
    }
}
