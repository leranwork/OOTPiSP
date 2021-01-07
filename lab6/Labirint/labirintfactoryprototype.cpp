#include "labirintfactoryprototype.h"

LabirintFactoryPrototype::LabirintFactoryPrototype(Labirint *maze, Wall *wall, Room *room, Door *door)
{
    this->_prototypeMaze = maze;
    this->_prototypeWall = wall;
    this->_prototypeRoom = room;
    this->_prototypeDoor = door;
}

Labirint * LabirintFactoryPrototype::MakeLabirint() const
{

}

Room *  LabirintFactoryPrototype::MakeRoom(int n) const
{
    return this->_prototypeRoom->clone();
}

Wall * LabirintFactoryPrototype::MakeWall() const
{
    return this->_prototypeWall->clone();
}

Door * LabirintFactoryPrototype::MakeDoor(Room *r1, Room *r2) const
{
    Door*  door  = this->_prototypeDoor->clone();
    door->initialize(r1,  r2) ;
    return door;

}
