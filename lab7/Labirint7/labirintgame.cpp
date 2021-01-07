#include "labirintgame.h"
#include "room.h"
#include "door.h"
#include "wall.h"

LabirintGame::LabirintGame()
{

}

Labirint * LabirintGame::createMaze(LabirintFactory &factory)
{
    Labirint * labirint = factory.makeLanirint();
    Room* r1 = factory.makeRoom(1);
    Room* r2 = factory.makeRoom(2);
    Door* aDoor = factory.makeDoor(r1,   r2);

    labirint->addRoom(r1);
    labirint->addRoom(r1);

    r1->setSide(North, factory.makeWall());
    r1->setSide(East, aDoor);
    r1->setSide(South, factory.makeWall());
    r1->setSide(West, factory.makeWall());

    r2->setSide(North, factory.makeWall());
    r2->setSide(East, factory.makeWall());
    r2->setSide (South, factory.makeWall());
    r2->setSide(West, aDoor);

    return  labirint;
}
