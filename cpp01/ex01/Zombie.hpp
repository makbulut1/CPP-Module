//
// Created by Mehmet eren Akbulut on 11/18/22.
//

#ifndef CPP_MODULE_ZOMBIE_HPP
#define CPP_MODULE_ZOMBIE_HPP
#include <string>

class Zombie
{
public:

    // Constructor/Destructor
    Zombie(std::string name);
    ~Zombie(void);
    Zombie(void);

    // Setters
    void setName(std::string name);

    // Getters
    void announce( void ) const;

private:

    std::string _name;
};

Zombie* zombieHorde(int N, std::string _name);
void randomChump( std::string _name);


#endif //CPP_MODULE_ZOMBIE_HPP
