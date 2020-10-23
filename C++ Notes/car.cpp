#include <iostream>

class Car {
    public:
        int speed(int maxSpeed);
};

int Car::speed(int maxSpeed){
    return maxSpeed;
}

int main(){
    Car myObj;
    std::cout << myObj.speed(250);
}