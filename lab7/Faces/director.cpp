#include "director.h"
#include <eyes.h>
#include <ears.h>
#include <hair.h>
#include <mouse.h>
#include <nose.h>

Director::Director()
{

}

void Director::constructSmileFace(FaceBuilder *builder)
{
    builder->setEars(new Ears(EarsForm::COMMON));
    builder->setEyes(new Eyes(EyesColor::BLUE));
    builder->setHair(new Hair(Haircut::BEAUTIFUL));
    builder->setNose(new Nose(NoseForm::FLAT));
    builder->setMouse(new Mouse(MouseForm::SMALL));
}

void Director::constructGoodFace(FaceBuilder *builder)
{
    builder->setEars(new Ears(EarsForm::PINNED));
    builder->setEyes(new Eyes(EyesColor::GREEN));
    builder->setHair(new Hair(Haircut::PRETTY));
    builder->setNose(new Nose(NoseForm::ORDINARY));
    builder->setMouse(new Mouse(MouseForm::NORMAL));
}

void Director::constructUglyFace(FaceBuilder *builder)
{
    builder->setEars(new Ears(EarsForm::BULGING));
    builder->setEyes(new Eyes(EyesColor::HAZEL));
    builder->setHair(new Hair(Haircut::UGLY));
    builder->setNose(new Nose(NoseForm::CROOKED));
    builder->setMouse(new Mouse(MouseForm::BIG));
}
