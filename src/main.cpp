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
#include "MotorFaults.h"
#include "lights.h"
#include "DriverControls.h"

int main(int argc, char *argv[])
{
    set_qt_environment();

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    MotorFaults motorFaults;
    engine.rootContext()->setContextProperty("motorFaults", &motorFaults);

    Lights lights;
    engine.rootContext()->setContextProperty("lights", &lights);

    DriverControls driverControls;
    engine.rootContext()->setContextProperty("driverControls", &driverControls);

    // const QUrl url(u"qrc:/qt/Serialqml/Main/main.qml"_qs);
    const QUrl url(QStringLiteral("/home/mason/ViscommTester/main.qml"));
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

    SerialPortForwarder forwarder("/dev/pts/1");

    QTimer timer;
    bool firstRun = true;
    QObject::connect(&timer, &QTimer::timeout, [&forwarder, &motorFaults, &lights, &driverControls]() {

        forwarder.forwardData(motorFaults.encodedByteStream());
        forwarder.forwardData(lights.encodedByteStream());
        forwarder.forwardData(driverControls.encodedByteStream());
        // forwarder.forwardData(driverControls.byteStream());
    });
    timer.start(500);

    if (engine.rootObjects().isEmpty()) {
        return -1;
    }

    return app.exec();
}
