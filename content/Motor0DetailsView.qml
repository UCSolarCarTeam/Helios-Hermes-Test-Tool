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
        color: "#79ed8d"
        radius: 25



        Text {
            id: text2
            x: 267
            y: 22
            text: qsTr("Motor 0 Details")
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
                    value: motor0Details.phaseCCurrent
                    onValueChanged: motor0Details.setPhaseCCurrent(value)
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
                    value: motor0Details.phaseBCurrent
                    onValueChanged: motor0Details.setPhaseBCurrent(value)
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
                    value: motor0Details.motorVoltageReal
                    onValueChanged: motor0Details.setMotorVoltageReal(value)
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
                    value: motor0Details.motorVoltageImag
                    onValueChanged: motor0Details.setMotorVoltageImag(value)
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
                    value: motor0Details.motorCurrentReal
                    onValueChanged: motor0Details.setMotorCurrentReal(value)
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
                    value: motor0Details.motorCurrentImag
                    onValueChanged: motor0Details.setMotorCurrentImag(value)
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
                    value: motor0Details.blackEMF
                    onValueChanged: motor0Details.setBlackEMF(value)
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
                    value: motor0Details.voltageRailSupply15
                    onValueChanged: motor0Details.setVoltageRailSupply15(value)
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
                    value: motor0Details.voltageRailSupply3
                    onValueChanged: motor0Details.setVoltageRailSupply3(value)
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
                    value: motor0Details.voltageRailSupply2
                    onValueChanged: motor0Details.setVoltageRailSupply2(value)
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
                    value: motor0Details.heatSinkTemp
                    onValueChanged: motor0Details.setHeatSinkTemp(value)
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
                    value: motor0Details.motorTemp
                    onValueChanged: motor0Details.setMotorTemp(value)
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
                    value: motor0Details.dspBoardTemp
                    onValueChanged: motor0Details.setDspBoardTemp(value)
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
                    value: motor0Details.dcBusAmpHours
                    onValueChanged: motor0Details.setDcBusAmpHours(value)
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
                    value: motor0Details.odometer
                    onValueChanged: motor0Details.setOdometer(value)
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
                    value: motor0Details.slipSpeed
                    onValueChanged: motor0Details.setSlipSpeed(value)
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
