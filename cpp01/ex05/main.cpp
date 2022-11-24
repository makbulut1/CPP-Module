#include "Harl.hpp"
#include <iostream>
#include <string>

int main(void) {
    Harl    comment;

    std::cout << "Debug : ";
    comment.complain("DEBUG");
    std::cout << "Warning : ";
    comment.complain("WARNING");
    std::cout << "Info : ";
    comment.complain("INFO");
    std::cout << "Error: ";
    comment.complain("ERROR");
    return 0;
}
