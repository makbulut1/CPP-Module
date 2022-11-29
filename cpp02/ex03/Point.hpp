#include "Fixed.hpp"

class Point {
public:
    Point(void);

    Point(const float x, const float y);

    Point(const Point &copy);

    ~Point(void);

    Point &operator=(const Point &rhs);

    Fixed const getX(void) const;

    Fixed const getY(void) const;

private:

    Fixed const _x;
    Fixed const _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);