#include "mutantstack.hpp"
#include <iostream>
int main() {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    MutantStack<int> s2(mstack);
    std::cout << "Mutantstack constructor" << std::endl;
    for (MutantStack<int>::iterator it2 = s2.begin(); it2 != s2.end(); ++it2)
    {
        std::cout << *it2 << " ";
    }
    std::cout << std::endl;
    for (MutantStack<int>::reverse_iterator it2 = s2.rbegin(); it2 != s2.rend(); ++it2)
    {
        std::cout << *it2 << " ";
    }
    std::cout << std::endl;
    return 0;
}

