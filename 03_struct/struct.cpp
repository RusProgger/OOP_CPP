#include <iostream>
#include <print>
#include <string>

struct User {
    std::string name;
    std::string userName;
    std::string nikName;
};

int main() {
    // Вариант 1 
    User s1;

    s1.name = "Alex";
    s1.nikName = "Alexandro";
    s1.userName = "Alento";


    std::cout << s1.name << "\n";
    std::cout << s1.userName << "\n";
    std::cout << s1.nikName << "\n";


    // вариант 2

    User s2 = {"Denis", "Marko", "Techno"};

    // вывод 

    std::print("Вариант второй: \nИмя:{} {} {}", s2.name, s2.userName, s2.nikName);

    

    std::cin.get();
    return 0;
}