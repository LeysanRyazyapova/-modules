#include "Bureaucrat.hpp"
int main() {
    try {
        std::cout << "*** first try ***" << std::endl;
        Bureaucrat *first = new Bureaucrat("Bill", 20);
        Form *form1 = new Form("form1", 25, 45);
        first->signForm(*form1);
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cout << "*** first catch ***" << std::endl;
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    try {
        std::cout << "*** second try ***" << std::endl;
        Bureaucrat *second = new Bureaucrat("Bob", 20);
        Form *form2 = new Form("form2", 19, 45);
        second->signForm(*form2);
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cout << "*** second catch ***" << std::endl;
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    try {
        std::cout << "*** third try ***" << std::endl;
        Bureaucrat *second = new Bureaucrat("Bob", 20);
        Form *form3 = new Form("form3", 0, 45);
        second->signForm(*form3);
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cout << "*** third catch ***" << std::endl;
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    try {
        std::cout << "*** fourth try ***" << std::endl;
        Form *form4 = new Form("form4", 1, 170);
        Bureaucrat *second = new Bureaucrat("Bob", 20);
        second->signForm(*form4);
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cout << "*** fourth catch ***" << std::endl;
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
}