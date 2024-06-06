import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    width: 900
    height: 775

    Switch {
        id: switch1
        x: 60
        y: 87
        text: qsTr("Internal Communication")
        checked: batteryFaults.internalCommunications;
        onClicked: batteryFaults.setInternalCommunication(checked);
    }

    Switch {
        id: switch2
        x: 60
        y: 125
        text: qsTr("Internal Conversion")
        checked: batteryFaults.internalConversion
        onClicked: batteryFaults.setInternalConversion(checked)
    }

    Switch {
        id: switch3
        x: 60
        y: 163
        text: qsTr("Weak Cell")
        checked: batteryFaults.weakCell
        onClicked: batteryFaults.setWeakCell(checked)
    }

    Switch {
        id: switch4
        x: 60
        y: 201
        text: qsTr("Low Cell Voltage")
        checked: batteryFaults.lowCellVoltage
        onClicked: batteryFaults.setLowCellVoltage(checked)
    }

    Switch {
        id: switch5
        x: 60
        y: 239
        text: qsTr("Open Wiring")
        checked: batteryFaults.openWiring
        onClicked: batteryFaults.setOpenWiring(checked)
    }

    Switch {
        id: switch6
        x: 60
        y: 277
        text: qsTr("Current Sensor")
        checked: batteryFaults.currentSensor
        onClicked: batteryFaults.setCurrentSensor(checked)
    }

    Switch {
        id: switch7
        x: 60
        y: 315
        text: qsTr("Pack Voltage Sensor")
        checked: batteryFaults.packVoltageSensor
        onClicked: batteryFaults.setPackVoltageSensor(checked)
    }

    Switch {
        id: switch8
        x: 286
        y: 87
        text: qsTr("Weak Pack")
        checked: batteryFaults.weakPack
        onClicked: batteryFaults.setWeakPack(checked)
    }

    Switch {
        id: switch9
        x: 286
        y: 125
        width: 216
        height: 32
        text: qsTr("Voltage Redundancy")
        checked: batteryFaults.voltageRedundancy
        onClicked: batteryFaults.setVoltageRedundancy(checked)
    }

    Switch {
        id: switch10
        x: 286
        y: 163
        width: 172
        height: 32
        text: qsTr("Fan Monitor")
        checked: batteryFaults.fanMonitor
        onClicked: batteryFaults.setFanMonitor(checked)
    }

    Switch {
        id: switch11
        x: 286
        y: 201
        text: qsTr("Thermistor")
        checked: batteryFaults.thermistor
        onClicked: batteryFaults.setThermistor(checked)
    }

    Switch {
        id: switch12
        x: 286
        y: 239
        width: 244
        height: 32
        text: qsTr("CANBUS Communications")
        checked: batteryFaults.canbusCommunications
        onClicked: batteryFaults.setCanbusCommunications(checked)
    }

    Switch {
        id: switch13
        x: 286
        y: 277
        width: 205
        height: 32
        text: qsTr("Always-On Supply")
        checked: batteryFaults.alwaysOnSupply
        onClicked: batteryFaults.setAlwaysOnSupply(checked)
    }

    Switch {
        id: switch14
        x: 286
        y: 315
        width: 228
        height: 32
        text: qsTr("High Voltage Isolation")
        checked: batteryFaults.highVoltageIsolation
        onClicked: batteryFaults.setHighVoltageIsolation(checked)
    }

    Switch {
        id: switch15
        x: 518
        y: 87
        width: 198
        height: 32
        text: qsTr("12V Power Supply")
        checked: batteryFaults.powerSupply12V
        onClicked: batteryFaults.setPowerSupply12V(checked)
    }

    Switch {
        id: switch16
        x: 518
        y: 125
        width: 249
        height: 32
        text: qsTr("Charge Limit Enforcement")
        checked: batteryFaults.chargeLimitEnforcement
        onClicked: batteryFaults.setChargeLimitEnforcement(checked)
    }

    Switch {
        id: switch17
        x: 518
        y: 163
        width: 264
        height: 32
        text: qsTr("Discharge Limit Enforcement")
        checked: batteryFaults.dischargeLimitEnforcement
        onClicked: batteryFaults.setDischargeLimitEnforcement(checked)
    }

    Switch {
        id: switch18
        x: 518
        y: 201
        width: 228
        height: 32
        text: qsTr("Charger Safety Relay")
        checked: batteryFaults.chargerSafetyRelay
        onClicked: batteryFaults.setChargerSafetyRelay(checked)
    }

    Switch {
        id: switch19
        x: 518
        y: 239
        width: 244
        height: 32
        text: qsTr("Internal Memory")
        checked: batteryFaults.internalMemory
        onClicked: batteryFaults.setInternalMemory(checked)
    }

    Switch {
        id: switch20
        x: 518
        y: 277
        width: 205
        height: 32
        text: qsTr("Internal Thermistor")
        checked: batteryFaults.internalThermistor
        onClicked: batteryFaults.setInternalThermistor(checked)
    }

    Switch {
        id: switch21
        x: 518
        y: 315
        width: 228
        height: 32
        text: qsTr("Internal Logic")
        checked: batteryFaults.internalLogic
        onClicked: batteryFaults.setInternalLogic(checked)
    }

    Switch {
        id: switch22
        x: 61
        y: 419
        width: 274
        height: 32
        text: qsTr("DCL Reduced Due To Low SOC")
        checked: batteryFaults.dclSoc
        onClicked: batteryFaults.setDclSoc(checked)
    }

    Switch {
        id: switch23
        x: 61
        y: 457
        width: 341
        height: 32
        text: qsTr("DCL Reduced Due To High Cell Resistance")
        checked: batteryFaults.dclCellResistance
        onClicked: batteryFaults.setDclCellResistance(checked)
    }

    Switch {
        id: switch24
        x: 61
        y: 495
        width: 305
        height: 32
        text: qsTr("DCL Reduced Due To Temperature")
        checked: batteryFaults.dclTemperature
        onClicked: batteryFaults.setDclTemperature(checked)
    }

    Switch {
        id: switch25
        x: 61
        y: 533
        width: 330
        height: 32
        text: qsTr("DCL Reduced Due To Low Cell Voltage")
        checked: batteryFaults.dclCellVoltage
        onClicked: batteryFaults.setDclCellVoltage(checked)
    }

    Switch {
        id: switch30
        x: 61
        y: 571
        width: 330
        height: 32
        text: qsTr("DCL Reduced Due To Low Pack Voltage")
        checked: batteryFaults.dclPackVoltage
        onClicked: batteryFaults.setDclPackVoltage(checked)
    }

    Switch {
        id: switch31
        x: 61
        y: 609
        width: 375
        height: 32
        text: qsTr("DCL and CCL Reduced Due to Voltage Failsafe")
        checked: batteryFaults.dclCclVoltage
        onClicked: batteryFaults.setDclCclVoltage(checked)
    }

    Switch {
        id: switch32
        x: 61
        y: 647
        width: 422
        height: 32
        text: qsTr("DCL and CCL Reduced Due to Communication Failsafe")
        checked: batteryFaults.dclCclCommunication
        onClicked: batteryFaults.setDclCclCommunication(checked)
    }

    Switch {
        id: switch33
        x: 467
        y: 419
        width: 281
        height: 32
        text: qsTr("CCL Reduced Due To High SOC")
        checked: batteryFaults.cclSoc
        onClicked: batteryFaults.setCclSoc(checked)
    }

    Switch {
        id: switch26
        x: 467
        y: 457
        width: 341
        height: 32
        text: qsTr("CCL Reduced Due to High Cell Resistance")
        checked: batteryFaults.cclCellResistance
        onClicked: batteryFaults.setCclCellResistance(checked)
    }

    Switch {
        id: switch27
        x: 467
        y: 495
        width: 298
        height: 32
        text: qsTr("CCL Reduced Due To Temperature")
        checked: batteryFaults.cclTemperature
        onClicked: batteryFaults.setCclTemperature(checked)
    }

    Switch {
        id: switch28
        x: 467
        y: 533
        width: 330
        height: 32
        text: qsTr("CCL Reduced Due To High Cell Voltage")
        checked: batteryFaults.cclCellVoltage
        onClicked: batteryFaults.setCclCellVoltage(checked)
    }

    Switch {
        id: switch29
        x: 467
        y: 571
        width: 330
        height: 32
        text: qsTr("CCL Reduced Due To High Pack Voltage")
        checked: batteryFaults.cclPackVoltage
        onClicked: batteryFaults.setCclPackVoltage(checked)
    }

    Switch {
        id: switch34
        x: 467
        y: 609
        width: 307
        height: 32
        text: qsTr("CCL Reduced Due To Charger Latch")
        checked: batteryFaults.cclChargerLatch
        onClicked: batteryFaults.setCclChargerLatch(checked)
    }

    Switch {
        id: switch35
        x: 467
        y: 647
        width: 401
        height: 32
        text: qsTr("CCL Reduced Due To Alternate Current Limit [MPI]")
        checked: batteryFaults.cclCurrent;
        onClicked: batteryFaults.setCclCurrent(checked)
    }

    Rectangle {
        id: rectangle
        x: 18
        y: 370
        width: 850
        height: 325
        color: "#ffbf80"
        radius: 25
        z: -1
    }

    Text {
        id: text1
        x: 83
        y: 390
        text: qsTr("Limit Flags")
        font.pixelSize: 12
    }

    Rectangle {
        id: rectangle1
        x: 21
        y: 35
        width: 775
        height: 325
        color: "#fff480"
        radius: 25
        z: -1
    }

    Text {
        id: text2
        x: 71
        y: 58
        text: qsTr("Error Flags")
        font.pixelSize: 12
    }

    Rectangle {
        id: rectangle2
        x: 0
        y: 0
        width: 900
        height: 775
        color: "#ff0000"
        radius: 25
        z: -2
    }

    Text {
        id: text3
        x: 27
        y: 709
        text: "Byte Stream: " + batteryFaults.byteStreamStr
        font.pixelSize: 16
    }

    Text {
        id: text4
        x: 27
        y: 733
        text: "Encoded Stream: " + batteryFaults.encodedByteStreamStr
        font.pixelSize: 16
    }

    Text {
        id: text5
        x: 27
        y: 15
        text: qsTr("Battery Faults")
        font.pixelSize: 12
    }
}
