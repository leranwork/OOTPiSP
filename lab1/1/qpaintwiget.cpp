#include "qpaintwiget.h"
#include <QPainter>
#include <QTextStream>
#include <QtMath>
#include <QPainterPath>

QTextStream cout(stdout);
QPaintWidget::QPaintWidget(QWidget * parent) : QWidget(parent)

{
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(UpdatePixmap()));
    timer->start(100); //запустим таймер
}

void QPaintWidget::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    p.setPen(QPen(Qt::red,6,Qt::SolidLine)); // Настройки кисти
    p.setFont(QFont("Yu Gothic", 20, QFont::DemiBold)); // Настройки шрифта
    QTransform transform; // создание объекта трансформации
    transform.rotate(90,Qt::ZAxis);
    transform.rotate(0,Qt::YAxis);
    transform.rotate(0,Qt::XAxis);
    transform.translate(60,-20);
    p.setTransform(transform); // устанавливаем наши трансформации к рисовальщику.
    p.drawText(rect(), "OOTPiSP lab №8");
    p.resetTransform();
    p.setPen(QPen(Qt::blue,3,Qt::SolidLine)); // Настройки кисти
    p.setRenderHint(QPainter::Antialiasing, true);
    QPainterPath Path;
    for(float Ux = 0; Ux < width(); Ux++)
        Path.lineTo(QPointF(Ux, pow(Ux,3)/100));
    p.drawPath(Path);

    p.drawRect(showRect(rect1));
    p.drawEllipse(rect1.x()+10,rect1.y()+20,25,25);
}

QRectF QPaintWidget::showRect(QRectF &rect)
{
    float Ux= rect.x() + 1;
    float Uy= pow(Ux,3)/100;
    rect.moveTopLeft(QPointF(Ux,Uy));

    return rect;
}

void QPaintWidget::UpdatePixmap()
{
    update();
}
