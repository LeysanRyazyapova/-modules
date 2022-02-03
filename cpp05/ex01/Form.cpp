#include "Form.hpp"
Form::GradeTooLowException::GradeTooLowException() {}
Form::GradeTooHighException::GradeTooHighException() {}
Form::GradeTooLowException::~GradeTooLowException() throw() {}
Form::GradeTooHighException::~GradeTooHighException() throw() {}
const char *Form::GradeTooLowException::what() const throw() {
    return "Bureaucrat grade is too Low";
}
const char *Form::GradeTooHighException::what() const throw() {
    return "Bureaucrat grade is too High";
}
Form::Form() : _name("unknown"), _signature(false), _gradeToSign(150), _gradeToExecute(150) {}
Form::~Form(){}
Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signature(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){
    if (this->getGradeToSign() < 1 || this->getGradeToExecute() < 1)
        throw Form::GradeTooHighException();
    if (this->getGradeToSign() > 150 || this->getGradeToExecute() > 150)
        throw Form::GradeTooLowException();
}
Form::Form(const Form &src) : _name(src.getName()), _signature(src.isSigned()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()){}
Form & Form::operator=(const Form &src) {
    new (this) Form(src);
    return (*this);
}
std::string Form::getName() const {
    return this->_name;
}
bool Form::isSigned() const{
    return this->_signature;
}
int Form::getGradeToSign() const {
    return this->_gradeToSign;
}
int Form::getGradeToExecute() const {
    return _gradeToExecute;
}
void Form::beSigned(const Bureaucrat &brc) {
    if (brc.getGrade() > this->getGradeToSign()) {
        throw Form::GradeTooLowException();
    }
    else
        this->_signature = true;
}

