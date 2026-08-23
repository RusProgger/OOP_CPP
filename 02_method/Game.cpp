#include <iostream>
#include <string>

class Game {
    private:
        std::string title;
        std::string genre;
        unsigned int rating;

    public:
    statis int count;

    Game(std::string title, std::string genre, unsigned int rating) {
        this->title = title;
        this->genre = genre;
        this-> rating = rating;
        count++;
    }

    



};

int Game::count = 0;

int main() {



    return 0;
}