/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 08:25:25 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/22 09:14:31 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name)
{
    std::cout << "ScavTrap Constructor called" << std::endl;
    this->Name = Name;
}

ScavTrap::ScavTrap(const ScavTrap &_obj)
{
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
    *this = _obj;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}
ScavTrap &ScavTrap::operator=(ScavTrap const& _obj)
{
    std::cout << "ScavTrap Copy assignment operator called " << std::endl;
    ClapTrap::operator=(_obj);
    return (*this);
}
void    ScavTrap::guardGate()
{
    if (this->HitPoints <= 0)
		std::cout << "Can't switch to gate-keeper mode because: ScavTrap " << this->Name << " is dead." << std::endl;
	else
		std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode" << std::endl;
}