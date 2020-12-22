import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.3
import QtQuick.Window 2.12

// ==================

ApplicationWindow {
    width: 1280
    height: 960
    visible: true

    title: qsTr("Hello World")

    maximumHeight: height
    maximumWidth: width

    minimumHeight: height
    minimumWidth: width

    header: Rectangle{
        width: parent.width
        TabBar{
        id: main_bar
        width: parent.width
            Repeater{
                id: repeater
                model: ["CBT Setting", "Image Analyze", "AVG"]
                TabButton{
                    text: modelData
                    font.pointSize: 25
                    width: Math.max(100, main_bar.width / 3)
                }

            }
        }//end tabbar
    }


    StackLayout{
        anchors.fill: parent
        anchors.topMargin: 45
        anchors.bottomMargin: 0
        currentIndex: main_bar.currentIndex

        Item{
            CBT_SettingForm{
                id: page_cbt_setting
            }
        }

        Item{
            IMG_AnalyzeForm{
                id: page_img_analyze
            }
        }

        Item{
            RES_AvgForm{
                id: page_res
            }
        }
    }

    function updateValCombo(cs, ce, ts, te, bs, be){
        page_cbt_setting.updateCBT(cs, ce, ts, te, bs, be)
        return "on"
    }
}




