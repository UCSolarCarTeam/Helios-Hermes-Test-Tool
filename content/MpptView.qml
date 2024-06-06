import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    property var mppt
    width: 375
    height: 175

    Switch {
        id: switch1
        x: 7
        y: 36
        text: qsTr("Alive")
        checked: mppt.alive
        onClicked: mppt.setAlive(checked)
    }

    SpinBox {
        id: spinBox
        x: 146
        y: 33
        width: 90
        height: 35
        value: mppt.arrayVoltage
        onValueChanged: mppt.setArrayVoltage(value)
    }

    Text {
        id: text1
        x: 154
        y: 13
        text: qsTr("Array Voltage")
        font.pixelSize: 12
    }

    SpinBox {
        id: spinBox1
        x: 242
        y: 33
        width: 90
        height: 35
        value: mppt.arrayCurrent
        onValueChanged: mppt.setArrayCurrent(value)
    }

    Text {
        id: text2
        x: 250
        y: 13
        text: qsTr("Array Current")
        font.pixelSize: 12
    }

    SpinBox {
        id: spinBox2
        x: 146
        y: 94
        width: 90
        height: 35
        value: mppt.batteryVoltage
        onValueChanged: mppt.setBatteryVoltage(value)
    }

    Text {
        id: text3
        x: 150
        y: 74
        text: qsTr("Battery Voltage")
        font.pixelSize: 12
    }

    SpinBox {
        id: spinBox3
        x: 242
        y: 94
        width: 100
        height: 35
        to: 10000
        value: mppt.temp
        onValueChanged: mppt.setTemp(value)
    }

    Text {
        id: text4
        x: 272
        y: 74
        text: qsTr("Temp")
        font.pixelSize: 12
    }

    Rectangle {
        id: rectangle
        x: 0
        y: 0
        width: 375
        height: 175
        color: "#c0fef1"
        radius: 25
        z: -1
    }

    Text {
        id: driverControlsStream
        x: 14
        y: 135
        width: 348
        height: 14
        text: "Byte Stream: " + mppt.byteStreamStr
        font.pixelSize: 16
    }

    Text {
        id: driverControlsStream1
        x: 14
        y: 155
        width: 348
        height: 14
        text: "Encoded Stream: " + mppt.encodedByteStreamStr
        font.pixelSize: 16
    }
}
