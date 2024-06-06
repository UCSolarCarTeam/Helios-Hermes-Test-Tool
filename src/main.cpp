// Copyright (C) 2021 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QTimer>

#include "app_environment.h"
#include "import_qml_components_plugins.h"
#include "import_qml_plugins.h"

#include "./SerialPortForwarder.h"
#include "KeyMotor.h"
#include "lights.h"
#include "DriverControls.h"
#include "BatteryFaults.h"

int main(int argc, char *argv[])
{
    set_qt_environment();

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    KeyMotor keyMotor;
    engine.rootContext()->setContextProperty("keyMotor", &keyMotor);

    Lights lights;
    engine.rootContext()->setContextProperty("lights", &lights);

    DriverControls driverControls;
    engine.rootContext()->setContextProperty("driverControls", &driverControls);

    BatteryFaults batteryFaults;
    engine.rootContext()->setContextProperty("batteryFaults", &batteryFaults);

    // const QUrl url(u"qrc:/qt/Serialqml/Main/main.qml"_qs);
//    const QUrl url(QStringLiteral("/home/mason/ViscommTester/main.qml"));
    const QUrl url(QStringLiteral("/home/solarcar/Desktop/Helios-Hermes-Test-Tool/main.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);

    engine.addImportPath(QCoreApplication::applicationDirPath() + "/qml");
    engine.addImportPath(":/");

    engine.load(url);

    SerialPortForwarder forwarder("/dev/pts/3");

    QTimer timer;
    bool firstRun = true;
    QObject::connect(&timer, &QTimer::timeout, [&forwarder, &keyMotor, &lights, &driverControls, &batteryFaults]() {

        forwarder.forwardData(keyMotor.encodedByteStream());
        forwarder.forwardData(lights.encodedByteStream());
        forwarder.forwardData(driverControls.encodedByteStream());
        forwarder.forwardData(batteryFaults.encodedByteStream());
    });
    timer.start(500);

    if (engine.rootObjects().isEmpty()) {
        return -1;
    }

    return app.exec();
}
