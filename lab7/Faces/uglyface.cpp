#include "uglyface.h"
#include <iostream>

UglyFace::UglyFace(Eyes *eyes, Ears *ears, Hair *hair, Mouse *mouse, Nose *nose)
{
    this->eyes = eyes;
    this->ears = ears;
    this->hair = hair;
    this->mouse = mouse;
    this->nose = nose;
}

void UglyFace::printFace()
{
    std::cout << "НЕКРАСИВОЕ ЛИЦО" << std::endl;
    std::cout << "глаза: "  << this->eyes->getEyesColor() << std::endl;
    std::cout << "уши: "  << this->ears->getEarsForm() << std::endl;
    std::cout << "волосы: "  << this->hair->getHaircut() << std::endl;
    std::cout << "нос: "  << this->nose->getNoseForm() << std::endl;
    std::cout << "рот: "  << this->mouse->getMouseForm() << std::endl;
}
