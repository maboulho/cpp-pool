/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:53:49 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/22 18:25:10 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat()
{
    std::cout << " Cat Default constructor called" << std::endl;
}
Cat::Cat(std::string Name)
{
    std::cout << " Cat constructor called" << std::endl;
    this->name = Name;
}
Cat::Cat(const Cat &_obj)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = _obj;
}
Cat& Cat::operator=(Cat const& _obj)
{
    std::cout << "Cat Copy assignment operator called " << std::endl;
    this->type = _obj.getType();
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}
void    Cat::makeSound()const
{
    std::cout << "Cats can Meow purrs hiss ..." << std::endl;
}