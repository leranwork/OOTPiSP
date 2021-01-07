#ifndef NOSE_H
#define NOSE_H

enum NoseForm { FLAT, ORDINARY, CROOKED };

class Nose
{
private:
    NoseForm form;
public:
    Nose(NoseForm form);
    void setNoseForm(NoseForm form);
    NoseForm getNoseForm();
};

#endif // NOSE_H
