//
// Created by Mehmet eren Akbulut on 12/2/22.
//

#ifndef CPPP_SCAVTRAP_HPP
#define CPPP_SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);

    ScavTrap& operator=(const ScavTrap& rhs);

    ~ScavTrap();

    void attack(std::string const & target);
    void guardGate();
};


#endif //CPPP_SCAVTRAP_HPP
