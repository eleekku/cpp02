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
			Fixed	();
			Fixed	(const int value);
			Fixed	(const float value);
			~Fixed	();
			Fixed	(const Fixed &copy);
			Fixed 	&operator=(const Fixed &copy);
			int 	getRawBits(void) const;
			void 	setRawBits(int const raw);
			float	toFloat(void) const;
			int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif