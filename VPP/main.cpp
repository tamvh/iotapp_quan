#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "blemanager.h"
#include "bleinterface.h"
#include "httpclient.h"
#include "device.h"
#include <QDebug>

#include <Qt>
#include <QZXing.h>



int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    BLEmanager m_bleManager;
    BLEInterface m_bleInterface;
    HttpClient m_httpClient;
    Device m_device;

    QQmlApplicationEngine engine;
    QZXing::registerQMLTypes();
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));
    engine.rootContext()->setContextProperty("_bleManager",&m_bleManager);
    engine.rootContext()->setContextProperty("_bleInterface",&m_bleInterface);
    engine.rootContext()->setContextProperty("_httpClient",&m_httpClient);
    engine.rootContext()->setContextProperty("_device",&m_device);
    
    if (engine.rootObjects().isEmpty())
        return -1;
    //[Fabric with:@[[Crashlytics class]]];
    return app.exec();
}
