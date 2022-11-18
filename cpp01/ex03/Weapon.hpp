//
// Created by Mehmet eren Akbulut on 11/18/22.
//

#ifndef CPP_MODULE_WEAPON_HPP
#define CPP_MODULE_WEAPON_HPP
#include "string"

class Weapon {
private:
    std::string type;
public:
    Weapon(std::string type);
    ~Weapon();

    const std::string& getType(void);
    void        setType(std::string type);
};


#endif //CPP_MODULE_WEAPON_HPP
