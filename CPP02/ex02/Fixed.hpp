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

    bool operator>(Fixed const& _obj)const;
    bool operator<(Fixed const& _obj)const;
    bool operator>=(Fixed const& _obj)const;
    bool operator<=(Fixed const& _obj)const;
    bool operator==(Fixed const& _obj)const;
    bool operator!=(Fixed const& _obj)const;

    Fixed operator+(const Fixed& _obj)const;
    Fixed operator-(const Fixed& _obj)const;
    Fixed operator*(const Fixed& _obj)const;
    Fixed operator/(const Fixed& _obj)const;

    Fixed& operator++();
    Fixed& operator--();
    Fixed operator++(int);
    Fixed operator--(int);

    static Fixed& min(Fixed& _obj1, Fixed& _obj2);
    static Fixed& max(Fixed& _obj1, Fixed& _obj2);
    static Fixed const& min(Fixed const& _obj1, Fixed const& _obj2);
    static Fixed const& max(Fixed const& _obj1, Fixed const& _obj2);

    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;

    
};

std::ostream &operator<<(std::ostream &o, const Fixed &obj);

#endif