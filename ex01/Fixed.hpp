#ifndef FIXED_H
#define FIXED_H

class Fixed
{
    private:
        const int _number;
        static const int _bits = 8;
    public:
        Fixed();
        Fixed(const int intNbr);
        Fixed(const float floatNbr);
        Fixed(const Fixed& copy);
        Fixed& operator=(const Fixed& copy);
        int toInt(void) const;
        float toFloat(void) const;

        ~Fixed();
    
};

#endif