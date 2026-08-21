#include <iostream>
#include <string>

class Car {
    public:
    
    void printHello();
    int speed(int max_speed);
};

void Car::printHello() {
    std::cout << "Hello my Car!!\n";
}

int Car::speed(int max_speed) {
    return max_speed;
}


int main() {

    Car message;
    message.printHello();
    std::cout << "Max speed = " << message.speed(250) << " km.\n";
    
    return 0;
}