#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

class Phonebook
{
	private:
		Contact contact[8];
        int counter;
	public:
		Phonebook();
		~Phonebook();
        void add();
        void printPhone();
        void printAllContact();
        std::string changeStr(std::string str);
        void printOneContact(int index);
};
#endif
