#pragma once

#include <iostream>

#include "Dist.h"

using namespace std;

class CPoint;

class CDist {
    Dist brr[N];
public:
    CDist(Dist a[N]);
    CDist(const CDist&);
    CPoint operator+(const CPoint &b) const;

    CDist& operator++();
    CDist& operator--();

    friend ostream &operator<<(ostream &, const CDist &);

    friend class Dist;
    friend class CPoint;
};