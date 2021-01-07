#ifndef WALL_H
#define WALL_H

#include <map.h>

class Wall: public Map
{
public:
    Wall();
    void enter() override;
    virtual Wall * clone();
};

#endif // WALL_H
