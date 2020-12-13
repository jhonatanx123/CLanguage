#include <iostream>
#include <string>

int main() 
{
    std::string food = "Pizza";
    std::string *ptr = &food;
    std::string &meal = food;
    std::cout << food << "\n";
    std::cout << &food << "\n";
    std::cout << ptr << "\n";
    std::cout << meal << "\n";

    return 0;
}