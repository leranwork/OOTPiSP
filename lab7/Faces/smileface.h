#ifndef SMILEFACE_H
#define SMILEFACE_H
#include <eyes.h>
#include <ears.h>
#include <hair.h>
#include <mouse.h>
#include <nose.h>
#include <face.h>

class SmileFace : public Face
{
private:
    Eyes *eyes;
    Ears *ears;
    Hair *hair;
    Mouse *mouse;
    Nose *nose;
public:
    SmileFace(Eyes *eyes, Ears *ears, Hair *hair, Mouse *mouse, Nose *nose);
    void printFace() override;
};

#endif // SMILEFACE_H
