

/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/
import QtQuick
import QtQuick.Controls
import SentinelModule
import QtQuick.Studio.Components


Item {
    id: screen
    width: 575
    height: 700

    Loader {
        id: toolWinLoader
        source: "Window.qml"
        anchors.top: parent.top
        anchors.left: parent.left
    }
}
