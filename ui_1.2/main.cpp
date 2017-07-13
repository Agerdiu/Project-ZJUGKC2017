#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtGui>
#include "data_controller.h"
#include "teamdata.h"
#include <QSplashScreen>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    qmlRegisterType<Data_Controller>("Data_Controller", 1, 0, "Data_Controller");
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/Image/Animation.png"));
    splash->show();
    Sleep(2000);
    splash->hide();
    delete splash;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    engine.addImportPath(QStringLiteral("qml"));
    return app.exec();
}
