#pragma once
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form {
private:
    std::string const _name;
    bool _signature;
    int const _gradeToSign;
    int const _gradeToExecute;
public:
    Form();
    ~Form();
    Form(std::string name, int authority, int request);
    Form(Form const &src);
    Form & operator=(Form const &src);
    std::string getName() const;
    bool isSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(Bureaucrat const& brc);
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
std::ostream& operator<<(std::ostream &o, const Form& rhs);
