#include "Karen.hpp"
Karen::Karen() {}
Karen::~Karen() {}
void Karen::debug() {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." <<std::endl;
    std::cout << "I just love it!" << std::endl << std::endl;
}
void Karen::info() {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
    std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}
void Karen::warning() {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. " << std::endl;
    std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}
void Karen::error() {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now."
    << std::endl << std::endl;
}
void Karen::karenFilter(std::string level) {
    std::string names[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4 && names[i].compare(level)){
        i++;
    }
    switch(i) {
        case 0: debug();
        case 1: info();
        case 2: warning();
        case 3: error();
            break;
        default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}


