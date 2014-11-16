//Sławek Smyczyński
#ifndef BATERIABAR_H
#define BATERIABAR_H

#include <QGLWidget>

class BateriaBar : public QGLWidget
{
    Q_OBJECT
public:
    explicit BateriaBar(QWidget *parent = 0);

signals:

public slots:
    void setMaximum(int a);
    void setValue(int a);
    void setMaximum(float a);
    void setValue(float a);
protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int width, int height);
private:
    float size;
    float w;
    float l;
    float max;

};

#endif // BATERIABAR_H
