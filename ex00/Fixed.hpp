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
        Fixed(const Fixed &obj);
        Fixed &operator=(const Fixed &obj);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        ~Fixed();
};

#endif