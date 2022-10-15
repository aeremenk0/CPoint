#ifndef CPOINT_CPOINT_H
#define CPOINT_CPOINT_H

#include "Point.h"
#include "CDist.h"

using namespace std;

class CPoint {
    Point arr[N];
public:
    CPoint(Point a[N]);
    CPoint operator+(const CDist &b) const;
    CDist operator-(const CPoint &a) const;

    //CPoint& operator++();
    //CPoint& operator--();

    friend ostream &operator<<(ostream &, const CPoint &);

    friend class Point;
    friend class CDist;
};

#endif //CPOINT_CPOINT_H
