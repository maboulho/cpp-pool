/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:08:57 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/22 21:54:34 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    // std::cout << " Cure Default constructor called" << std::endl;
}

Cure::Cure(const Cure& _obj): AMateria(_obj)
{
    // std::cout << " Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& _obj)
{
    (void)_obj;
    // std::cout << " Cure copy assignment constructor called" << std::endl;
    return (*this);
}

Cure::~Cure()
{
    // std::cout << " Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
    return (new Cure());
}

void    Cure::use(ICharacter& target)
{
    std::cout << "Cure: * heals " << target.getName() << "'s wounds *" << std::endl;
}