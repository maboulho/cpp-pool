/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:09:39 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/22 21:54:07 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
        inventory[i] = nullptr;
    // std::cout << " MateriaSource Default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& _obj)
{
    // std::cout << " MateriaSource copy constructor called" << std::endl;
    *this = _obj;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& _obj)
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
    // std::cout << " MateriaSource copy assignment constructor called" << std::endl;
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
    {
        if (inventory[i])
            delete inventory[i];
    }
    // std::cout << " MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
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

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (inventory[i] && inventory[i]->getType() == type)
            return (inventory[i]->clone());
    }
    return (nullptr);
}