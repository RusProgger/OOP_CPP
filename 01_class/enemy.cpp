#include <iostream>
#include <string>


class Enemy {

    public:
        std::string name;
        int health;

        void showInfo() {
            std::cout << "Player: " << name << "\n";
            std::cout << "Health: " << health << "\n";
    }

        void takeDamage(int damage) {
            std::cout << "Taking damage: " << damage << "\n";
            health -= damage;
            std::cout << "Enemy health: " << health << "\n";
    }
};


int main() {

    Enemy playerBob;

    playerBob.name = "Bob";
    playerBob.health = 100;
    playerBob.showInfo();
    playerBob.takeDamage(30);

    playerBob.showInfo();
    return 0;
}