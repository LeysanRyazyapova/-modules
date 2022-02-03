#pragma once
#include "Form.hpp"
#include <fstream>
class RobotomyRequestForm : public Form {
private:
    std::string _target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const & src);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &src);
    virtual ~RobotomyRequestForm();
    std::string getTarget() const;
    virtual void execute(Bureaucrat const & executor) const;
};
