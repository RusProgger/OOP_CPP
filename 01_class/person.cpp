#include <iostream>
#include <string>

class Player {

    public:
        std::string name;
        int health;
        int damage;

        void showInfo() {
            std::cout << "Player: " << name << " health " << health << " damage " << damage << "\n";
        }

        void attack() {
            std::cout << "Player " << name <<  " attacks with " << damage << "!\n";
        }
};


int main() {

    Player playerAlex;

    playerAlex.name = "Alex";
    playerAlex.health = 100;
    playerAlex.damage = 200;

    playerAlex.showInfo();
    playerAlex.attack();



    return 0;
}