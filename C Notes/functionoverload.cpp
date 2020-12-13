#include <iostream>

class printData{
    public:
        void print(int i){
            std::cout << "Printing int: " << i << std::end1;
        }
        void print(double f){
            std::cout << "Printing float: " << f << std::end1;
        }
        void print(char* c){
            std::cout << "Printing character: " << c << std::end1;
        }
};

int main(){
    printData pd;

    pd.print(3);
    
}