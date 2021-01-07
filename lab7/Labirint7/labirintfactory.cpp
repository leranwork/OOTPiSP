#include "labirintfactory.h"
#include <iostream>

LabirintFactory* LabirintFactory::_instance = 0;

LabirintFactory* LabirintFactory::instance()
{
    _instance = new LabirintFactory;
    return _instance;
}


LabirintFactory::LabirintFactory()
{
    std::cout << "create maze factory" << std::endl;
}

Labirint* LabirintFactory::makeLabirint() const
{
    return new Labirint();
}

Wall* LabirintFactory::makeWall() const
{
    return new Wall();
}

Room* LabirintFactory::makeRoom(int n) const
{
    return new Room(n);
}

Door* LabirintFactory::makeDoor(Room* r1, Room* r2)
{
    return new Door(r1, r2);
}
