#ifndef QPAINTWIDGET_H
#define QPAINTWIDGET_H

#include <QtWidgets/QWidget>
#include <QTimer>

class QPaintEvent;
class QPaintWidget : public QWidget

{
Q_OBJECT
    int offset;
    QTimer *timer;
    QRectF rect1=QRectF(0, 0, 50, 20);
public:
    QPaintWidget(QWidget * parent = 0);
    QRectF showRect(QRectF &rect);
    QPainter showEllipse(QPainter &el);
protected:
    void paintEvent(QPaintEvent *);
private slots:
    void UpdatePixmap();
 };

#endif // QPAINTWIDGET_H
