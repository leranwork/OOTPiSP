#ifndef UGLYFACE_H
#define UGLYFACE_H
#include <eyes.h>
#include <ears.h>
#include <hair.h>
#include <mouse.h>
#include <nose.h>
#include <face.h>

class UglyFace : public Face
{
private:
    Eyes *eyes;
    Ears *ears;
    Hair *hair;
    Mouse *mouse;
    Nose *nose;
public:
    UglyFace(Eyes *eyes, Ears *ears, Hair *hair, Mouse *mouse, Nose *nose);
    void printFace() override;
};
#endif // UGLYFACE_H
