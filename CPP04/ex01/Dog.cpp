/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:55:22 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/23 05:08:10 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog()
{
    this->type = "dog";
    this->brain = new Brain();
    std::cout << " Dog Default constructor called" << std::endl;
}

Dog::Dog(std::string Name)
{
    std::cout << " Dog constructor called" << std::endl;
    this->brain = new Brain();
    this->name = Name;
}
Dog::Dog(const Dog &_obj): brain(new Brain())
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = _obj;
}
Dog& Dog::operator=(Dog const& _obj)
{
    std::cout << "Dog Copy assignment operator called " << std::endl;
    *this->brain = *_obj.brain;
    this->type = _obj.getType();
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog Destructor called" << std::endl;
}
void    Dog::makeSound()const
{
    std::cout << "Dog bark woof woof" << std::endl;
}