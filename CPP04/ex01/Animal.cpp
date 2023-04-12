/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:56:52 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/22 18:25:58 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal()
{
    std::cout << " Animal Default constructor called" << std::endl;
}
Animal::Animal(std::string type)
{
    std::cout << " Animal constructor called" << std::endl;
    this->type = type;
}
Animal::Animal(const Animal &_obj)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = _obj;
}
Animal& Animal::operator=(Animal const& _obj)
{
    std::cout << "Animal Copy assignment operator called " << std::endl;
    this->type = _obj.getType();
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}
std::string const &Animal::getType()const
{
    return this->type;
}
void    Animal::makeSound()const
{
    std::cout << "this Animal has no sound" << std::endl;
}