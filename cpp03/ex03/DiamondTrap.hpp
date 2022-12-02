//
// Created by Mehmet eren Akbulut on 12/3/22.
//

#ifndef CPPP_DIAMONDTRAP_HPP
#define CPPP_DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap{
private:
    std::string _name;
public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap& other);
    ~DiamondTrap();

    DiamondTrap& operator=(const DiamondTrap& other);

    void    attack(std::string const&target);
    void    whoAmI();
};

#endif //CPPP_DIAMONDTRAP_HPP