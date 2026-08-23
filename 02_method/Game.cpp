#include <iostream>
#include <string>

class Game {
    private:
        unsigned int rating;

    public:
        std::string title;
        std::string genre;
    static int count;

    Game(std::string title, std::string genre, unsigned int rating) {
        this->title = title;
        this->genre = genre;
        this-> rating = rating;
        count++;
    }

    int get_rating() {
        return rating;
    }

    void info() {
        std::cout << "Игра: " << title << " | " << "Жанр: " << genre << " | " << "Рейтинг: " << rating << "\n";
    }

};

int Game::count = 0;

int main() {

    

    int rating, rating1;
    std::string title, title1, genre, genre1;

    std::cin >> title >> genre >> rating;
    std::cin >> title1 >> genre1 >> rating1;

    Game myGame(title, genre, rating);
    Game myGame1(title1, genre1, rating1);

    std::cout << "Всего игр: " << Game::count;

    // Выводим

    myGame.info();
    myGame1.info();
    return 0;
}