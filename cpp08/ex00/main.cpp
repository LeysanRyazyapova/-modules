#include "easyfind.hpp"

int   main(){
    std::vector<int> myVector;

    myVector.push_back(50);
    myVector.push_back(30);
    myVector.push_back(-54);
    try {
        std::vector<int>::iterator ftIterator = easyfind(myVector, 30);
        std::cout << *ftIterator << " is found" << std::endl;
    } catch (std::exception &e) {
        std::cout << "value is not found" << std::endl;
    }
    std::list<int> myList;

    for (int i = 0; i < 10; i++) {
        myList.push_back(i * 2);
    }
    try {
        std::list<int>::iterator listIterator = easyfind(myList, 10);
        std::cout << *listIterator << " is found" << std::endl;
        std::list<int>::iterator listIterator2 = easyfind(myList, 200);
        std::cout << *listIterator2 << " is found" << std::endl;
    } catch (std::exception &e) {
        std::cout << "value is not found" << std::endl;
    }
}
