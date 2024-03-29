#ifndef FIXED_HPP
#define FIXED_HPP
#include<iostream>

class Fixed
{
private:
    int _raw;
    static const int Fraction_Bits = 8;
public:
    Fixed();
    Fixed(const Fixed &_obj);
    Fixed& operator=(Fixed const& _obj);
    ~Fixed();

    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif