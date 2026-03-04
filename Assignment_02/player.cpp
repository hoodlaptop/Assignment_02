#include "player.h"
#include <iostream>

Player::Player(std::string nickname)
    : nickname(nickname), level(1), HP(100), MP(50), power(10), defence(5), accuracy(80), speed(10)
{ 
}

void Player::printPlayerStatus()
{
    std::cout << "------------------------------------" << std::endl;
    std::cout << "* Current Stats" << std::endl;
    std::cout << "Job: " << job_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Lv. " << level << std::endl;
    std::cout << "HP: " << HP << std::endl;
    std::cout << "MP: " << MP << std::endl;
    std::cout << "Power: " << power << std::endl;
    std::cout << "Defence: " << defence << std::endl;
    std::cout << "Accuracy: " << accuracy << std::endl;
    std::cout << "Speed: " << speed << std::endl;
    std::cout << "------------------------------------" << std::endl;
}

// getter functions
std::string Player::getJobName() { return job_name; }
std::string Player::getNickname() { return nickname; }
int Player::getLevel() { return level; }
int Player::getHP() { return HP; }
int Player::getMP() { return MP; }
int Player::getPower() { return power; }
int Player::getDefence() { return defence; }
int Player::getAccuracy() { return accuracy; }
int Player::getSpeed() { return speed; }

void Player::setNickname(std::string nickname) { this->nickname = nickname; }
void Player::setHP(int HP) { this->HP = HP; }
void Player::setMP(int MP) { this->MP = MP; }
void Player::setPower(int power) { this->power = power; }
void Player::setDefence(int defence) { this->defence = defence; }
void Player::setAccuracy(int accuracy) { this->accuracy = accuracy; }
void Player::setSpeed(int speed) { this->speed = speed; }
