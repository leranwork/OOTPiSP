#include <iostream>
#include <director.h>
#include <uglyfacebuilder.h>
#include <goodfacebuilder.h>
#include <smilefacebuilder.h>
#include <uglyface.h>
#include <goodface.h>
#include <smileface.h>
#include <face.h>

int main()
{
    Director *d = new Director();

    GoodFaceBuilder *good = new GoodFaceBuilder();
    d->constructGoodFace(good);
    Face * face = good->getResult();
    face->printFace();

    SmileFaceBuilder *smile = new SmileFaceBuilder();
    d->constructSmileFace(smile);
    face = smile->getResult();
    face->printFace();

    UglyFaceBuilder *ugly = new UglyFaceBuilder();
    d->constructUglyFace(ugly);
    face = ugly->getResult();
    face->printFace();

    delete ugly;
    delete smile;
    delete good;
    delete face;
    delete d;

    return 0;
}
