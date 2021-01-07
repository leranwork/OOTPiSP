#include "labirint.h"
#include <iostream>

Labirint::Labirint()
{

}

void Labirint::addRoom(Room *room)
{
    std::cout << "Дверь добавлена в лабиринт" << std::endl;
}

Labirint * Labirint::clone()
{
    return new Labirint(*this);
}
