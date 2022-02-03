#include "ShrubberyCreationForm.hpp"
ShrubberyCreationForm::ShrubberyCreationForm() : Form("shrubbery creation", 145, 137), _target("unknown") {}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation", 145, 137), _target(target) {}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute()), _target(src.getTarget()){}
ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src) {
    new (this) ShrubberyCreationForm(src);
    return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
std::string ShrubberyCreationForm::getTarget() const {
    return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (!this->isSigned())
        throw Form::FormIsNotSignedException();
    else if (executor.getGrade() >= this->getGradeToSign())
        throw Form::GradeTooLowException();
    else {
        std::ofstream outfile("<" + this->getTarget() + ">_shrubbery");
        outfile << "___________¶¶¶¶¶¶_¶¶¶¶¶¶¶¶\n"
                   "__________¶_____¶¶________¶\n"
                   "________¶¶¶_______________ ¶¶¶¶¶¶¶\n"
                   "________¶_______________________¶¶¶\n"
                   "_______ ¶¶____¶__________________ ¶\n"
                   "______¶¶¶____¶¶¶¶¶¶¶¶¶____________¶¶¶\n"
                   "______¶¶______¶¶¶¶¶_______ ¶¶_______¶¶_¶¶\n"
                   "_____¶¶¶¶¶¶_______________¶¶__¶_¶¶___¶¶¶¶¶¶\n"
                   "___¶¶¶__¶¶¶¶__¶¶¶_________¶¶¶¶¶¶¶____¶¶___¶¶¶\n"
                   "___¶______¶¶¶_¶_¶__¶__¶_¶¶¶________________¶¶¶\n"
                   "__ ¶________¶_¶_¶¶¶¶¶¶¶¶¶¶_¶¶________________¶¶\n"
                   "___¶¶____¶¶¶¶_¶_¶¶¶_¶¶¶¶_¶_¶¶¶¶¶¶¶¶¶¶________¶¶\n"
                   "__¶¶¶¶___¶¶¶¶¶¶¶¶___¶¶¶_¶__¶¶¶____¶¶¶¶______¶¶¶\n"
                   "_¶¶¶_¶¶¶¶¶_¶¶¶¶¶¶_¶¶_¶¶¶____¶¶¶¶¶¶¶¶________¶¶¶\n"
                   "¶¶_____¶¶¶__¶¶_¶¶¶¶¶__¶¶___¶¶¶¶¶¶_¶_____¶¶¶___¶¶\n"
                   "¶_____¶¶¶___¶_¶_¶¶¶___¶¶_¶¶__¶__¶¶¶¶¶__¶¶¶_____¶¶\n"
                   "¶¶___¶¶¶¶¶¶_¶¶¶___¶____¶¶¶__¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶____¶\n"
                   "_¶¶__¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶__¶¶__¶¶¶¶¶¶¶__¶¶¶¶__¶____¶¶¶\n"
                   "__ ¶¶¶¶_____¶_¶¶¶______¶¶___¶¶_____¶¶¶_________¶\n"
                   "____________¶¶¶__¶¶_____¶___¶¶¶_¶¶¶¶¶¶¶¶¶¶¶___¶¶\n"
                   "___¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶_¶¶_¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n"
                   "__ ¶_____¶¶¶¶¶___¶¶¶_¶¶__¶¶¶¶___¶¶¶________¶¶¶\n"
                   "__ ¶¶____¶¶_______¶¶_¶¶___¶¶¶¶_¶¶¶¶¶_____¶¶¶\n"
                   "__ ¶_____¶___¶_¶¶¶_¶_¶¶___¶¶_¶¶¶__¶¶¶____¶¶\n"
                   "__ ¶¶_______¶¶¶¶__¶¶______ ¶________¶¶¶¶¶¶\n"
                   "___¶__¶¶¶¶¶¶¶_____¶___¶¶¶__¶__________¶¶¶\n"
                   "___¶¶¶¶¶¶¶¶¶_____¶¶__¶¶¶¶¶_¶¶\n"
                   "________________¶¶___¶¶¶¶___¶¶\n"
                   "_______________¶¶____¶¶¶¶___¶¶\n"
                   "____________¶¶¶¶_____¶¶_____¶¶\n"
                   "___________ ¶¶_______¶¶_____¶¶\n"
                   "__________¶¶¶___¶¶___¶¶_____¶¶\n"
                   "________¶¶¶¶____¶¶___¶______¶¶\n"
                   "______ ¶¶¶¶¶____¶______¶¶____¶¶\n"
                   "_____¶¶¶¶¶¶¶¶_¶¶¶_¶____¶¶_¶___¶¶\n"
                   "___¶¶¶¶¶¶¶¶¶¶¶K¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n"
                   "__ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶¶¶¶____¶¶¶¶¶_¶¶¶" << std::endl;
    }
}