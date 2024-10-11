#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"


class Point {
    private:
        Fixed const _x;
        Fixed const _y;
    public:
        Point();
        Point(float x, float y);
        Point(Point const &copy);
        Point &operator=(const Point &copy);
        ~Point();

        Fixed getX() const;
        Fixed getY() const;
};

#endif
