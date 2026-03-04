#include "magician.h"
#include "monster.h"
#include <iostream>

Magician::Magician(std::string nickname) : Player(nickname) 
{
    job_name = "Magician";
    std::cout << "* You have become a Magician." << std::endl;
    HP = 60;
    MP = 150;
    power = 25;
    defence = 5;
    accuracy = 85;
    speed = 10;
}

void Magician::attack() 
{
    std::cout << "* Casts a spell." << std::endl;
}

void Magician::attack(Monster* monster) 
{
    int damage = power - monster->getDefence();
    if (damage <= 0) 
    {
        damage = 1;
    }

    std::cout << "* Dealt " << damage << " damage to " 
        << monster->getName() << " with spell!" << std::endl;

    monster->setHP(monster->getHP() - damage);

    if (monster->getHP() > 0) 
    {
        std::cout << "* " << monster->getName() << "'s remaining HP: " 
            << monster->getHP() << std::endl;
    } 
    else 
    {
        std::cout << "* " << monster->getName() << " has been defeated! " 
            << nickname << " wins!" << std::endl;
    }
}
