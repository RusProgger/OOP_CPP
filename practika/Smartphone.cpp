#include <iostream>
#include <string>

class Smartphone {
    private:
        std::string brand;
        int storage;
        int battery;

    public:
        Smartphone(std::string brand, int storage, int battery) {
            this->brand = brand;
            this->storage = storage;
            this->battery = battery;
        }
        
    int set_battery(int battery) {
        if(battery > 0 && battery <= 100) {
            this->battery = battery;
        } else {
            std::cout << "Ошибка: заряд должен быть от 0 до 100\n";
        }
    }

    
};



int main() {


    return 0;
}