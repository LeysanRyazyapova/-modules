#include "Bureaucrat.hpp"
Bureaucrat::GradeTooLowException::GradeTooLowException() {}
Bureaucrat::GradeTooHighException::GradeTooHighException(){}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too High";
}
const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too Low";
}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}
Bureaucrat::Bureaucrat() : _name("unknown"), _grade(150){}
Bureaucrat::~Bureaucrat(){}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade < 1) {
        std::cout << "Exception" << std::endl;
        std::cout << this->getName() << std::endl;
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150) {
        std::cout << "Exception" << std::endl;
        std::cout << this->getName() << std::endl;
        throw Bureaucrat::GradeTooLowException();
    }
    else
        this->_grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src._grade) {}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) {
    new (this) Bureaucrat(src);
    return (*this);
}
int Bureaucrat::getGrade() const{
    return this->_grade;
}
std::string Bureaucrat::getName() const{
    return this->_name;
}
void Bureaucrat::decrementGrade() {
    this->_grade += 1;
    if(this->_grade > 150) {
        std::cout << "Exception" << std::endl;
        std::cout << this->getName() << std::endl;
        throw Bureaucrat::GradeTooLowException();
    }
}
void Bureaucrat::incrementGrade() {
    this->_grade -= 1;
    if (this->_grade < 1) {
        std::cout << "Exception" << std::endl;
        std::cout << this->getName() << std::endl;
        throw Bureaucrat::GradeTooHighException();
    }
}

std::ostream& operator<<(std::ostream &o, const Bureaucrat& rhs) {
    o << "<" << rhs.getName() << ">, bureaucrat grade <" << rhs.getGrade() << ">." << std::endl;
    return o;
}