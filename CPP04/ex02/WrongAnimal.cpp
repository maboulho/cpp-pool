/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 03:23:14 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/23 03:25:10 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << " WrongAnimal Default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << " WrongAnimal constructor called" << std::endl;
    this->type = type;
}
WrongAnimal::WrongAnimal(const WrongAnimal &_obj)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = _obj;
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal const& _obj)
{
    std::cout << "WrongAnimal Copy assignment operator called " << std::endl;
    this->type = _obj.getType();
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}
std::string const &WrongAnimal::getType()const
{
    return this->type;
}
void    WrongAnimal::makeSound()const
{
    std::cout << "this WrongAnimal has no sound" << std::endl;
}