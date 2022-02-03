#include "Brain.hpp"
Brain::Brain() {
    std::cout << "[Brain] constructor is called" << std::endl;
}
Brain::~Brain() {
    std::cout << "[Brain] destructor is called" << std::endl;
}
Brain::Brain(Brain const &src) {
    std::cout << "[Brain] copy constructor is called" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = src.ideas[i];
    }
}

Brain &Brain::operator=(const Brain &src) {
    std::cout << "[Brain] assignement operator is called" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = src.ideas[i];
    }
    return (*this);
}
