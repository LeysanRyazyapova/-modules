#include "PresidentialPardonForm.hpp"
PresidentialPardonForm::PresidentialPardonForm() : Form("presidential pardon", 25, 5), _target("unknown") {}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon", 25, 5), _target(target) {}
PresidentialPardonForm::~PresidentialPardonForm(){}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute()), _target(src.getTarget()){}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &src) {
    new (this) PresidentialPardonForm(src);
    return (*this);
}
std::string PresidentialPardonForm::getTarget() const {
    return this->_target;
}
void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if (!this->isSigned())
        throw Form::FormIsNotSignedException();
    else if (executor.getGrade() >= this->getGradeToSign())
        throw Form::GradeTooLowException();
    else {
        std::cout << this->getTarget() << "> has been pardoned by Zafod Beeblebrox."  << std::endl;
    }
}