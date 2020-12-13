#include <iostream>

class Avatar{
    protected:
        int attackPower;

        public: 
            void setAttackPower(int atk) {
                attackPower = atk;
        }

};

class Teemo: public Avatar {
    public:
        void attack(){
            std::cout << "TOXIC SHOT!"<< attackPower << std::endl;
        }
    
};

class Annie: public Avatar{
    public: 
        void attack() {
            std::cout << "DISINTEGRATE!"<< attackPower << std::endl;
        }
};



int main() {

    Teemo teemo;
    Annie annie;

    Avatar *ava_t = &teemo;
    Avatar *ava_a = &annie;

    ava_t -> setAttackPower(20);
    ava_a -> setAttackPower(80);

    teemo.attack();
    annie.attack();

}

