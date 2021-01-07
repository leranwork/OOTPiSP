#ifndef LABIRINTFACTORYPROTOTYPE_H
#define LABIRINTFACTORYPROTOTYPE_H

#include <labirintfactory.h>
#include <labirint.h>
#include <door.h>
#include <room.h>
#include <wall.h>

class LabirintFactoryPrototype: public LabirintFactory
{
public:
    LabirintFactoryPrototype(Labirint *labirint, Wall *wall, Room *room, Door *door);
    virtual Labirint* MakeLabirint() const;
    virtual  Room*  MakeRoom(int n) const;
    virtual Wall* MakeWall() const;
    virtual Door* MakeDoor(Room *r1, Room *r2) const;
private:
    Labirint* _prototypeMaze;
    Room* _prototypeRoom;
    Wall* _prototypeWall;
    Door* _prototypeDoor;
};

#endif // LABIRINTFACTORYPROTOTYPE_H
