#include <iostream>
#include <wall.h>
#include <labirintgame.h>
#include <LabirintFactoryPrototype.h>

int main()
{
    LabirintGame game;
    LabirintFactoryPrototype factory(new Labirint(), new Wall(), new Room(2), new Door());
    game.createMaze(factory);

    return 0;
}
