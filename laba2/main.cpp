#include "file.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    File w;
    w.setMaximumSize(766,596);
    w.show();
    return a.exec();
}
