#include <iostream>
#include <string>

class Car {
    public:
    
    void printHello();
    int speed(int max_speed);
    std::string color(const std::string& color);
};

void Car::printHello() {
    std::cout << "Hello my car BMW!!\n";
}

int Car::speed(int max_speed) {
    return max_speed;
}

std::string Car::color(const std::string& color) {
    return color;
}


int main() {

    std::string color_user;
    std::cin >> color_user;

    Car BMW;
    BMW.printHello();
    std::cout << "Max speed = " << BMW.speed(250) << " km.\n";
    std::cout << "Color: " << BMW.color(color_user) << "\n"; 
    
    return 0;
}