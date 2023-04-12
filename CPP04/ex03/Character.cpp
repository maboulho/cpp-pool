/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:08:30 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/23 04:32:07 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name): _name(name)
{
    for (size_t i = 0; i < 4; i++)
        inventory[i] = nullptr;
    // std::cout << " Character Default constructor called" << std::endl;
}

Character::Character(const Character& _obj)
{
    // std::cout << " Character copy constructor called" << std::endl;
    *this = _obj;
}

Character& Character::operator=(const Character& _obj)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (inventory[i])
            delete inventory[i];
        if (_obj.inventory[i])
            inventory[i] = _obj.inventory[i]->clone();
        else
            inventory[i] = nullptr;
    }
    // std::cout << " Character copy assignment constructor called" << std::endl;
    return (*this);
}

Character::~Character()
{
    for (size_t i = 0; i < 4; i++)
    {
        if (inventory[i])
            delete inventory[i];
    }
    // std::cout << " Character destructor called" << std::endl;
}

std::string const & Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria* m)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (!inventory[i])
        {
            inventory[i] = m->clone();
            break ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
        inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3)
        if (inventory[idx])
            inventory[idx]->use(target);
} 
