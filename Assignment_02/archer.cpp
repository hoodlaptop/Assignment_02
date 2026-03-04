#include "archer.h"
#include "monster.h"
#include <iostream>

Archer::Archer(std::string nickname) : Player(nickname) 
{
    job_name = "Archer";
    std::cout << "* You have become an Archer." << std::endl;
    HP = 80;
    MP = 50;
    power = 15;
    defence = 8;
    accuracy = 95;
    speed = 15;
}

void Archer::attack() 
{
    std::cout << "* Shoots an arrow." << std::endl;
}

void Archer::attack(Monster* monster) 
{
    int damage = power - monster->getDefence();
    if (damage <= 0) {
        damage = 1;
    }

    int hitDamage = damage / 3;
    if (hitDamage <= 0) 
    {
        hitDamage = 1;
    }

    int totalDamage = hitDamage * 3;

    std::cout << "* Dealt " << hitDamage << " damage to " 
        << monster->getName() << " with arrow! 3 hits" << std::endl;

    monster->setHP(monster->getHP() - totalDamage);

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
