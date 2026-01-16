#include <iostream>
#include <string>

int main(void){

    // Create a string

    std::string str = "Hello";

    std::cout << str << std::endl;

    std::cout << "The size of the string is" << str.size() << std:endl;

    // Concatename strings
    std += "World";

    std::cout << str << std::endl;

    std::cout << "The size of the string is" << str.size() << std:endl;

    return 0;
}