#include <iostream>
#include <string>

// Base Class
class Vehicle {
    public:
        std::string brand = "Ferrari";

        void honk() {
            std::cout << "Tuut, tuut! \n";
        }
};

// Derived class
class FormulaOne: public Vehicle {
    public:
        std::string model = "SF90";
};

int main() {
    FormulaOne myCar;
    myCar.honk();

    std::cout << myCar.brand + " " + myCar.model;
}