#include <iostream>
#include <string>

class Smartphone {
    private:
        std::string brand;
        int storage;
        int battery;

    public:
        static int count;
        Smartphone(std::string brand, int storage, int battery) {
            this->brand = brand;
            this->storage = storage;
            this->battery = battery;
            count++;
        }
        
    void set_battery(int battery) {
        if(battery > 0 && battery <= 100) {
            this->battery = battery;
        } else {
            std::cout << "Ошибка: заряд должен быть от 0 до 100\n";
        }
    }
    // setter
    void set_storage(int storage) {
        if(storage > 0) {
            this->storage = storage;
        }else {
            std::cout << "Ошибка: память должна быть больше 0\n";
        }
    }
    
    std::string get_brand() {
        return brand;
    }

    int get_storage() {
        return storage;
    }

    int get_battery() {
        return battery;
    }

    void info() {
        std::cout << "Смартфон: " << brand << " | " << "Память: " << storage << " | " << "Заряд: " << battery << "%\n";
    }

};


int Smartphone::count = 0;


int main() {

    int storage, storage1, battery, battery1;
    std::string brand, brand1;

    std::cin >> brand >> storage >> battery;
    std::cin >> brand1 >> storage1 >> battery1;
    
    
    Smartphone Phone(brand, storage, battery);
    Smartphone Phone1(brand1, storage1, battery1);

    Phone.info();
    Phone1.info();

    std::cout << "Всего смартфонов: " << Smartphone::count << "\n";

    return 0;
}