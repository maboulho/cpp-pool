#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include<iostream>

class ClapTrap
{
private:
    std::string     Name;
    int             HitPoints;
    int             EnergyPoints;
    int             AttackDamage;
public:
    ClapTrap();
    ClapTrap(std::string Name);
    ClapTrap(const ClapTrap &_obj);
    ~ClapTrap();

    ClapTrap	&operator=(ClapTrap const &_obj);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void                set_HitPoints(int const &value);
    void                set_EnergyPoints(int const &value);
    void                set_AttackDamage(int const &value);
    int const           &get_HitPoints()const;
    int const           &get_EnergyPoints()const;
    int const           &get_AttackDamage()const; 
    std::string const   &get_Name()const;
};




#endif