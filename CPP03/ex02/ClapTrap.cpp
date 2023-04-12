/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 06:42:29 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/22 09:50:40 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap() :  Name("default"),HitPoints(100), EnergyPoints(100), AttackDamage(30)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) :  HitPoints(100), EnergyPoints(100), AttackDamage(30)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
    this->Name = Name;
}

ClapTrap::ClapTrap(const ClapTrap &_obj)
{
    std::cout << "ClapTrap copy Constructor called" << std::endl;
    *this = _obj;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &_obj)
{
    std::cout << "ClapTrap Copy assignment operator called " << std::endl;
    this->Name = _obj.get_Name();
	this->HitPoints = _obj.get_HitPoints();
	this->EnergyPoints = _obj.get_EnergyPoints();
	this->AttackDamage = _obj.get_AttackDamage();
	return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
    if(this->HitPoints > 0 && EnergyPoints)
    {
        std::cout << "FragTrap " << this->Name<< " attacks " << target << " causing " << this->get_AttackDamage() << " points of damage" << std::endl;
        this->EnergyPoints--;
    }
    if(this->HitPoints <= 0)
        std::cout << "FragTrap " << this->Name << " is dead" << std::endl;  
    else if (!this->EnergyPoints)
        std::cout << "FragTrap " << this->Name << " is out of energy points!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if(this->HitPoints > 0)
    {
        std::cout << "FragTrap " << this->Name << " took " << amount << " points of damage!" << std::endl;
        this->HitPoints -= amount;
    }
    else if (this->HitPoints <= 0)
        std::cout << "FragTrap " << this->Name << " is already dead" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if(this->HitPoints > 0 && EnergyPoints)
    {
        std::cout << "FragTrap " << this->Name << " repaired " << amount << " of missing health" << std::endl;
        this->EnergyPoints--;
        this->HitPoints += amount;
    }
    if(this->HitPoints <= 0)
        std::cout << "FragTrap " << this->Name << " is dead" << std::endl;  
    else if (!this->EnergyPoints)
        std::cout << "FragTrap " << this->Name << " is out of energy points!" << std::endl;
}
// Setters
void    ClapTrap::set_HitPoints(int const& value)
{
    this->HitPoints = value;
}

void    ClapTrap::set_EnergyPoints(int const& value)
{
    this->EnergyPoints = value;
}
void    ClapTrap::set_AttackDamage(int const& value)
{
    this->AttackDamage = value;
}
// Getters
std::string const  &ClapTrap::get_Name()const
{
    return this->Name;
}
int const     &ClapTrap::get_HitPoints()const
{
    return this->HitPoints;
}

int const     &ClapTrap::get_EnergyPoints()const
{
    return this->EnergyPoints;
}
int const     &ClapTrap::get_AttackDamage()const
{
    return this->AttackDamage;
}