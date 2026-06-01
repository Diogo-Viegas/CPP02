#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(): _number(0)
{
     std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int intNumber)
{
    std::cout << "Int constructor called" << std::endl;
    _number = intNumber << _bits;
}
Fixed::Fixed(const float floatNumber)
{
     std::cout << "Float constructor called" << std::endl;
    _number = roundf(floatNumber * (1 << _bits));
}
Fixed::Fixed(const Fixed& copy)
{
     std::cout << "Copy constructor called" << std::endl;
     *this = copy;
}
Fixed& Fixed::operator=(const Fixed& copy)
{
    if(this != &copy)
        _number = copy._number;
    return *this;
}


std::ostream& operator<<(std::ostream &o,Fixed const &fixed)
{
    o << fixed.toFloat();
    return o;
}
bool Fixed::operator<(Fixed const &comp)
{
    return (this->_number < comp._number);
}
bool Fixed::operator>(Fixed const &comp)
{
    return (this->_number > comp._number);
}
bool Fixed::operator==(Fixed const &comp)
{
    return (this->_number == comp._number);
}
bool Fixed::operator!=(Fixed const &comp)
{
    return (this->_number != comp._number);
}
bool Fixed::operator<=(Fixed const &comp)
{
    return (this->_number <= comp._number);
}
bool Fixed::operator>=(Fixed const &comp)
{
    return (this->_number >= comp._number);
}

float Fixed::operator+(Fixed const &obj)
{
    return (this->toFloat() + obj.toFloat());
}
float Fixed::operator-(Fixed const &obj)
{
    return (this->toFloat() - obj.toFloat());
}
float Fixed::operator*(Fixed const &obj)
{
    return (this->toFloat() * obj.toFloat());
}
float Fixed::operator/(Fixed const &obj)
{
    return (this->toFloat() / obj.toFloat());
}
float Fixed::toFloat(void) const
{
    return (float)_number / (float)(1 << _bits);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}