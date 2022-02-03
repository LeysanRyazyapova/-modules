#pragma once
#include "Form.hpp"
#include <fstream>
class PresidentialPardonForm : public Form {
private:
    std::string _target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const & src);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &src);
    virtual ~PresidentialPardonForm();
    std::string getTarget() const;
    virtual void execute(Bureaucrat const & executor) const;
};
