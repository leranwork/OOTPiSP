#include "nose.h"

Nose::Nose(NoseForm form)
{
    this->setNoseForm(form);
}

void Nose::setNoseForm(NoseForm form)
{
    this->form = form;
}

NoseForm Nose::getNoseForm()
{
    return this->form;
}
