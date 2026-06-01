#include "Fixed.hpp"

int main( void ) {
    Fixed a(52);
    Fixed b(52);
    //Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    //std::cout << ++a << std::endl;
    //std::cout << a << std::endl;
    //std::cout << a++ << std::endl;
    //std::cout << a << std::endl;
    //std::cout << b << std::endl;
    //std::cout << Fixed::max( a, b ) << std::endl;

    //main from subject ↑

    if(a < b)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    if(a > b)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    
    if(a <= b)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    if(a >= b)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    if(a != b)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    return 0;
}