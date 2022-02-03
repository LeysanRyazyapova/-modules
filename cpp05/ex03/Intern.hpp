#pragma once
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
class Intern {
public:
    Intern();
    ~Intern();
    Intern(Intern const & src);
    Intern &operator=(Intern const &src);
    Form * makeForm(std::string name, std::string target);
    Form * makeRobotomy(std::string name, std::string target);
    Form * makeShrubberry(std::string name, std::string target);
    Form * makePresidential(std::string name, std::string target);
    class RequestedFormIsNotKnownException : public std::exception {
    public:
        RequestedFormIsNotKnownException();
        virtual const char* what() const throw();
        virtual ~RequestedFormIsNotKnownException() throw();
    };
};