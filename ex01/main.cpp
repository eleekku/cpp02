#include "Fixed.hpp"

int main( void ) {

	Fixed	   a;
	Fixed	   b( a );
	Fixed	   c;
	const int   d = 42;
	const float e = 42.42f;
	Fixed	   f( d );
	Fixed		g( e );

	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << f.toFloat() + 0.01 << std::endl;
	std::cout << g.toInt() << std::endl;

	std::cout << g << std::endl;
	return 0;		
}