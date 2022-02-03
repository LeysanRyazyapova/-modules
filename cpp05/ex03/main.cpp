#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
int main() {
   Intern someRandomIntern;
   Form* rrf;
   Form* second;
   Form* third;
   Form* forth;

   rrf = someRandomIntern.makeForm("robotomy request", "Bender");
   second = someRandomIntern.makeForm("presidential pardon", "Bob");
   third = someRandomIntern.makeForm("shrubberry creation", "Bill");
   forth = someRandomIntern.makeForm("some random form", "random");
}