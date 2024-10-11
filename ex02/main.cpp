#include "Fixed.hpp"

int main( void ) {
    Fixed a;

    Fixed b(42);
    Fixed c(42.42f);

    Fixed d(b);

    Fixed e;
    e = c;

    Fixed f = b + c;
    Fixed g = b - c;
    Fixed h = b * c;
    Fixed i = b / c;
    std::cout << "f (b + c): " << f.toFloat() << std::endl;
    std::cout << "g (b - c): " << g.toFloat() << std::endl;
    std::cout << "h (b * c): " << h.toFloat() << std::endl;
    std::cout << "i (b / c): " << i.toFloat() << std::endl;

    std::cout << "b > c: " << (b > c) << std::endl;
    std::cout << "b < c: " << (b < c) << std::endl;
    std::cout << "b >= c: " << (b >= c) << std::endl;
    std::cout << "b <= c: " << (b <= c) << std::endl;
    std::cout << "b == c: " << (b == c) << std::endl;
    std::cout << "b != c: " << (b != c) << std::endl;

    Fixed j;
    std::cout << "j: " << j.getRawBits() << std::endl;
    std::cout << "++j: " << (++j).getRawBits() << std::endl;
    std::cout << "j++: " << (j++).getRawBits() << std::endl;
    std::cout << "j: " << j.getRawBits() << std::endl;
    std::cout << "--j: " << (--j).getRawBits() << std::endl;
    std::cout << "j--: " << (j--).getRawBits() << std::endl;
    std::cout << "j: " << j.getRawBits() << std::endl;

    Fixed k(10);
    Fixed l(20);
    std::cout << "min(k, l): " << Fixed::min(k, l).toFloat() << std::endl;
    std::cout << "max(k, l): " << Fixed::max(k, l).toFloat() << std::endl;
    const Fixed m(30);
    const Fixed n(40);
    std::cout << "min(m, n): " << Fixed::min(m, n).toFloat() << std::endl;
    std::cout << "max(m, n): " << Fixed::max(m, n).toFloat() << std::endl;

    return 0;

}