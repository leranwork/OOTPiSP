#ifndef LABIRINT_H
#define LABIRINT_H
#include <room.h>


class Labirint
{
public:
    Labirint();
    void addRoom(Room *room);
    virtual Labirint * clone();
};

#endif // LABIRINT_H
