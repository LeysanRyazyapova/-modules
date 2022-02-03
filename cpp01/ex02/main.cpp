#include <iostream>
int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;
    std::cout << "address to string: " << &str << std::endl;
    std::cout << "address stringPTR: " << stringPTR << std::endl;
    std::cout << "address stringREF: " << &stringREF << std::endl;
    std::cout << "value of string:    " << str << std::endl;
    std::cout << "value of stringPTR: " << *stringPTR << std::endl;
    std::cout << "value of stringREF: " << stringREF << std::endl;
}
