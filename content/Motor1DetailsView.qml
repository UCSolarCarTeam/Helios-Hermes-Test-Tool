import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Studio.Components 1.0

Item {
    width: 660
    height: 590

    Rectangle {
        id: rectangle1
        x: 0
        y: 0
        width: 660
        height: 590
        visible: true
        color: "#edcb79"
        radius: 25



        Text {
            id: text2
            x: 267
            y: 22
            text: qsTr("Motor 1 Details")
            font.pixelSize: 20
        }

        GroupItem {
            x: 47
            y: 76

            GroupItem {
                x: 2
                y: 0
                SpinBox {
                    x: 0
                    y: 0
                    width: 99
                    height: 30
                    value: motor1Details.phaseCCurrent
                    onValueChanged: motor1Details.setPhaseCCurrent(value)
                }

                Text {
                    x: 123
                    y: 8
                    text: qsTr("Phase C Current")
                    font.pixelSize: 12
                }
            }

            GroupItem {
                x: 2
                y: 65
                SpinBox {
                    x: 0
                    y: 0
                    width: 99
                    height: 30
                    value: motor1Details.phaseBCurrent
                    onValueChanged: motor1Details.setPhaseBCurrent(value)
                }

                Text {
                    x: 123
                    y: 8
                    text: qsTr("Phase B Current")
                    font.pixelSize: 12
                }
            }

            GroupItem {
                x: 3
                y: 133
                SpinBox {
                    x: 0
                    y: 0
                    width: 99
                    height: 30
                    value: motor1Details.motorVoltageReal
                    onValueChanged: motor1Details.setMotorVoltageReal(value)
                }

                Text {
                    x: 123
                    y: 8
                    text: qsTr("Motor Voltage Real")
                    font.pixelSize: 12
                }
            }

            GroupItem {
                x: 0
                y: 197
                SpinBox {
                    x: 0
                    y: 0
                    width: 99
                    height: 30
                    value: motor1Details.motorVoltageImag
                    onValueChanged: motor1Details.setMotorVoltageImag(value)
                }

                Text {
                    x: 123
                    y: 8
                    text: qsTr("Motor Voltage Imaginary")
                    font.pixelSize: 12
                }
            }

            GroupItem {
                x: 0
                y: 261
                SpinBox {
                    x: 0
                    y: 0
                    width: 99
                    height: 30
                    value: motor1Details.motorCurrentReal
                    onValueChanged: motor1Details.setMotorCurrentReal(value)
                }

                Text {
                    x: 123
                    y: 8
                    text: qsTr("Motor Current Real")
                    font.pixelSize: 12
                }
            }

            GroupItem {
                x: 0
                y: 318
                SpinBox {
                    x: 0
                    y: 0
                    width: 99
                    height: 30
                    value: motor1Details.motorCurrentImag
                    onValueChanged: motor1Details.setMotorCurrentImag(value)
                }

                Text {
                    x: 123
                    y: 8
                    text: qsTr("Motor Current Imaginary")
                    font.pixelSize: 12
                }
            }

            GroupItem {
                x: 0
                y: 374
                SpinBox {
                    x: 0
                    y: 0
                    width: 99
                    height: 30
                    value: motor1Details.blackEMF
                    onValueChanged: motor1Details.setBlackEMF(value)
                }

                Text {
                    x: 123
                    y: 8
                    text: qsTr("Black EMF")
                    font.pixelSize: 12
                }
            }

            GroupItem {
                x: 3
                y: 436
                SpinBox {
                    x: 0
                    y: 0
                    width: 99
                    height: 30
                    value: motor1Details.voltageRailSupply15
                    onValueChanged: motor1Details.setVoltageRailSupply15(value)
                }

                Text {
                    x: 123
                    y: 8
                    text: qsTr("15V Voltage Rail Supply")
                    font.pixelSize: 12
                }
            }
        }

        GroupItem {
            x: 355
            y: 76
            GroupItem {
                x: 2
                y: 0
                SpinBox {
                    x: 0
                    y: 0
                    width: 99
                    height: 30
                    value: motor1Details.voltageRailSupply3
                    onValueChanged: motor1Details.setVoltageRailSupply3(value)
                }

                Text {
                    x: 123
                    y: 8
                    text: qsTr("3.3V Voltage Rail Supply")
                    font.pixelSize: 12
                }
            }

            GroupItem {
                x: 2
                y: 65
                SpinBox {
                    x: 0
                    y: 0
                    width: 99
                    height: 30
                    value: motor1Details.voltageRailSupply2
                    onValueChanged: motor1Details.setVoltageRailSupply2(value)
                }

                Text {
                    x: 123
                    y: 8
                    text: qsTr("1.9V Voltage Rail Supply")
                    font.pixelSize: 12
                }
            }

            GroupItem {
                x: 3
                y: 133
                SpinBox {
                    x: 0
                    y: 0
                    width: 99
                    height: 30
                    value: motor1Details.heatSinkTemp
                    onValueChanged: motor1Details.setHeatSinkTemp(value)
                }

                Text {
                    x: 123
                    y: 8
                    text: qsTr("Heat-sink Temperature")
                    font.pixelSize: 12
                }
            }

            GroupItem {
                x: 0
                y: 197
                SpinBox {
                    x: 0
                    y: 0
                    width: 99
                    height: 30
                    value: motor1Details.motorTemp
                    onValueChanged: motor1Details.setMotorTemp(value)
                }

                Text {
                    x: 123
                    y: 8
                    text: qsTr("Motor Temperature")
                    font.pixelSize: 12
                }
            }

            GroupItem {
                x: 0
                y: 261
                SpinBox {
                    x: 0
                    y: 0
                    width: 99
                    height: 30
                    value: motor1Details.dspBoardTemp
                    onValueChanged: motor1Details.setDspBoardTemp(value)
                }

                Text {
                    x: 123
                    y: 8
                    text: qsTr("DSP Boaprd Tem")
                    font.pixelSize: 12
                }
            }

            GroupItem {
                x: 0
                y: 318
                SpinBox {
                    x: 0
                    y: 0
                    width: 99
                    height: 30
                    value: motor1Details.dcBusAmpHours
                    onValueChanged: motor1Details.setDcBusAmpHours(value)
                }

                Text {
                    x: 123
                    y: 8
                    text: qsTr("DC Bus AmpHours")
                    font.pixelSize: 12
                }
            }

            GroupItem {
                x: 0
                y: 374
                SpinBox {
                    x: 0
                    y: 0
                    width: 99
                    height: 30
                    value: motor1Details.odometer
                    onValueChanged: motor1Details.setOdometer(value)
                }

                Text {
                    x: 123
                    y: 8
                    text: qsTr("Odometer")
                    font.pixelSize: 12
                }
            }

            GroupItem {
                x: 3
                y: 436
                SpinBox {
                    x: 0
                    y: 0
                    width: 99
                    height: 30
                    value: motor1Details.slipSpeed
                    onValueChanged: motor1Details.setSlipSpeed(value)
                }

                Text {
                    x: 123
                    y: 8
                    text: qsTr("Slip Speed")
                    font.pixelSize: 12
                }
            }
        }
    }
}
