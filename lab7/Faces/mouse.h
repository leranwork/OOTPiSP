#ifndef MOUSE_H
#define MOUSE_H

enum MouseForm { SMALL, NORMAL, BIG };

class Mouse
{
private:
    MouseForm form;
public:
    Mouse(MouseForm form);
    void setMouseForm(MouseForm form);
    MouseForm getMouseForm();
};

#endif // MOUSE_H
