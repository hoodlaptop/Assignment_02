#include "monster.h"
#include "player.h"
#include <iostream>

Monster::Monster(std::string name)
    : name(name), HP(10), power(30), defence(10), speed(10)
{
}

void Monster::attack(Player* player) 
{
    int damage = power - player->getDefence();
    if (damage <= 0) 
    {
        damage = 1;
    }

    std::cout << "* " << name << " dealt " << damage << " damage to " 
        << player->getNickname() << "!" << std::endl;

    player->setHP(player->getHP() - damage);

    if (player->getHP() > 0) 
    {
        std::cout << "* " << player->getNickname() << "'s remaining HP: " 
            << player->getHP() << std::endl;
    }
    else 
    {
        std::cout << "* " << player->getNickname() << " has been defeated!" << std::endl;
    }
}

std::string Monster::getName() { return name; }
int Monster::getHP() { return HP; }
int Monster::getPower() { return power; }
int Monster::getDefence() { return defence; }
int Monster::getSpeed() { return speed; }

void Monster::setName(std::string name) { this->name = name; }
void Monster::setHP(int HP) { this->HP = HP; }
void Monster::setPower(int power) { this->power = power; }
void Monster::setDefence(int defence) { this->defence = defence; }
void Monster::setSpeed(int speed) { this->speed = speed; }
