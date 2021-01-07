#ifndef EYES_H
#define EYES_H

enum EyesColor {GRAY, BLUE, GREEN, HAZEL};

class Eyes
{
private:
    EyesColor color;
public:
    Eyes(EyesColor color);
    void setEyesColor(EyesColor color);
    EyesColor getEyesColor();
};

#endif // EYES_H
