#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include"ClapTrap.hpp"
#include<iostream>
class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string Name);
        FragTrap(const FragTrap &_obj);
        FragTrap	&operator=(FragTrap const &_obj);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif