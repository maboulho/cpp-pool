/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:09:14 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/22 21:53:36 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    // std::cout << " Ice Default constructor called" << std::endl;
}

Ice::Ice(const Ice& _obj): AMateria(_obj)
{
    // std::cout << " Ice copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& _obj)
{
    (void)_obj;
    // std::cout << " Ice copy assignment constructor called" << std::endl;
    return (*this);
}

Ice::~Ice()
{
    // std::cout << " Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
    return (new Ice());
}

void    Ice::use(ICharacter& target)
{
    std::cout << "Ice: * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}