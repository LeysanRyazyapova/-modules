#pragma once
#include <iostream>
#include <stdlib.h>
class Convert {
private:
    std::string _val;
    int _flag;
public:
    Convert();
    ~Convert();
    Convert(std::string str);
    Convert(Convert const &src);
    Convert& operator=(Convert const &src);
    std::string getVal() const;
    void parse();
    void printNegInf();
    void printPosInf();
    void printNan();
    void printChar();
    void printInt();
    void printFloat();
    void printDouble();
    void printError();
    bool strOnlyDigits();
    bool strIsFloatOrDouble();
};