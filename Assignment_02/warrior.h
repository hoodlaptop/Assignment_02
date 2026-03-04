#pragma once
#include "player.h"

class Warrior : public Player
{
public:
    Warrior(std::string nickname);
    void attack() override;
    void attack(Monster* monster) override;
};