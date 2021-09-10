#include "Fixed.hpp"

//// constructors / copy constructor / deconstructor ///////////
Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = integer << this->bits;
}

Fixed::Fixed(const float floater)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = (int)(roundf(floater * (1 << this->bits)));
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = copy.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
/////////////////////////////////////////////////////////////////////


//// overload functions /////////////////////////////////////////////
Fixed &Fixed::operator=(const Fixed &op)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &op)
        this->value = op.getRawBits();
    return (*this);
}

/////////////////////////////////////////////////////////////////////

//// getters / setters ///////////////////////////////////////////////
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw) { this->value = raw; }
/////////////////////////////////////////////////////////////////////

//// member functions ///////////////////////////////////////////////
float Fixed::toFloat(void) const
{
    return ((float)this->value / (float)(1 << this->bits));
}

int Fixed::toInt(void) const
{
    return ((int)(this->value >> this->bits));
}
/////////////////////////////////////////////////////////////////////


std::ostream &operator<<(std::ostream &out, const Fixed &fixe)
{
    out << fixe.toFloat();
    return (out);
}