#ifndef FILEOUT_H
#define FILEOUT_H

#include <QtCore/QFile>
#include <QtCore/QTextStream>
#include <QDebug>
#include <QApplication>

class fileout
{
    private:
        QFile mfile;
    public:

        bool FileOutInit(QString fileName);
        bool isFileOpened();
        void closeFile();
        void addData(QString data);
};

#endif // FILEOUT_H
