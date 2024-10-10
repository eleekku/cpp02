#include "Fixed.hpp"

const int	Fixed::_fixed = 8;

Fixed::Fixed(void): _value(0)
{
	std::cout << "Fixed object created with default constructor" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Fixed object created with int constructor" << std::endl;
	this->_value = value << Fixed::_fixed;
}

Fixed::Fixed(const float value)
{
	std::cout << "Fixed object created with float constructor" << std::endl;
	this->_value = roundf(value * (1 << Fixed::_fixed));
}

Fixed::~Fixed(void)
{
	std::cout << "Fixed object destroyed" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Fixed object created with copy constructor" << std::endl;
	*this = copy;

}

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Fixed object created with assignation operator" << std::endl;
	if (this != &copy)
		this->_value = copy.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float(this->_value) / (1 << Fixed::_fixed)));
}

int Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_fixed);
}

// Definition of the operator overload
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

