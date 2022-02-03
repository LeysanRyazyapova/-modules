#include "Intern.hpp"
Intern::Intern(){}
Intern::~Intern(){}
Intern::RequestedFormIsNotKnownException::RequestedFormIsNotKnownException() {}
Intern::RequestedFormIsNotKnownException::~RequestedFormIsNotKnownException() throw() {}
Intern::Intern(Intern const &src) {
    *this = src;
}
Intern& Intern::operator=(Intern const &src) {
    (void)src;
    return (*this);
}
Form* Intern::makeRobotomy(std::string name, std::string target) {
    if (name == "robotomy request") {
        std::cout << "Intern creates <form>" << std::endl;
        return new RobotomyRequestForm(target);
    }
    else
        throw Intern::RequestedFormIsNotKnownException();
}
Form * Intern::makePresidential(std::string name, std::string target) {
    if(name == "presidential pardon") {
        std::cout << "Intern creates <form>" << std::endl;
        return new PresidentialPardonForm(target);
    }
    else
        throw Intern::RequestedFormIsNotKnownException();
}
Form * Intern::makeShrubberry(std::string name, std::string target) {
    if(name == "shrubberry creation") {
        std::cout << "Intern creates <form>" << std::endl;
        return new ShrubberyCreationForm(target);
    }
    else
        throw Intern::RequestedFormIsNotKnownException();
}
Form* Intern::makeForm(std::string name, std::string target) {
    try {
        return makeRobotomy(name, target);
    } catch(std::exception& e) {
        try {
            return makeShrubberry(name, target);
        } catch (std::exception& e) {
            try {
                return makePresidential(name, target);
            } catch(std::exception& e) {
                std::cout << e.what() << std::endl;
            }
        }
    }
    return 0;
}
const char *Intern::RequestedFormIsNotKnownException::what() const throw() {
    return "Requested form is not known";
}