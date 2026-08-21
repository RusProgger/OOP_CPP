#include <iostream>
#include <string>
#include <print>


// Cоздайте класс Person, cоздайте обьект класса Alex и через метод выведите  "привет Alex";

class Person {
    public:
        std::string name;

    // Обьявление метода

    void printMessage() {
        std::print("Привет {}", name);
    }
};

int main() {

    // Обьявление обекта класса 

    Person Alex;
    Alex.name = "Alex";

    Alex.printMessage();


    std::print("C++ 2023!!"); 
    return 0;
}