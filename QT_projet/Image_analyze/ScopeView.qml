
import QtQuick 2.0
import QtCharts 2.1
import QtQuick.Controls.Material 2.0

//![1]
ChartView {
    id: chartView
    animationOptions: ChartView.AllAnimations
    theme: ChartView.ChartThemeBlueCerulean
    legend.visible: false

    ValueAxis {
        id: axisX1
        min: 0
        max:808
        titleText: "index [pixel]"
        labelsFont: Qt.font({pointSize: 8})
        labelFormat: "%d"
    }
    ValueAxis {
        id: axisY1
        min: 1000
        max: 1500
        titleText:"image level [au]"
        labelsFont: Qt.font({pointSize: 8})
        labelFormat: "%d"
    }

    LineSeries {
        id:line
        objectName: "LineSeries"
        name: "LineSeries"
        width: 2.5
        axisX:axisX1
        axisY:axisY1
        color:"cyan"
        style: Qt.SolidLine


    }

    Component.onCompleted: {
        backend.setSeries(chartView.series(0));
        backend.setValueAxisY(axisY1);

    }



}
