#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed s1 = (point.getX() - b.getX()) * (a.getY() - b.getY()) - (a.getX() - b.getX()) * (point.getY() - b.getY());
    Fixed s2 = (point.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (point.getY() - c.getY());
    Fixed s3 = (point.getX() - a.getX()) * (c.getY() - a.getY()) - (c.getX() - a.getX()) * (point.getY() - a.getY());

    if((s1 > 0 && s2 > 0 && s3 > 0) || (s1 < 0 && s2 < 0 && s3 < 0))
        return true;
    else
        return false;

}   