#include "Karen.hpp"
Karen::Karen() {}
Karen::~Karen() {}
typedef void(Karen::*ptr) ();
void Karen::debug() {
    std::cout << "I love to get extra bacon for my "
                 "7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!";
    std::cout << std::endl;
}
void Karen::info() {
    std::cout << "I cannot believe adding extra bacon cost more money. "
                 "You don’t put enough! If you did I would not have to ask for it!";
                 std::cout << std::endl;
}
void Karen::warning() {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been "
                 "coming here for years and you just started working here last month.";
                 std::cout << std::endl;
}
void Karen::error() {
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
void Karen::complain(std::string level) {
    std::string names[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4 && names[i].compare(level)){
        i++;
    }
    ptr karenptr[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    if (i != 4)
        (this->*karenptr[i])();
}