#ifndef FIXED_H
#define FIXED_H
#include <iostream>
class Fixed
{
    private:
        int _number;
        static const int _bits = 8;
    public:
        Fixed();
        Fixed(const int intNumber);
        Fixed(const float floatNumber);
        Fixed(const Fixed& copy);

        Fixed& operator=(const Fixed& copy);
        //6 comparison operators
        bool operator<(const Fixed& comp);
        bool operator>(const Fixed& comp);
        bool operator>=(const Fixed& comp);
        bool operator<=(const Fixed& comp);
        bool operator==(const Fixed& comp);
        bool operator!=(const Fixed& comp);
        //4 arithmetic operators
        float operator+(Fixed const &obj);
        float operator-(Fixed const &obj);
        float operator*(Fixed const &obj);
        float operator/(Fixed const &obj);
        float toFloat(void) const;
        ~Fixed();
};
std::ostream& operator<<(std::ostream &o,Fixed const &fixed);
#endif