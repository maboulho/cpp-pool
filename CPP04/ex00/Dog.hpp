#ifndef DOG_HPP
#define DOG_HPP
#include<iostream>
#include"Animal.hpp"
class Dog : public Animal
{
private:
    std::string name;
public:
    Dog();
    Dog(std::string Name);
     Dog(const Dog &_obj);
    Dog& operator=(Dog const& _obj);
    ~Dog();
    void    makeSound()const;
};

#endif