#include "Fixed.hpp"

Fixed::Fixed()
{
    _number = 0;
    std::cout << "Default constructor called" << std::endl;
}
Fixed &Fixed::operator=(const Fixed &obj)
{
    if (this != &obj)
        _number = obj._number;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}