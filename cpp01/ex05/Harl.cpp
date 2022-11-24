//
// Created by Mehmet eren Akbulut on 23.11.2022.
//

#include "Harl.hpp"
#include "iostream"

void complain( std::string level ){
    std::string levels[4] = {
            "DEBUG",
            "INFO",
            "WARNING",
            "ERROR",
    };
    void	(Harl::*f[4])(void ) = {
            &Harl::debug,
            &Harl::info,
            &Harl::warning,
            &Harl::error,
    };
    for(int i = 0; i < 4; i++){
        if (level == levels[i])
            (this->*f[i])();
    }
}

void    Harl::debug() {
    std::cout << "Debug" << std::endl;
}void    Harl::info() {
    std::cout << "info" << std::endl;
}void    Harl::warning(){
    std::cout << "Warning" << std::endl;
}void    Harl::error() {
    std::cout << "Error" << std::endl;
}

Harl::Harl(void) {}
Harl::~Harl(void) {}