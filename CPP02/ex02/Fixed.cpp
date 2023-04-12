/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 00:34:18 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/20 05:58:51 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0)
{
}
Fixed::Fixed(int const _raw) : _raw(_raw << Fraction_Bits)
{

}
Fixed::Fixed(float const _raw) : _raw(roundf(_raw * (1 << Fraction_Bits)))
{

}
Fixed::Fixed(const Fixed &_obj)
{
    *this = _obj; 
}
Fixed& Fixed::operator=(Fixed const& _obj)
{
    this->_raw = _obj.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
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

bool Fixed::operator>(Fixed const& _obj) const
{
    return(this->_raw > _obj._raw);    
}
bool Fixed::operator<(Fixed const& _obj) const
{
    return(this->_raw < _obj._raw);
}
bool Fixed::operator>=(Fixed const& _obj)const
{
    return(this->_raw >= _obj._raw); 
}
bool Fixed::operator<=(Fixed const& _obj)const
{
    return(this->_raw <= _obj._raw); 
}
bool Fixed::operator==(Fixed const& _obj) const
{
    return(this->_raw == _obj._raw); 
}
bool Fixed::operator!=(Fixed const& _obj) const
{
    return(this->_raw != _obj._raw); 
}

Fixed Fixed::operator+(const Fixed& _obj) const
{
    return(Fixed(this->toFloat() + _obj.toFloat()));
}

Fixed Fixed::operator-(const Fixed& _obj) const
{
    return(Fixed(this->toFloat()- _obj.toFloat()));
}
Fixed Fixed::operator*(const Fixed& _obj) const
{
    return(Fixed(this->toFloat() *  _obj.toFloat()));
}
Fixed Fixed::operator/(const Fixed& _obj) const
{
    if (_obj._raw == 0)
        std::cerr << "division by zero" << std::endl, exit(1);
    return(Fixed(this->toFloat() / _obj.toFloat()));
}

Fixed& Fixed::operator++()
{
    this->_raw++;
    return(*this);
}
Fixed& Fixed::operator--()
{
    this->_raw--;
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    this->_raw++;
    return(tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    this->_raw--;
    return(tmp);
}

Fixed& Fixed::min(Fixed& _obj1, Fixed& _obj2)
{
    return (_obj1 <= _obj2 ? _obj1 : _obj2);
}
Fixed& Fixed::max(Fixed& _obj1, Fixed& _obj2)
{
    return (_obj1 >= _obj2 ? _obj1 : _obj2);
}
Fixed const& Fixed::min(Fixed const& _obj1, Fixed const& _obj2)
{
    return (_obj1 <= _obj2 ? _obj1 : _obj2);
}
Fixed const& Fixed::max(Fixed const& _obj1, Fixed const& _obj2)
{
    return (_obj1 >= _obj2 ? _obj1 : _obj2);
}

std::ostream &operator<<(std::ostream &o, const Fixed &obj)
{
    o << obj.toFloat();
    return o;
}
