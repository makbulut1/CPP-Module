#include "Brain.hpp"

Brain::Brain(void){
    const std::string _examples[] = {
        "I want to sleep",
        "I want to food",
        "I want pets",
        "I want to go for a walk",
        "I want water",
        "I want a treat",
    };
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = _examples[rand() % (sizeof(_examples) / sizeof(std::string))];
    std::cout << "Brain(void constructor called" << std::endl;
}
Brain::~Brain(void){
	std::cout << "Brain destructor called" << std::endl;

}

Brain::Brain(const Brain& other){
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = other._ideas[i];
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other){
    if (this != &other){
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = other._ideas[i];
    }
    return *this;
}

const   std::string&    Brain::getIdea(int index) const{
    return this->_ideas[index];
}