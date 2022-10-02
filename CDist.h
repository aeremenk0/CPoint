#ifndef CPOINT_CDIST_H
#define CPOINT_CDIST_H

#include <iostream>
#include "Dist.h"
#define N 2

using namespace std;

class CPoint;

class CDist {
    Dist arr[N];
public:
    CDist(Dist a[N]);
    CDist(const CDist&);
    CPoint operator+(const CPoint &b) const;

    CDist& operator++();
    CDist& operator--();

    friend ostream &operator<<(ostream &, const CDist &);

    friend class CPoint;
    friend class CDist;
};

#endif //CPOINT_CDIST_H
