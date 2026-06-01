#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(): _number(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int number)
{
    std::cout << "Int constructor called" << std::endl;
    _number = number << _bits;
}
Fixed::Fixed(const float number)
{
    std::cout << "Float constructor called" << std::endl;
    _number = roundf(number * (1 << _bits));
}
Fixed::Fixed(const Fixed& copy): _number(copy._number)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}
Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        _number = copy._number;
    return *this;
}
int Fixed::toInt(void) const
{
    return _number >> _bits;
}
float Fixed::toFloat(void) const
{
    return (float)_number / (float)(1 << _bits);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
    o << fixed.toFloat();
    return o;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}