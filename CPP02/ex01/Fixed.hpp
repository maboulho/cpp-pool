#ifndef FIXED_HPP
#define FIXED_HPP
#include<iostream>
#include<cmath>
class Fixed
{
private:
    int _raw;
    static const int Fraction_Bits = 8;
public:
    Fixed();
    Fixed(float const _raw);
    Fixed(int const _raw);
    Fixed(const Fixed &_obj);
    Fixed& operator=(Fixed const& _obj);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;

    
};

std::ostream &operator<<(std::ostream &o, const Fixed &obj);

#endif