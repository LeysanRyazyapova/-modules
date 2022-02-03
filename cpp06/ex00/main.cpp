#include "Convert.hpp"
int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Please, enter 2 arguments" << std::endl;
        return 0;
    }
    Convert convert(argv[1]);
    convert.parse();
}