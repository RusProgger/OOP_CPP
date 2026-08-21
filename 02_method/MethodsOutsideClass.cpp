#include <iostream>
#include <string>
#include <print>

class Car {
    public:
    
    void printHello();
};

void Car::printHello() {
    std::cout << "Hello my Car!!\n";
}



int main() {

    Car message;
    message.printHello();
    
    return 0;
}