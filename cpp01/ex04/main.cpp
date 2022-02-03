#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
std::string readFile(const std::string& fileName) {
    std::ifstream f(fileName);
    if (!f.is_open()) {
        std::cout << "Can't open file" << std::endl;
        exit (1);
    }
    std::stringstream ss;
    ss << f.rdbuf();
    f.close();
    return ss.str();
}
int main(int argc, char **argv)
{
    if (argc != 4)
        std::cout << "Wrong arguments!" << std::endl;
    else {
        std::string str = readFile(argv[1]);
        std::string filename = argv[1];
        filename.append(".replace");
        std::ofstream fout(filename);
        if (!fout.is_open()) {
            std::cout << "Can't open file" << std::endl;
            return (1);
        }
        size_t i = 0;
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        std::size_t index;
        std::string str2;
        while((index= str.find(s1, i)) != std::string::npos)
        {
            str2.append(str.substr(i, index - i));
            str2.append(s2);
            i = index + s1.length();
        }
        if (str.length() > i)
            str2.append(str.substr(i, str.length() - i));
        fout << str2;
        //fin.close();
        fout.close();
    }
}

