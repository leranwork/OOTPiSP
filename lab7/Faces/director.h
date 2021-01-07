#ifndef DIRECTOR_H
#define DIRECTOR_H

#include <facebuilder.h>

class Director
{
public:
    Director();
    void constructSmileFace(FaceBuilder *builder);
    void constructGoodFace(FaceBuilder *builder);
    void constructUglyFace(FaceBuilder *builder);
};

#endif // DIRECTOR_H
