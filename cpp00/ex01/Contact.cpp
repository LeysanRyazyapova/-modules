#include "Contact.hpp"
Contact::Contact(){}
Contact::~Contact(){}
void Contact::setFirstName() {
    std::getline(std::cin, this->first_name);
}
void Contact::setLastName() {
	std::getline(std::cin, last_name);
}
void Contact::setNickname() {
	std::getline(std::cin, nickname);
}
void Contact::setPhoneNumber() {
	std::getline(std::cin, phone_number);
}
void Contact::setDarkestSecret() {
	std::getline(std::cin, darkest_secret);
}
std::string Contact::getFirstName() {
	return first_name;
}
std::string Contact::getLastName(){
	return last_name;
}
std::string Contact::getNickname(){
	return nickname;
}
std::string Contact::getPhoneNumber(){
	return phone_number;	
}
std::string Contact::getDarkestSecret(){
	return darkest_secret;
}
