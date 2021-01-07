#include "labirintfactory.h"
#include <iostream>

    LabirintFactory::LabirintFactory()
    {
        std::cout << "Создание фабрики лабиринта" << std::endl;
    }

    Labirint* LabirintFactory::makeLanirint() const
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
