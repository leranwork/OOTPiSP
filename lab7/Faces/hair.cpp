#include "hair.h"

Hair::Hair(Haircut haircut)
{
    this->setHaircut(haircut);
}

void Hair::setHaircut(Haircut haircut)
{
    this->haircut = haircut;
}

Haircut Hair::getHaircut()
{
    return this->haircut;
}
