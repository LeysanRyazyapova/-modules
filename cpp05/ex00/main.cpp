#include "Bureaucrat.hpp"
int main() {
    try {
        std::cout << "*** first try ***" << std::endl;
        Bureaucrat first("Bob", 0);
        std::cout << first;
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cout << "*** first catch ***" << std::endl;
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    try {
        std::cout << "*** second try ***" << std::endl;
        Bureaucrat first("Bob", 160);
        std::cout << first;
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cout << "*** second catch ***" << std::endl;
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    try {
        std::cout << "*** third try ***" << std::endl;
        Bureaucrat second("Bob", 20);
        second.incrementGrade();
        std::cout << second;
        std::cout << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "*** third catch ***" << std::endl;
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    try {
        std::cout << "*** fourth try ***" << std::endl;
        Bureaucrat* first = new Bureaucrat();
        first->decrementGrade();
        std::cout << (*first);
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cout << "*** fourth catch ***" << std::endl;
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    try {
        std::cout << "*** fifth  try ***" << std::endl;
        Bureaucrat* third = new Bureaucrat("Bill", 160);
        std::cout << third;
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cout << "*** fifth  catch ***" << std::endl;
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
}