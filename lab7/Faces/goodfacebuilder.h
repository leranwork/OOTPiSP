#ifndef GOODFACEBUILDER_H
#define GOODFACEBUILDER_H
#include <facebuilder.h>
#include <goodface.h>
#include <face.h>

class GoodFaceBuilder : public FaceBuilder
{
public:
    GoodFaceBuilder() = default;
    virtual ~GoodFaceBuilder() = default;

    void setEars(Ears *ears) override;
    void setEyes(Eyes *eyes) override;
    void setHair(Hair *hair) override;
    void setNose(Nose *nose) override;
    void setMouse(Mouse *mouse) override;

    Face * getResult() override;
};


#endif // GOODFACEBUILDER_H
