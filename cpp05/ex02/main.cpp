#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main() {
    try {
        std::cout << "*** first try ***" << std::endl;
        Bureaucrat *brc1 = new Bureaucrat("Bob", 144);
        Bureaucrat *brc2 = new Bureaucrat("Bob", 146);
        ShrubberyCreationForm* shrForm = new ShrubberyCreationForm("shrtarget");
        std::cout << "target: " << shrForm->getTarget() << " sign: " << shrForm->getGradeToSign();
        std::cout << " execute: " << shrForm->getGradeToExecute() << std::endl;
        brc1->signForm(*shrForm);
        shrForm->execute(*brc2);
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cout << "*** first catch ***" << std::endl;
        std::cout << e.what() << std::endl;
        std::cout << "\n";
    }
    try {
        std::cout << "*** second try ***" << std::endl;
        Bureaucrat *brc1 = new Bureaucrat("Bob", 144);
        ShrubberyCreationForm* shrForm = new ShrubberyCreationForm("shrtarget");
        shrForm->execute(*brc1);
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cout << "*** second catch ***" << std::endl;
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    try {
        std::cout << "*** third try ***" << std::endl;
        Bureaucrat *brc1 = new Bureaucrat("Bob", 144);
        ShrubberyCreationForm* shrForm = new ShrubberyCreationForm("shrtarget");
        brc1->signForm(*shrForm);
        shrForm->execute(*brc1);
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cout << "*** third catch ***" << std::endl;
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    try {
        std::cout << "*** fourth try ***" << std::endl;
        Bureaucrat *brc3 = new Bureaucrat("Bob", 146);
        ShrubberyCreationForm* shrForm2 = new ShrubberyCreationForm("shrtarget");
        brc3->signForm(*shrForm2);
        brc3->executeForm(*shrForm2);
        std::cout << std::endl;
    } catch (std::exception& e){
        std::cout << "*** fourth catch ***" << std::endl;
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    try {
        std::cout << "*** fifth  try ***" << std::endl;
        Bureaucrat *brc3 = new Bureaucrat("Bob", 146);
        RobotomyRequestForm* shrForm2 = new RobotomyRequestForm("shrtarget");
        brc3->signForm(*shrForm2);
        brc3->executeForm(*shrForm2);
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cout << "*** fifth  catch ***" << std::endl;
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    try {
        std::cout << "*** sixth  try ***" << std::endl;
        Bureaucrat *brc4 = new Bureaucrat("Bob", 144);
        Bureaucrat *brc3 = new Bureaucrat("Bob", 146);
        RobotomyRequestForm* shrForm2 = new RobotomyRequestForm("shrtarget");
        brc4->signForm(*shrForm2);
        brc3->executeForm(*shrForm2);
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cout << "*** sixth  catch ***" << std::endl;
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
}