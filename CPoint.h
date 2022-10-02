#ifndef CPOINT_CPOINT_H
#define CPOINT_CPOINT_H

#include <iostream>
#include "Point.h"
#define N 2

using namespace std;

class CDist;

class CPoint {
    Point arr[N];
public:
    CPoint(Point a[N]);
    CPoint operator+(const CDist &b) const;
    CDist operator-(const CPoint &a) const;

    CPoint& operator++();
    CPoint& operator--();

    friend ostream &operator<<(ostream &, const CPoint &);

    friend class CPoint;
    friend class CDist;
};

#endif //CPOINT_CPOINT_H
