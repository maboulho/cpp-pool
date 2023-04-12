#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include<iostream>
#include"WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
private:
    std::string name;
public:
    WrongCat();
    WrongCat(std::string name);
    WrongCat(const WrongCat &_obj);
    WrongCat& operator=(WrongCat const& _obj);
    ~WrongCat();
    void    makeSound()const;
};
#endif