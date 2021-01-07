#ifndef GOODFACE_H
#define GOODFACE_H

#include <eyes.h>
#include <ears.h>
#include <hair.h>
#include <mouse.h>
#include <nose.h>
#include <face.h>

class GoodFace : public Face
{
private:
    Eyes *eyes;
    Ears *ears;
    Hair *hair;
    Mouse *mouse;
    Nose *nose;
public:
    GoodFace(Eyes *eyes, Ears *ears, Hair *hair, Mouse *mouse, Nose *nose);
    void printFace() override;
};
#endif // GOODFACE_H
