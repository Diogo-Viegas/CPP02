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
        bool operator<(const Fixed& comp);
        bool operator>(const Fixed& comp);
        bool operator>=(const Fixed& comp);
        bool operator<=(const Fixed& comp);
        bool operator==(const Fixed& comp);
        bool operator!=(const Fixed& comp);
        float toFloat(void) const;
        ~Fixed();
};
std::ostream& operator<<(std::ostream &o,Fixed const &fixed);
#endif