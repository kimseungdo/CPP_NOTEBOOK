import QtQuick 2.12
import QtQuick.Controls 2.2
import QtQuick.Controls.Styles 1.4
import QtQuick.Controls.Material 2.0
import QtQuick.Extras 1.4
import QtQuick.Window 2.12

Item {
    id: page_form
    width: 640
    height: 480
    visible: true
    //title: qsTr("Hello World")

    SwipeView{
        IndexForm{
            id: indexForm

        }
    }


}
