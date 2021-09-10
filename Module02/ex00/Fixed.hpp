#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed;

class Fixed
{

public:
    Fixed();
    Fixed(const Fixed &copy);
    virtual ~Fixed();
    Fixed &operator=(const Fixed &op);

    int getRawBits(void) const;
    void setRawBits(int const raw);

private:
    int value;
    const static int bits = 8;
};

#endif