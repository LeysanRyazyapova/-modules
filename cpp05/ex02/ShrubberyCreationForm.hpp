#pragma once
#include "Form.hpp"
#include <fstream>
class ShrubberyCreationForm : public Form {
private:
    std::string _target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const & src);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);
    virtual ~ShrubberyCreationForm();
    std::string getTarget() const;
    virtual void execute(Bureaucrat const & executor) const;
};
