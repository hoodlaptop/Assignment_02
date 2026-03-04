#pragma once
#include <string>

class Player;

class Monster {
public:
    Monster(std::string name);

    void attack(Player* player);

    // getter functions
    std::string getName();
    int getHP();
    int getPower();
    int getDefence();
    int getSpeed();

    // setter functions
    void setName(std::string name);
    void setHP(int HP);
    void setPower(int power);
    void setDefence(int defence);
    void setSpeed(int speed);

protected:
    std::string name;
    int HP;
    int power;
    int defence;
    int speed;
};