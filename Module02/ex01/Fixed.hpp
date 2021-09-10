#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int value;
    const static int bits = 8;

public:
    Fixed();
    Fixed(const int integer);
    Fixed(const float floater);
    Fixed(const Fixed &copy);
    virtual ~Fixed();

    Fixed &operator=(const Fixed &op);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixe);

#endif