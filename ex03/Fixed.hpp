#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
			int					_value;
			static const int	_fixed;

	public:
			Fixed				();
			Fixed				(const int value);
			Fixed				(const float value);
			~Fixed				();
			Fixed				(const Fixed &copy);
			Fixed 				&operator=(const Fixed &copy);

			// Comparison operators
			bool				operator>(const Fixed &other) const;
			bool				operator<(const Fixed &other) const;
			bool				operator>=(const Fixed &other) const;
			bool				operator<=(const Fixed &other) const;
			bool				operator==(const Fixed &other) const;
			bool				operator!=(const Fixed &other) const;

			// Arithmetic operator
			Fixed				operator+(const Fixed &other) const;
			Fixed				operator-(const Fixed &other) const;
			Fixed				operator*(const Fixed &other) const;
			Fixed				operator/(const Fixed &other) const;

			// Increment/Decrement operators
			Fixed				&operator++();
			Fixed				operator++(int);
			Fixed				&operator--();
			Fixed				operator--(int);

			// Min/Max functions
			static Fixed		&min(Fixed &a, Fixed &b);
			static Fixed		&max(Fixed &a, Fixed &b);
			static const Fixed	&min(const Fixed &a, const Fixed &b);
			static const Fixed	&max(const Fixed &a, const Fixed &b);


			int 				getRawBits(void) const;
			void 				setRawBits(int const raw);
			float				toFloat(void) const;
			int					toInt(void) const;
};

			std::ostream 		&operator<<(std::ostream &out, const Fixed &fixed);

#endif