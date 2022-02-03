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
    virtual ~Form();
    Form(std::string name, int authority, int request);
    Form(Form const &src);
    Form & operator=(Form const &src);
    std::string getName() const;
    bool isSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(Bureaucrat const& brc);
    void checkExecute(Bureaucrat const &executor);
    virtual void execute(Bureaucrat const & executor) const = 0;
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
    class FormIsNotSignedException : public std::exception {
    public:
        FormIsNotSignedException();
        virtual const char* what() const throw();
        virtual ~FormIsNotSignedException() throw();
    };
};
std::ostream& operator<<(std::ostream &o, const Form& rhs);
