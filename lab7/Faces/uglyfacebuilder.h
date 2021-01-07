#ifndef UGLYFACEBUILDER_H
#define UGLYFACEBUILDER_H
#include <facebuilder.h>
#include <uglyface.h>
#include <face.h>

class UglyFaceBuilder : public FaceBuilder
{
public:
    UglyFaceBuilder() = default;
    virtual ~UglyFaceBuilder() = default;

    void setEars(Ears *ears) override;
    void setEyes(Eyes *eyes) override;
    void setHair(Hair *hair) override;
    void setNose(Nose *nose) override;
    void setMouse(Mouse *mouse) override;

    Face * getResult() override;
};


#endif // UGLYFACEBUILDER_H
