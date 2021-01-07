#ifndef LABIRINTGAME_H
#define LABIRINTGAME_H

#include <labirintfactory.h>
#include <labirint.h>

class LabirintGame
{
public:
    LabirintGame();
    Labirint * createMaze(LabirintFactory &factory);
};

#endif // LABIRINTGAME_H
