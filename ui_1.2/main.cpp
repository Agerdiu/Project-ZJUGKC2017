#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtGui>
#include "data_controller.h"
#include "teamdata.h"
#include "datasource.h"
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;

    qmlRegisterType<datasource>("datasource", 1, 0, "Datasource");
    qmlRegisterType<Data_Controller>("Data_Controller", 1, 0, "Data_Controller");
    //qmlRegisterType<TeamData>("TeamData",1,0,"TeamData");
    //data.close();
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    engine.addImportPath(QStringLiteral("qml"));
    return app.exec();
}
