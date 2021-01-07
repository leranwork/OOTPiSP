#ifndef SMILEFACEBUILDER_H
#define SMILEFACEBUILDER_H
#include <facebuilder.h>
#include <smileface.h>
#include <face.h>

class SmileFaceBuilder : public FaceBuilder
{
public:
    SmileFaceBuilder() = default;
    virtual ~SmileFaceBuilder() = default;

    void setEars(Ears *ears) override;
    void setEyes(Eyes *eyes) override;
    void setHair(Hair *hair) override;
    void setNose(Nose *nose) override;
    void setMouse(Mouse *mouse) override;

    Face * getResult() override;
};
#endif // SMILEFACEBUILDER_H
