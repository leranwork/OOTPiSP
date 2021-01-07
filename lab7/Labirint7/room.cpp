#include "room.h"
#include <iostream>

Room::Room(int roomNo)
{
    this->_rbomNumber = roomNo;
    std::cout << "Cоздание двери" << std::endl;
}

Map * Room::getSide(Direction direction) const
{
    return this->_sides[direction];
}

void Room::setSide(Direction direction, Map * mapSite)
{
    this->_sides[direction] = mapSite;
}

void Room::enter()
{
    std::cout << "Вход в комнату" << std::endl;
}

Room * Room::clone()
{
    return new Room(*this);
}
