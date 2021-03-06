#include "mainwindow.h"
#include "/home/alex/CLionProjects/FileProc/file_proc.h"
#include <QApplication>
#include <QTextStream>

QTextStream& qStdOut()
{
    static QTextStream ts( stdout );
    return ts;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
