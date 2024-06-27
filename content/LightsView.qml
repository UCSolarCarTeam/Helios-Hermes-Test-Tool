import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    width: 600
    height: 200

    Switch {
        id: switch1
        x: 58
        y: 25
        text: qsTr("Lights Alive")
        z: 1
        checked: lights.lightsAlive
        onClicked: lights.setLightsAlive(checked)
    }

    Switch {
        id: 2
        x :
        y:
        text: qsTr("Low Beams")
        z: 1
        checked: lights.lowBeams
        onClicked: lights.setLowBeams(checked)
    }

    Switch {
        id: switch1
        x :
        y:
        text: qsTr("High Beams")
        z: 1
        checked: lights.highBeams
        onClicked: lights.setHighBeams(checked)
    }

    Switch {
        id: switch1
        x :
        y:
        text: qsTr("Brake Lights")
        z: 1
        checked: lights.brakeLights
        onClicked: lights.setBrakeLights(checked)
    }

    Switch {
        id: switch1
        x :
        y:
        text: qsTr("Left Signal")
        z: 1
        checked: lights.leftSignal
        onClicked: lights.setLeftSignal(checked)
    }

    Switch {
        id: switch1
        x :
        y:
        text: qsTr("Right Signal")
        z: 1
        checked: lights.rightSignal
        onClicked: lights.setRightSignal(checked)
    }

    Switch {
        id: switch1
        x :
        y:
        text: qsTr("BMS Strobe Light")
        z: 1
        checked: lights.bmsLight
        onClicked: lights.setBmsLight(checked)
    }

    Rectangle {
        id: rectangle
        x: 0
        y: 0
        width: 600
        height: 200
        color: "#ffffff"
        radius: 25

        Text {
            id: text1
            x: 62
            y: 143
            width: 442
            height: 14
            text: "Byte Stream: " + lights.byteStreamStr
            font.pixelSize: 16
        }

        Text {
            id: text2
            x: 62
            y: 168
            width: 442
            height: 14
            text: "Encoded Stream: " + lights.encodedByteStreamStr
            font.pixelSize: 16
        }
    }
}
