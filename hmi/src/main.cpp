#include<QGuiApplication>
#include<QQmlApplicationEngine>

int main(int argc, char* argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    const QString applicationDirPath = app.applicationDirPath();

    QQmlApplicationEngine engine;
    engine.load(QUrl(applicationDirPath + "/qml/main.qml"));

    app.exec();
}
