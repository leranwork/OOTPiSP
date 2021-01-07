#ifndef LABIRINTFACTORY_H
#define LABIRINTFACTORY_H
#include <labirint.h>
#include <wall.h>
#include <door.h>

class LabirintFactory
{
public:
    LabirintFactory();
    virtual Labirint* makeLanirint() const;
    virtual Wall* makeWall() const;
    virtual Room* makeRoom(int n) const;
    virtual Door* makeDoor(Room* r1, Room* r2);
};

#endif // LABIRINTFACTORY_H
