#include "Convert.hpp"
Convert::Convert() {}
Convert::~Convert() {}
Convert::Convert(std::string str) : _val(str), _flag(0) {}
Convert::Convert(Convert const &src) : _val(src.getVal()) {}
Convert& Convert::operator=(Convert const &src) {
    this->_val = src.getVal();
    return (*this);
}
void Convert::parse() {
    if (this->getVal() == "-inf" || this->getVal() == "-inff")
        this->printNegInf();
    else if(this->getVal() == "+inf" || this->getVal() == "+inff")
        this->printPosInf();
    else if(this->getVal() == "nan" || this->getVal() == "nanf")
        this->printNan();
    else {
        int len = this->getVal().length();
        if (len == 1 && !isdigit(this->getVal()[0]))
            this->printChar();
        else if(this->strOnlyDigits())
            this->printInt();
        else {
            if(this->strIsFloatOrDouble()) {
                if(this->_flag == 1 || this->_flag == 2)
                    this->printFloat();
            }
            else
                this->printError();
        }
    }
}
void Convert::printNegInf() {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: -inff" << std::endl;
    std::cout << "double: -inf" << std::endl;
}
void Convert::printPosInf() {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: +inff" << std::endl;
    std::cout << "double: +inf" << std::endl;
}
std::string Convert::getVal() const {
    return _val;
}
void Convert::printNan() {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}
void Convert::printChar() {
    std::cout << "char: " << this->getVal() << std::endl;
    int ival = static_cast<int>(this->getVal()[0]);
    std::cout << "int: " << ival << std::endl;
    float fval = static_cast<float>(ival);
    std::cout << "float: " << fval << ".0f" << std::endl;
    double dval = static_cast<double>(ival);
    std::cout << "double: " << dval << ".0" << std::endl;
}

void Convert::printInt() {
    const char* val = this->getVal().c_str();
    int num = atoi(val);
    if (num < 33 || num > 126)
        std::cout << "char: " << "Non displayable" << std::endl;
    else {
        char c = static_cast<char>(num);
        std::cout << "char: " << c << std::endl;
    }
    std::cout << "int: " << num << std::endl;
    float fval = static_cast<float>(num);
    std::cout << "float: "<< fval << ".0f" << std::endl;
    double dval = static_cast<double>(num);
    std::cout << "double: " << dval << ".0" << std::endl;
}
void Convert::printFloat() {
    const char* val = this->getVal().c_str();
    float num = atof(val);
    int ival = static_cast<int>(num);
    if (ival < 33 || ival > 126)
        std::cout << "char: " << "Non displayable" << std::endl;
    else {
        char c = static_cast<char>(ival);
        std::cout << "char: " << c << std::endl;
    }
    std::cout << "int: " << ival << std::endl;
    std::cout << "float: "<< num << "f" << std::endl;
    double dval = static_cast<double>(num);
    std::cout << "double: " << dval << std::endl;
}
void Convert::printDouble() {
    const char* val = this->getVal().c_str();
    double dval = strtod(val, NULL);
    int ival = static_cast<int>(dval);
    if (ival < 33 || ival > 126)
        std::cout << "char: " << "Non displayable" << std::endl;
    else {
        char c = static_cast<char>(ival);
        std::cout << "char: " << c << std::endl;
    }
    std::cout << "int: " << ival << std::endl;
    float fval = static_cast<float>(dval);
    std::cout << "float: "<< fval << "f" << std::endl;
    std::cout << "double: " << dval << std::endl;
}
void Convert::printError() {
    std::cout << "Wrong argument! Please, enter char or number" << std::endl;
}
bool Convert::strOnlyDigits() {
    int len = this->getVal().length();
    for (int i = 0; i < len; i++) {
        if(!isdigit(this->getVal()[i]))
            return false;
    }
    return true;
}
bool Convert::strIsFloatOrDouble() {
    int len = this->getVal().length();
    for (int i = 0; i < len - 1; i++) {
        if(!isdigit(this->getVal()[i]) && this->getVal()[i] != '.')
            return false;
    }
    if (this->getVal()[len - 1] == 'f')
        this->_flag = 1;
    else if (isdigit(this->getVal()[len - 1]))
        this->_flag = 2;
    else
        return false;
    return true;
}