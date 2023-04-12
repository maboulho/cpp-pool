/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:43:38 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/22 21:53:41 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type)
{
    // std::cout << " AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& _obj)
{
    // std::cout << " AMateria copy constructor called" << std::endl;
    *this = _obj;
}

AMateria& AMateria::operator=(const AMateria& _obj)
{
    (void)_obj;
    // std::cout << " AMateria copy assignment constructor called" << std::endl;
    return (*this);
}

AMateria::~AMateria()
{
    // std::cout << " AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return this->_type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* uses a materia at " << target.getName() << std::endl;
}
