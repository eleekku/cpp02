#include "Point.hpp"

Point::Point(): _x(0), _y(0) {

}

Point::Point(float x, float y): _x(x), _y(y) {

}

Point::Point(Point const &copy): _x(copy._x), _y(copy._y) {

}

Point &Point::operator=(Point const &copy) {
    if (this != &copy)
        return *this;
    return *this;
}

Point::~Point() {

}

Fixed Point::getX() const {
    return _x;
}

Fixed Point::getY() const {
    return _y;
}

