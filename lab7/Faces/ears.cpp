#include "ears.h"

Ears::Ears(EarsForm form)
{
    this->setEarsForm(form);
}

void Ears::setEarsForm(EarsForm form)
{
    this->form = form;
}

EarsForm Ears::getEarsForm()
{
    return this->form;
}
