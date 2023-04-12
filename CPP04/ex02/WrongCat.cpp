/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 03:27:36 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/23 03:27:37 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << " WrongCat Default constructor called" << std::endl;
}
WrongCat::WrongCat(std::string Name)
{
    std::cout << " WrongCat constructor called" << std::endl;
    this->name = Name;
}
WrongCat::WrongCat(const WrongCat &_obj)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = _obj;
}
WrongCat& WrongCat::operator=(WrongCat const& _obj)
{
    std::cout << "WrongCat Copy assignment operator called " << std::endl;
    this->type = _obj.getType();
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}
void    WrongCat::makeSound()const
{
    std::cout << "WrongCats can Meow purrs hiss ..." << std::endl;
}