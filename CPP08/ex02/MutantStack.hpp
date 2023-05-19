#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack() : std::stack<T>() {};
        MutantStack(MutantStack const & toCopy) : std::stack<T>(toCopy) {};
        MutantStack & operator=(MutantStack const & toCopy) {
            if (this != &toCopy)
                std::stack<T>::operator=(toCopy);
            return *this;
        }
        ~MutantStack() {};

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() {
            return std::stack<T>::c.begin();
        }
        iterator end() {
            return std::stack<T>::c.end();
        }
};

#endif


