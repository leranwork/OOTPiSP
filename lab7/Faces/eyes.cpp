#include "eyes.h"

Eyes::Eyes(EyesColor color)
{
    this->setEyesColor(color);
}

void Eyes::setEyesColor(EyesColor color)
{
    this->color = color;
}

EyesColor Eyes::getEyesColor()
{
    return this->color;
}
