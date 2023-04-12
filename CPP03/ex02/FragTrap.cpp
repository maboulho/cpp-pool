/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 08:25:25 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/22 09:39:52 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string Name)
{
    std::cout << "FragTrap Constructor called" << std::endl;
    this->Name = Name;
}

FragTrap::FragTrap(const FragTrap &_obj)
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
    *this = _obj;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}
FragTrap &FragTrap::operator=(FragTrap const& _obj)
{
    std::cout << "FragTrap Copy assignment operator called " << std::endl;
    ClapTrap::operator=(_obj);
    return (*this);
}
void FragTrap::highFivesGuys(void)
{
    if (this->HitPoints <= 0)
		std::cout << "Can't high five because  FragTrap " << this->Name << " is dead" << std::endl;
	else
		std::cout << "FragTrap " << this->Name << " giving free HIGH FIVES for everyone" << std::endl;
}