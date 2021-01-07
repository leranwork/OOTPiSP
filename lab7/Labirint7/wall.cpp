#include "wall.h"
#include <iostream>
Wall::Wall()
{
    std::cout << "Создание стены" << std::endl;
}

void Wall::enter()
{
    std::cout << "Стена!" << std::endl;
}

Wall * Wall::clone()
{
    return new Wall(*this);
}
