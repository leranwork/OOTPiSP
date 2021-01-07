#include "mouse.h"

Mouse::Mouse(MouseForm form)
{
    this->setMouseForm(form);
}

void Mouse::setMouseForm(MouseForm form)
{
    this->form = form;
}

MouseForm Mouse::getMouseForm()
{
    return this->form;
}
