#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    std::cout << "main from subject ↑" << std::endl;

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
    std::cout << "SUM" << std::endl;
    float result = a + b;
    std::cout << a << " + " << b << " = " << result << std::endl; 
    std::cout << "SUBTRACT" << std::endl;
    result = a - b;
    std::cout << a << " - " << b << " = " << result << std::endl; 
    std::cout << "MULT" << std::endl;
    result = a * b;
    std::cout << a << " * " << b << " = " << result << std::endl; 
    std::cout << "DIVISION" << std::endl;
    result = a / b;
    std::cout << a << " / " << b << " = " << result << std::endl; 
    return 0;
}