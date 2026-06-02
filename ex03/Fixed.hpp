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
        Fixed operator+(Fixed const &obj) const;
        Fixed operator-(Fixed const &obj) const;
        Fixed operator*(Fixed const &obj) const;
        Fixed operator/(Fixed const &obj) const;
        //static functions
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a,const Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        //increment and decrement
        Fixed& operator++();
        Fixed& operator--();
        Fixed operator++(int);
        Fixed operator--(int);
        //conversion
        float toFloat(void) const;
        //destructor
        ~Fixed();
};
std::ostream& operator<<(std::ostream &o,Fixed const &fixed);
#endif