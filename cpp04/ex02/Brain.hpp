#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class   Brain{
private:

    std::string _ideas[100];

public:
    Brain(void);
    ~Brain(void);
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);

    const   std::string&    getIdea(int index) const;
};

#endif