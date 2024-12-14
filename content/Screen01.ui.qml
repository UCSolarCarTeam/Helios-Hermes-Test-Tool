

/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/
import QtQuick 6.2
import QtQuick.Controls 6.2
import QtQuick.Studio.Components 1.0
import SentinelModule

Rectangle {
    id: rectangle
    width: Constants.width
    height: Constants.height

    color: Constants.backgroundColor
    z: -2

    ScrollView {
        id: scrollView
        x: 8
        y: 0
        width: 1904
        height: 4000
        focusPolicy: Qt.TabFocus
        rightPadding: 0
        z: 100
        contentHeight: 7500
        contentWidth: 2750

        BatteryFaultsView {
            id: batteryFaultsView
            x: 918
            y: 0
        }

        KeyMotorView {
            id: keyMotorView
            x: 22
            y: 2342
        }

        DriverControlsView {
            id: driverControlsView
            x: -8
            y: 200
        }

        LightsView {
            id: lightsView
            x: 0
            y: 0
        }

        MpptView {
            id: mpptView
            mppt: mppt0
            x: 14
            y: 813
        }

        MpptView {
            id: mpptView1
            mppt: mppt1
            x: 504
            y: 813
        }

        MpptView {
            id: mpptView2
            mppt: mppt2
            x: 989
            y: 813
        }

        MpptView {
            id: mpptView3
            mppt: mppt3
            x: 1443
            y: 813
        }

        MotorDetailsView {
            id: motorDetailsView
            motorDetails: motor0
            x: 7
            y: 1084
        }

        MotorDetailsView {
            id: motorDetailsView1
            motorDetails: motor1
            x: 7
            y: 1710
        }

        AuxBmsView {
            id: auxBmsView
            x: 22
            y: 2815
        }

        BatteryView {
            id: batteryView
            x: 14
            y: 3471
        }

        B3View {
            id: b3View
            x: 872
            y: 1143
        }

        TelemetryView {
            id: telemetryView
            x: 989
            y: 1673
        }

        MbmsView {
            id: mbmsView
            x: 952
            y: 2477
        }

        ProximitySensorsView {
            id: proximitySensorsView
            x: 952
            y: 3361
        }
    }

    states: [
        State {
            name: "clicked"
            when: button.checked
        }
    ]
}
