#include "Fixed.hpp"
#include "Point.hpp"
#include "bsp.hpp"

int main( void ) {

    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);

    Point pointInside(1, 1);
    Point pointOutside(10, 10);
    Point pointOnEdge(0, 5);
    Point pointOnVertex(0, 0);

    std::cout << "Point inside: " << bsp(a, b, c, pointInside) << std::endl;
    std::cout << "Point outside: " << bsp(a, b, c, pointOutside) << std::endl;
    std::cout << "Point on edge: " << bsp(a, b, c, pointOnEdge) << std::endl;
    std::cout << "Point on vertex: " << bsp(a, b, c, pointOnVertex) << std::endl;

    return 0;
}