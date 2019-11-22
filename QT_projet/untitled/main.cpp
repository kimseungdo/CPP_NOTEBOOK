#include <QApplication>
#include "window.h"

int main(int argc, char **argv){
    QApplication app(argc, argv);

    window W;
    W.show();

    return app.exec();
}
