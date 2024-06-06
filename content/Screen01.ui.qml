

/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/
import QtQuick 6.2
import QtQuick.Controls 6.2
import ViscommTester
import QtQuick.Studio.Components 1.0

Rectangle {
    id: rectangle
    width: Constants.width
    height: Constants.height

    color: Constants.backgroundColor
    z: -2

    LightsView {
        id: lightsView
        x: 0
        y: 0
    }

    DriverControlsView {
        id: driverControlsView
        x: 0
        y: 200
    }

    BatteryFaultsView {
        id: batteryFaultsView
        x: 886
        y: 0
    }

    KeyMotorView {
        id: keyMotorView
        x: 8
        y: 606
    }

    states: [
        State {
            name: "clicked"
            when: button.checked
        }
    ]
}
