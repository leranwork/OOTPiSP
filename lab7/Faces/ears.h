#ifndef EARS_H
#define EARS_H

enum EarsForm { PINNED, COMMON, BULGING };

class Ears
{
private:
    EarsForm form;
public:
    Ears(EarsForm form);
    void setEarsForm(EarsForm form);
    EarsForm getEarsForm();
};

#endif // EARS_H
