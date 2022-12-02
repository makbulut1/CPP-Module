//
// Created by Mehmet eren Akbulut on 12/2/22.
//

#ifndef CPPP_FRAGTRAP_HPP
#define CPPP_FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);

    FragTrap& operator=(const FragTrap& rhs);

    ~FragTrap();

    void attack(std::string const & target);
    void highFivesGuys();
};


#endif //CPPP_FRAGTRAP_HPP
