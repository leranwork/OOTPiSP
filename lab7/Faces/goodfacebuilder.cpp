#include "goodfacebuilder.h"
#include <facebuilder.h>
#include <goodface.h>
#include <face.h>

void GoodFaceBuilder::setEars(Ears *ears)
{
    this->ears = ears;
}

void GoodFaceBuilder::setEyes(Eyes *eyes)
{
    this->eyes = eyes;
}

void GoodFaceBuilder::setHair(Hair *hair)
{
    this->hair = hair;
}

void GoodFaceBuilder::setNose(Nose *nose)
{
    this->nose = nose;
}

void GoodFaceBuilder::setMouse(Mouse *mouse)
{
    this->mouse = mouse;
}

Face * GoodFaceBuilder::getResult()
{
    return new GoodFace(this->eyes, this->ears, this->hair, this->mouse, this->nose);
}
