#include "warrior.h"
#include "monster.h"
#include <iostream>

Warrior::Warrior(std::string nickname) : Player(nickname) 
{
    job_name = "Warrior";
    std::cout << "* You have become a Warrior." << std::endl;
    HP = 150;
    MP = 30;
    power = 20;
    defence = 15;
    accuracy = 70;
    speed = 8;
}

void Warrior::attack() 
{
    std::cout << "* Swings a longsword." << std::endl;
}

void Warrior::attack(Monster* monster) 
{
    int damage = power - monster->getDefence();
    if (damage <= 0) 
    {
        damage = 1;
    }

    std::cout << "* Dealt " << damage << " damage to " 
        << monster->getName() << " with longsword!" << std::endl;

    monster->setHP(monster->getHP() - damage);

    if (monster->getHP() > 0) {
        std::cout << "* " << monster->getName() << "'s remaining HP: " 
            << monster->getHP() << std::endl;
    }
    else 
    {
        std::cout << "* " << monster->getName() << " has been defeated! " 
            << nickname << " wins!" << std::endl;
    }
}