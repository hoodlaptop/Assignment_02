#pragma once
#include "player.h"

class Thief : public Player
{
public:
    Thief(std::string nickname);
    void attack() override;
    void attack(Monster* monster) override;
};
