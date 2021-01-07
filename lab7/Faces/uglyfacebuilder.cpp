#include "uglyfacebuilder.h"

void UglyFaceBuilder::setEars(Ears *ears)
{
    this->ears = ears;
}

void UglyFaceBuilder::setEyes(Eyes *eyes)
{
    this->eyes = eyes;
}

void UglyFaceBuilder::setHair(Hair *hair)
{
    this->hair = hair;
}

void UglyFaceBuilder::setNose(Nose *nose)
{
    this->nose = nose;
}

void UglyFaceBuilder::setMouse(Mouse *mouse)
{
    this->mouse = mouse;
}

Face * UglyFaceBuilder::getResult()
{
    return new UglyFace(this->eyes, this->ears, this->hair, this->mouse, this->nose);
}
