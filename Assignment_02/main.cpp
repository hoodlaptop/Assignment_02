#include <iostream>
#include <string>
#include "Player.h"
#include "warrior.h"
#include "magician.h"
#include "thief.h"
#include "archer.h"
#include "monster.h"

int main()
{
    std::string jobs[] = { "warrior", "magician", "thief", "archer" };
    int job_choice = 0;
    std::string nickname;

    Player* player = nullptr;

    std::cout << "Enter your nickname: ";
    std::cin >> nickname;

    std::cout << "<Class Change System>" << std::endl;
    std::cout << "Welcome \"" << nickname << "\"!!" << std::endl;
    std::cout << "* Choose the job you want." << std::endl;

    for (int i = 0; i < 4; i++)
    {
        std::cout << i + 1 << ". " << jobs[i] << std::endl;
    }

    std::cout << "Select: ";
    std::cin >> job_choice;

    switch (job_choice)
    {
    case 1:
        player = new Warrior(nickname);
        break;
    case 2:
        player = new Magician(nickname);
        break;
    case 3:
        player = new Thief(nickname);
        break;
    case 4:
        player = new Archer(nickname);
        break;
    default:
        std::cout << "Invalid input." << std::endl;
        return 1;
    }

    player->printPlayerStatus();

    Monster* monster = new Monster("Slime");
    std::cout << std::endl;
    std::cout << "* A wild " << monster->getName() << " appeared!" << std::endl;
    std::cout << std::endl;

    while (player->getHP() > 0 && monster->getHP() > 0)
    {
        if (player->getSpeed() >= monster->getSpeed())
        {
            player->attack(monster);
            if (monster->getHP() <= 0)
            {
                break;
            }
            monster->attack(player);
        }
        else
        {
            monster->attack(player);
            if (player->getHP() <= 0)
            {
                break;
            }
            player->attack(monster);
        }
    }

    delete monster;
    delete player;
    return 0;
}
