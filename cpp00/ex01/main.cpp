#include "Phonebook.hpp"

int main()
{
    Phonebook ph;
	std::string command;
    std::cout<< "Here is a PhoneBook" << std::endl;
	while(1)
	{
		std::cout << "Please, enter one of the commands: ADD, SEARCH, EXIT" << std::endl;
        std::getline(std::cin, command);
        if (std::cin.eof()) {
            std::cout << "EOF occured" << std::endl;
            break;
        }
        if (!command.compare("ADD")) {
            ph.add();
        }
        else if (!command.compare("SEARCH")) {
            ph.printPhone();
        }
        else if (!command.compare("EXIT")) {
            break;
        }
        else {
            std::cout << "Wrong input!" << std::endl;
        }
	}
}