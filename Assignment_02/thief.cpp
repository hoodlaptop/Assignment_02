#include "thief.h"
#include "monster.h"
#include <iostream>

Thief::Thief(std::string nickname) : Player(nickname) 
{
    job_name = "Thief";
    std::cout << "* You have become a Thief." << std::endl;
    HP = 70;
    MP = 40;
    power = 18;
    defence = 6;
    accuracy = 90;
    speed = 20;
}

void Thief::attack() 
{
    std::cout << "* Swings a dagger." << std::endl;
}

void Thief::attack(Monster* monster) 
{
    int damage = power - monster->getDefence();
    if (damage <= 0) 
    {
        damage = 1;
    }

    int hitDamage = damage / 5;
    if (hitDamage <= 0) 
    {
        hitDamage = 1;
    }

    int totalDamage = hitDamage * 5;

    std::cout << "* Dealt " << hitDamage << " damage to " 
        << monster->getName() << " with dagger! 5 hits" << std::endl;

    monster->setHP(monster->getHP() - totalDamage);

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
