#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include<iostream>
class WrongAnimal
{
protected:
    std::string type;    
public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(const WrongAnimal &_obj);
    WrongAnimal& operator=(WrongAnimal const& _obj);
    ~WrongAnimal();
    std::string const  &getType()const;
    void    makeSound()const;
};



#endif