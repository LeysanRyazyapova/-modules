#include "RobotomyRequestForm.hpp"
RobotomyRequestForm::RobotomyRequestForm() : Form("robotomy request", 72, 45), _target("unknown") {}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", 72, 45), _target(target) {}
RobotomyRequestForm::~RobotomyRequestForm(){}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute()), _target(src.getTarget()){}
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &src) {
    new (this) RobotomyRequestForm(src);
    return (*this);
}
std::string RobotomyRequestForm::getTarget() const {
    return this->_target;
}
void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    if (!this->isSigned())
        throw Form::FormIsNotSignedException();
    else if (executor.getGrade() >= this->getGradeToSign())
        throw Form::GradeTooLowException();
    else {
        std::cout << "BRRR, <" << this->getTarget() << "> has been robotomized successfully 50% of the time." << std::endl;
    }
}