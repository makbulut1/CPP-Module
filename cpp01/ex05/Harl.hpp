//
// Created by Mehmet eren Akbulut on 23.11.2022.
//

#ifndef CPP_MODULE_HARL_H
#define CPP_MODULE_HARL_H
#include "string"

class Harl {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
public:

    void complain( std::string level );
};


#endif //CPP_MODULE_HARL_H
