/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 00:34:18 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/19 23:23:42 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0)
{
    std::cout << "constructor called" << std::endl;
}

// roundf(value * (1 << bits))
// value << bits

Fixed::Fixed(int const _raw) : _raw(_raw << Fraction_Bits)
{
    std::cout << "Int constructor called" << std::endl;
    
   
}
Fixed::Fixed(float const _raw) : _raw(roundf(_raw * (1 << Fraction_Bits)))
{
     std::cout << "Float constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &_obj)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_raw = _obj.getRawBits(); 
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
float Fixed::toFloat( void ) const
{
    float tmp = _raw;
    tmp /= (1 << Fraction_Bits);
    return (tmp);
}
int Fixed::toInt( void ) const
{
    return(_raw >> Fraction_Bits);
}

std::ostream &operator<<(std::ostream &o, const Fixed &obj)
{
    o << obj.toFloat();
    return o;
}
