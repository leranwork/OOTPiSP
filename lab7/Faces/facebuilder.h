#ifndef FACEBUILDER_H
#define FACEBUILDER_H

#include <eyes.h>
#include <ears.h>
#include <hair.h>
#include <mouse.h>
#include <nose.h>
#include <face.h>

class FaceBuilder
{
protected:
    Eyes *eyes;
    Ears *ears;
    Hair *hair;
    Nose *nose;
    Mouse *mouse;

public:
    virtual void setEyes(Eyes *eyes) = 0;
    virtual void setEars(Ears *ears) = 0;
    virtual void setHair(Hair *hair) = 0;
    virtual void setNose(Nose *nose) = 0;
    virtual void setMouse(Mouse *mouse) = 0;
    virtual Face * getResult() = 0;
};

#endif // FACEBUILDER_H
