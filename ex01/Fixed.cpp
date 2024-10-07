#include "Fixed.hpp"

const int	Fixed::_fixed = 8;

Fixed::Fixed(void): _value(0)
{
	std::cout << "Fixed object created with default constructor" << std::endl;
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

