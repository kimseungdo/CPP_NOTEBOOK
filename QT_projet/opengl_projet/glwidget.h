#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>

class GLWidget : public QGLWidget{
public:
    GLWidget();

    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
};

#endif // GLWIDGET_H
