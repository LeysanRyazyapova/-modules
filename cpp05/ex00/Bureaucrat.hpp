#pragma once
#include <iostream>
class Bureaucrat{
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const & src);
    Bureaucrat(std::string name, int grade);
    Bureaucrat &operator=(Bureaucrat const &src);
    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    class GradeTooHighException : public std::exception {
    public:
        GradeTooHighException();
        virtual const char* what() const throw();
        virtual ~GradeTooHighException() throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        GradeTooLowException();
        virtual const char* what() const throw();
        virtual ~GradeTooLowException() throw();
    };
};
std::ostream& operator<<(std::ostream &o, const Bureaucrat& rhs);