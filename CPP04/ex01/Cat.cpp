/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:53:49 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/23 05:07:48 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat()
{
    this->type = "cat";
    this->brain = new Brain();
    std::cout << " Cat Default constructor called" << std::endl;
}
Cat::Cat(std::string Name)
{
    this->brain = new Brain();
    std::cout << " Cat constructor called" << std::endl;
    this->name = Name;
}
Cat::Cat(const Cat &_obj): brain(new Brain())
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = _obj;
}

Cat& Cat::operator=(Cat const& _obj)
{
    std::cout << "Cat Copy assignment operator called " << std::endl;
    this->type = _obj.getType();
    *this->brain = *_obj.brain;
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat Destructor called" << std::endl;
}
void    Cat::makeSound()const
{
    std::cout << "Cats can Meow purrs hiss ..." << std::endl;
}