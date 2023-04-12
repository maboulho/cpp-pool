#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include"ClapTrap.hpp"
#include<iostream>
class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string Name);
        ScavTrap(const ScavTrap &_obj);
        ScavTrap	&operator=(ScavTrap const &_obj);
        ~ScavTrap();
        void guardGate();
};

#endif