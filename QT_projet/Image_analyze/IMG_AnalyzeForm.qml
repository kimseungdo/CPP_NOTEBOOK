import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.3
import QtQuick.Dialogs 1.2


Page {
    id:page_img_analyze
    width: 1280
    height: 915
    visible: true

    property string fileurl
    property int slid_wid : 400

    FileDialog{
        id: filedialog
        title: "Choose a Strip Image"
        folder: shortcuts.desktop
        onAccepted: {
            //console.log("select url "+ filedialog.fileUrls)
            fileurl = filedialog.fileUrls
            strip_image.source = filedialog.fileUrl

        }
        onRejected: {
            console.log("Filedialog is closed")
        }

        nameFilters: [ "Image files (*.jpg *.png)", "All files (*)" ]
    }

    Image {
        id: strip_image
        x: 73
        y: 48
        width: 530
        height: 400
        source: ""
        fillMode: Image.PreserveAspectFit
    }

    Rectangle {
        id: rect_chart
        x: 73
        y: 467
        width: 530
        height: 403
        color: "#cc6262"

    }

    Rectangle {
        id: rect_btn
        x: 694
        y: 48
        width: 485
        height: 185
        color: "#cc6262"

        Button{
            x: 8
            y: 9
            width : 230
                height : 80
                text : "이미지 불러오기"
                font.pointSize: 18
                onClicked: {
                    filedialog.visible = true
                }
            }
            Button{
                x: 244
                y: 9
                width : 230
                height : 80
                text : "CSV보내기"
                font.pointSize: 18
            }

            Button{
                x: 8
                y: 95
                width : 230
                height : 80
                text : "분석"
                font.pointSize: 18

            }

            Button{
                x: 244
                y: 95
                width : 230
                height : 80
                text : "결과 저장"
                font.pointSize: 18
            }

    }

    Rectangle {
        id: rect_slider
        x: 884
        y: 306
        color: "#ffffff"
        Column {
            id: row_slider
            y: 0
            Slider {
                id: sd1
                width: slid_wid
                value: 0.5
            }

            Slider {
                id: sd2
                width: slid_wid
                value: 0.5
            }

            Slider {
                id: sd3
                width: slid_wid
                value: 0.5
            }

            Slider {
                id: sd4
                width: slid_wid
                value: 0.5
            }

            Slider {
                id: sd5
                width: slid_wid
                value: 0.5
            }
            spacing: 40
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }

    Rectangle {
        id: rect_slid_val
        x: 1120
        y: 315
        color: "#ffffff"
        Column {
            id: row_slid_val
            y: 0
            Label {
                text: sd1.value
                font.pointSize: 18

            }

            Label {
                text: sd2.value
                font.pointSize: 18
            }

            Label {
                text: sd3.value
                font.pointSize: 18
            }

            Label {
                text: sd4.value
                font.pointSize: 18
            }

            Label {
                text: sd5.value
                font.pointSize: 18
            }
            spacing: 55
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }

}

/*##^##
Designer {
    D{i:0;formeditorZoom:0.33000001311302185}
}
##^##*/
