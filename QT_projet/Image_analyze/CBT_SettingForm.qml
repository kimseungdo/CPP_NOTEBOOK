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

    Label {
        id: label
        objectName: "testLabel"
        x: 538
        y: 342
        text: qsTr("Label")
        font.pointSize: 54

    }
}

/*##^##
Designer {
    D{i:0;formeditorZoom:0.25}
}
##^##*/
