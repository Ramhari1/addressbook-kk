#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
QWidget window;
window.setFixedSize(500,500);

QPushButton *welcomeButton = new QPushButton("Welcome to Qt",&window);
QPushButton *welcomeButton1 = new QPushButton("Welcome to Qt1",&window);
QLabel *label1 = new QLabel("asdsad",&window);
welcomeButton->setToolTip("Tool tip welcome button");
welcomeButton->setGeometry(10,10,100,30);
welcomeButton1->setGeometry(220,10,100,30);
label1->setGeometry(300,100,200,30);

window.show();
    return app.exec();
}
