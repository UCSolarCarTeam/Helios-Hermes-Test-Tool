import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Studio.Components 1.0

Item {
    width: 1092
    height: 1080

    Rectangle {
        id: rectangle
        x: 0
        y: 0
        width: 1092
        height: 1080
        color: "#f7ee84"
        radius: 25

        Rectangle {
            id: rectangle1
            x: 25
            y: 28
            width: 295
            height: 480
            color: "#4ecab8"
            radius: 25

            Switch {
                id: switch1
                x: 30
                y: 55
                text: qsTr("Motor Over Speed")
                checked: motorFaults.motorOverSpeedM0
                onClicked: motorFaults.setMotorOverSpeedM0(checked)
            }

            Switch {
                id: switch3
                x: 29
                y: 157
                text: qsTr("DC Bus OVer Voltage")
                checked: motorFaults.dcBusOverVoltageM0
                onClicked: motorFaults.setDcBusOverVoltageM0(checked)
            }

            Switch {
                id: switch2
                x: 30
                y: 105
                text: qsTr("Software Over Current")
                checked: motorFaults.softwareOverCurrentM0
                onClicked: motorFaults.setSoftwareOverCurrentM0(checked)
            }

            Switch {
                id: switch4
                x: 29
                y: 207
                text: qsTr("Bad Motor Position HS")
                checked: motorFaults.badMotorPHSM0
                onClicked: motorFaults.setBadMotorPHSM0(checked)
            }

            Switch {
                id: switch5
                x: 29
                y: 256
                text: qsTr("Watchdog Caused Last Reset")
                checked: motorFaults.watchdogCausedLastResetM0
                onClicked: motorFaults.setWatchdogCausedLastResetM0(checked)
            }

            Switch {
                id: switch7
                x: 30
                y: 365
                text: qsTr("15V Rail Under Voltage Lock")
                checked: motorFaults.railUnderVoltageLockM0
                onClicked: motorFaults.setRailUnderVoltageLockM0(checked)
            }

            Switch {
                id: switch8
                x: 31
                y: 421
                text: qsTr("Desaturation Fault")
                checked: motorFaults.desaturationFaultM0
                onClicked: motorFaults.setDesaturationFaultM0(checked)
            }

            Switch {
                id: switch6
                x: 30
                y: 311
                text: qsTr("Config Read Error")
                checked: motorFaults.configReadErrorM0
                onClicked: motorFaults.setConfigReadErrorM0(checked)
            }

            Text {
                id: text1
                x: 87
                y: 25
                text: qsTr("M0 Error Flags")
                font.pixelSize: 20
            }
        }

        GroupItem {
            x: 670
            y: 50

            SpinBox {
                id: spinBox
                x: 0
                y: 0
                width: 135
                height: 47
                value: motorFaults.CANRXErrorCountM0
                onValueChanged: motorFaults.setCANRXErrorCountM0(value)
            }

            Text {
                id: text2
                x: 159
                y: 15
                width: 172
                height: 18
                text: qsTr("M0 CAN RX Error Count ")
                font.pixelSize: 16
            }
        }

        Rectangle {
            id: rectangle2
            x: 332
            y: 28
            width: 295
            height: 480
            color: "#4ecab8"
            radius: 25
            Switch {
                x: 30
                y: 55
                text: qsTr("Motor Over Speed")
                checked: motorFaults.motorOverSpeedM1
                onClicked: motorFaults.setMotorOverSpeedM1(checked)
            }

            Switch {
                x: 29
                y: 157
                text: qsTr("DC Bus OVer Voltage")
                checked: motorFaults.dcBusOverVoltageM1
                onClicked: motorFaults.setDcBusOverVoltageM1(checked)
            }

            Switch {
                x: 30
                y: 105
                text: qsTr("Software Over Current")
                checked: motorFaults.softwareOverCurrentM1
                onClicked: motorFaults.setSoftwareOverCurrentM1(checked)
            }

            Switch {
                x: 29
                y: 207
                text: qsTr("Bad Motor Position HS")
                checked: motorFaults.badMotorPHSM1
                onClicked: motorFaults.setBadMotorPHSM1(checked)
            }

            Switch {
                x: 29
                y: 256
                text: qsTr("Watchdog Caused Last Reset")
                checked: motorFaults.watchdogCausedLastResetM1
                onClicked: motorFaults.setWatchdogCausedLastResetM1(checked)
            }

            Switch {
                x: 30
                y: 365
                text: qsTr("15V Rail Under Voltage Lock")
                checked: motorFaults.railUnderVoltageLockM1
                onClicked: motorFaults.setRailUnderVoltageLockM1(checked)
            }

            Switch {
                x: 31
                y: 421
                text: qsTr("Desaturation Fault")
                checked: motorFaults.desaturationFaultM1
                onClicked: motorFaults.setDesaturationFaultM1(checked)
            }

            Switch {
                x: 30
                y: 311
                text: qsTr("Config Read Error")
                checked: motorFaults.configReadErrorM1
                onClicked: motorFaults.setConfigReadErrorM1(checked)
            }

            Text {
                x: 87
                y: 25
                text: qsTr("M1 Error Flags")
                font.pixelSize: 20
            }
        }

        Rectangle {
            id: rectangle3
            x: 28
            y: 523
            width: 295
            height: 419
            color: "#4e9eca"
            radius: 25
            Switch {
                x: 30
                y: 55
                text: qsTr("Output Voltage PWM")
                checked: motorFaults.outputVoltagePWMM0
                onClicked: motorFaults.setOutputVoltagePWMM0(checked)
            }

            Switch {
                x: 29
                y: 157
                text: qsTr("Velocity")
                checked: motorFaults.velocityM0
                onClicked: motorFaults.setVelocityM0(checked)
            }

            Switch {
                x: 30
                y: 105
                text: qsTr("Motor Current ")
                checked: motorFaults.motorCurrentM0
                onClicked: motorFaults.setMotorCurrentM0(checked)
            }

            Switch {
                x: 29
                y: 207
                text: qsTr("Bus Current")
                checked: motorFaults.busCurrentM0
                onClicked: motorFaults.setBusCurrentM0(checked)
            }

            Switch {
                x: 29
                y: 256
                text: qsTr("Bus Voltage Upper")
                checked: motorFaults.busVoltageUpperM0
                onClicked: motorFaults.setBusVoltageUpperM0(checked)
            }

            Switch {
                x: 30
                y: 365
                text: qsTr("IPM or Motor Temperature")
                checked: motorFaults.motorTemperatureIPMM0
                onClicked: motorFaults.setMotorTemperatureIPMM0(checked)
            }

            Switch {
                x: 30
                y: 311
                text: qsTr("Bus Voltage Lower")
                checked: motorFaults.busVoltageLowerM0
                onClicked: motorFaults.setBusVoltageLowerM0(checked)
            }

            Text {
                x: 87
                y: 25
                text: qsTr("M0 Limit Flags")
                font.pixelSize: 20
            }
        }

        Rectangle {
            id: rectangle4
            x: 332
            y: 523
            width: 295
            height: 419
            color: "#4e9eca"
            radius: 25
            Switch {
                x: 30
                y: 55
                text: qsTr("Output Voltage PWM")
                checked: motorFaults.outputVoltagePWMM1
                onClicked: motorFaults.setOutputVoltagePWMM1(checked)
            }

            Switch {
                x: 29
                y: 157
                text: qsTr("Velocity")
                checked: motorFaults.velocityM1
                onClicked: motorFaults.setVelocityM1(checked)
            }

            Switch {
                x: 30
                y: 105
                text: qsTr("Motor Current ")
                checked: motorFaults.motorCurrentM1
                onClicked: motorFaults.setMotorCurrentM1(checked)
            }

            Switch {
                x: 29
                y: 207
                text: qsTr("Bus Current")
                checked: motorFaults.busCurrentM1
                onClicked: motorFaults.setBusCurrentM1(checked)
            }

            Switch {
                x: 29
                y: 256
                text: qsTr("Bus Voltage Upper")
                checked: motorFaults.busVoltageUpperM1
                onClicked: motorFaults.setBusVoltageUpperM1(checked)
            }

            Switch {
                x: 30
                y: 365
                text: qsTr("IPM or Motor Temperature")
                checked: motorFaults.motorTemperatureIPMM1
                onClicked: motorFaults.setMotorTemperatureIPMM1(checked)
            }

            Switch {
                x: 30
                y: 311
                text: qsTr("Bus Voltage Lower")
                checked: motorFaults.busVoltageLowerM1
                onClicked: motorFaults.setBusVoltageLowerM1(checked)
            }

            Text {
                x: 87
                y: 25
                text: qsTr("M1 Limit Flags")
                font.pixelSize: 20
            }
        }

        GroupItem {
            x: 669
            y: 121
            SpinBox {
                x: 0
                y: 0
                width: 135
                height: 47
                value: motorFaults.CANTXErrorCountM0
                onValueChanged: motorFaults.setCANTXErrorCountM0(value)
            }

            Text {
                x: 159
                y: 15
                width: 172
                height: 18
                text: qsTr("M0 CAN TX Error Count ")
                font.pixelSize: 16
            }
        }

        GroupItem {
            x: 669
            y: 205
            SpinBox {
                x: 0
                y: 0
                width: 135
                height: 47
                value: motorFaults.CANRXErrorCountM1
                onValueChanged: motorFaults.setCANRXErrorCountM1(value)
            }

            Text {
                x: 159
                y: 15
                width: 172
                height: 18
                text: qsTr("M1 CAN RX Error Count ")
                font.pixelSize: 16
            }
        }

        GroupItem {
            x: 669
            y: 298
            SpinBox {
                x: 0
                y: 0
                width: 135
                height: 47
                value: motorFaults.CANTXErrorCountM1
                onValueChanged: motorFaults.setCANTXErrorCountM1(value)
            }

            Text {
                x: 159
                y: 15
                width: 172
                height: 18
                text: qsTr("M1 CAN TX Error Count ")
                font.pixelSize: 16
            }
        }
    }
}
