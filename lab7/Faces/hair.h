#ifndef HAIR_H
#define HAIR_H

enum Haircut { BEAUTIFUL, PRETTY, UGLY };

class Hair
{
private:
    Haircut haircut;
public:
    Hair(Haircut haircut);
    void setHaircut(Haircut haircut);
    Haircut getHaircut();
};

#endif // HAIR_H
