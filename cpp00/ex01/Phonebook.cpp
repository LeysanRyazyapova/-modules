#include "Phonebook.hpp"
Phonebook::Phonebook(){
    counter = 0;
}
Phonebook::~Phonebook(){}
void Phonebook::add()
{
    std::cout << "First name: ";
    contact[counter % 8].setFirstName();
    std::cout << "Last Name: ";
    contact[counter % 8].setLastName();
    std::cout << "Nickname: ";
    contact[counter % 8].setNickname();
    std::cout << "Phone Number: ";
    contact[counter % 8].setPhoneNumber();
    std::cout << "Darkest Secret: ";
    contact[counter % 8].setDarkestSecret();
    counter++;
}

void Phonebook::printPhone()
{
    int index;

    index = 0;
    std::string buf;
    if (counter > 0) {
        printAllContact();
        while (1) {
            std::cout << "Please enter index of contact, that you want to see" << std::endl;
            std::getline(std::cin, buf);
            if (std::cin.eof())
                break;
            index = std::atoi(buf.c_str());
            if (index >= 1 && index < 9 && index <= counter) {
                printOneContact(index);
                break;
            } else
                std::cout << "index out of range" << std::endl;
        }
    }
    else
        std::cout << "Please, add contact" << std::endl;
}
std::string Phonebook::changeStr(std::string str)
{
    if (str.length() < 10){
        str.insert(0, 10 - str.length(), ' ');
        return str;
    }
    else if (str.length() > 10) {
        str.insert(9, ".");
        str.resize(10);
        return str;
    }
    return str;
}
void Phonebook::printAllContact()
{
    int index;

    if (counter > 8)
        index = 8;
    else
        index = counter;
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|first name| last name|  nickname|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    for(int i = 0; i < index; i++)
    {
        std::cout << "|" << std::setfill(' ') << std::setw(10);
        std::cout << i + 1 << "|";
        std::cout << changeStr(contact[i].getFirstName()) << "|";
        std::cout << changeStr(contact[i].getLastName()) << "|";
        std::cout << changeStr(contact[i].getNickname()) << "|" << std::endl;
    }
    std::cout << "|-------------------------------------------|" << std::endl;
}
void Phonebook::printOneContact(int index) {
    std::cout << "Index: " << index << std::endl;
    std::cout << "First name: " << contact[index - 1].getFirstName() << std::endl;
    std::cout << "Last name: " << contact[index - 1].getLastName() << std::endl;
    std::cout << "Nickname: " << contact[index - 1].getNickname() << std::endl;
    std::cout << "Phone number: " << contact[index - 1].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << contact[index - 1].getDarkestSecret() << std::endl;
}