//
// Created by Mehmet eren Akbulut on 12/14/22.
//
#include "Convert.hpp"

int main(int ac, char **av){
    if (ac == 2){
        try {
            Convert _convert(av[1]);

            std::cout << _convert;
        }
        catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    else
        std::cout << "./convert <ascii>" << std::endl;
    return 0;
}
