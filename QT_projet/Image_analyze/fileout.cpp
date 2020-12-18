#include "fileout.h"


bool fileout::FileOutInit(QString fileName){
    if(isFileOpened()){
        qDebug() << "already opened !! ";
        return false;
    }
    this->mfile.setFileName(QApplication::applicationDirPath()+"/"+fileName);
    if(!this->mfile.open(QIODevice::WriteOnly)){
        qDebug() << "Cannot open file for writing" << "\n";
        return false;
    }

    qDebug() << "file open success ! ";
    return true;
}

void fileout::addData(QString data){
    if(this->mfile.isOpen()){
        QTextStream out(&this->mfile);
        out << data;
    }
}
bool fileout::isFileOpened(){
    return this->mfile.isOpen();
}
void fileout::closeFile(){
    if(this->mfile.isOpen()){
        this->mfile.close();
    }
}
