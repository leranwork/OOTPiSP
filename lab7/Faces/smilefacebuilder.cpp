#include "smilefacebuilder.h"

void SmileFaceBuilder::setEars(Ears *ears)
{
    this->ears = ears;
}

void SmileFaceBuilder::setEyes(Eyes *eyes)
{
    this->eyes = eyes;
}

void SmileFaceBuilder::setHair(Hair *hair)
{
    this->hair = hair;
}

void SmileFaceBuilder::setNose(Nose *nose)
{
    this->nose = nose;
}

void SmileFaceBuilder::setMouse(Mouse *mouse)
{
    this->mouse = mouse;
}

Face * SmileFaceBuilder::getResult()
{
    return new SmileFace(this->eyes, this->ears, this->hair, this->mouse, this->nose);
}
