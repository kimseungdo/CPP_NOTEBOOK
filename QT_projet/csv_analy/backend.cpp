#include "backend.h"

Backend::Backend(QQuickView *appV, QObject *parent) :
    QObject(parent), m_appview(appV)
{

}

void Backend::moveViewerNOb(QQuickView* vw, QObject* ob){
    m_appview = vw;
    rootOb = ob;
    qDebug()<< "move object & Viewer";
    qDebug() << vw << "\n" << ob;
}
