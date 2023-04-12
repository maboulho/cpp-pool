#ifndef CAT_HPP
#define CAT_HPP
#include<iostream>
#include"Animal.hpp"
class Cat : public Animal
{
private:
    std::string name;
public:
    Cat();
    Cat(std::string name);
    Cat(const Cat &_obj);
    Cat& operator=(Cat const& _obj);
    ~Cat();
    void    makeSound()const;
};




#endif