#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
			int					_value;
			static const int	_fixed;

	public:
			Fixed();
			~Fixed();
			Fixed(const Fixed &other);
			
};

#endif