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

