#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(): _number(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int number):_number(number)
{
    std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float number): _number((int)(number * (1 << _bits)))
{
    std::cout << "Float constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& copy): _number(copy._number)
{
    std::cout << "Copy constructor called" << std::endl;
}
Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        return *this;
    return *this;
}