#include "user.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    user w;
    w.show();
    return a.exec();
}
