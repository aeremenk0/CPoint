#ifndef CPOINT_POINT_H
#define CPOINT_POINT_H

#include <iostream>
using namespace std;

class Dist;

class Point {
    int x, y;
public:
// why do you need that? what problem does it solve?
//    Point();

    Point(int x, int y);
    Point(const Point&);
//    you do not need it after you defined <<
//    void printl();
// why do you need that?
//    double X() const;
//    double Y() const;

    Point operator+(const Dist &b) const;

    Dist operator-(const Point &b) const;

    friend class Dist;
    friend ostream& operator<<(ostream& os, const Point& p);
};

#endif //CPOINT_POINT_H
