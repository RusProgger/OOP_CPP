#include <iostream>
#include <string>

// class Car

class Car {
    public:
    std::string brand;
    std::string color;
    unsigned int speed;

    void showInfo() {
        std::cout << "Model: " << brand << "\n";
        std::cout << "Color: " << color << "\n";
        std::cout << "Speed: " << speed << "\n";
    }
};


int main() {

    Car CarInfo;
    Car CarInfo2;


    CarInfo.brand = "BMW";
    CarInfo.color = "Black";
    CarInfo.speed = 220;

    CarInfo2.brand = "Toyota";
    CarInfo2.color = "White";
    CarInfo2.speed = 180;

    CarInfo.showInfo();
    CarInfo2.showInfo();
}