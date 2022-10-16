#ifndef CPOINT_CDIST_H
#define CPOINT_CDIST_H

#include <iostream>
using namespace std;

class Dist;
// class CPoint;

class CDist {
    Dist* brr;
    int len = 0;
public:
    CDist(Dist* a, int len);
    // CDist(const CDist&);
    // CPoint operator+(const CPoint &b) const;
    // CDist& operator++();
    // CDist& operator--();
    friend ostream& operator << (ostream&, const CDist&);
    // friend class CPoint;
    // friend class CDist;
};

#endif //CPOINT_CDIST_H