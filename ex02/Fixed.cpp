#include "Fixed.hpp"

const int	Fixed::_fixed = 8;

Fixed::Fixed(void): _value(0)
{
}

Fixed::Fixed(const int value)
{
	this->_value = value << Fixed::_fixed;
}

Fixed::Fixed(const float value)
{
	this->_value = roundf(value * (1 << Fixed::_fixed));
}

Fixed::~Fixed(void)
{

}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	if (this != &copy)
		this->_value = copy.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float(this->_value) / (1 << Fixed::_fixed)));
}

int	Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_fixed);
}

// Comparison operators

bool	Fixed::operator>(const Fixed &other) const {
	return this->_value > other._value;
}

bool	Fixed::operator<(const Fixed &other) const {
	return this->_value < other._value;
}

bool	Fixed::operator>=(const Fixed &other) const {
	return this->_value >= other._value;
}

bool	Fixed::operator<=(const Fixed &other) const {
	return this->_value <= other._value;
}

bool	Fixed::operator==(const Fixed &other) const {
	return this->_value == other._value;
}

bool	Fixed::operator!=(const Fixed &other) const {
	return this->_value != other._value;
}

// Aritmetic operators

Fixed	Fixed::operator+(const Fixed &other) const {
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(const Fixed &other) const {
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(const Fixed &other) const {
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(const Fixed &other) const {
	return Fixed(this->toFloat() / other.toFloat());
}

// Increment/Decrement operators

Fixed	&Fixed::operator++() {
	this->_value++;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed	&Fixed::operator--() {
	this->_value--;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed tmp(*this);
	operator--();
	return tmp;
}

// Min/Max functions

Fixed	&Fixed::min(Fixed &a, Fixed &b) {
	return a < b ? a : b;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {
	return a > b ? a : b;
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b) {
	return a < b ? a : b;
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b) {
	return a > b ? a : b;
}

// Definition of the operator overload

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

