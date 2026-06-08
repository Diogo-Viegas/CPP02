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
        Fixed(const int number);
        Fixed(const float number);
        Fixed(const Fixed& copy);
        Fixed& operator=(const Fixed& copy);
        int toInt(void) const;
        float toFloat(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
        ~Fixed();
    
};
        std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);
#endif