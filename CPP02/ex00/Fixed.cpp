/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 00:34:18 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/21 07:40:14 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _raw(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &_obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = _obj;
}
Fixed& Fixed::operator=(Fixed const& _obj)
{
    std::cout << "Copy assignment operator called " << std::endl;
    this->_raw = _obj.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}