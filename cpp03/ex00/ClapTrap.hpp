//
// Created by Mehmet eren Akbulut on 11/30/22.
//

#ifndef CPP_MODULE_CLAP_HPP
#define CPP_MODULE_CLAP_HPP
#include "string"

class ClapTrap {
private:
    int _energyPoints;
    int _hitPoints;
    int _attackDamage;
    std::string _name;
public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &ClapTrap);
    ~ClapTrap(void);

    ClapTrap& operator=(const ClapTrap &other);

    void            attack(const std::string &target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
};


#endif //CPP_MODULE_CLAP_HPP
