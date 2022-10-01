#include <iostream>

#define N 2

using namespace std;

class CDist;

class CPoint {
    double x, y;
public:
    CPoint();

    CPoint(double x, double y);

    double X() const;

    double Y() const;

    void printl();

    CPoint operator+(const CDist &b) const;

    CDist operator-(const CPoint &b) const;

    friend class CPointer;
};

class CDist {
    double x1, y1;
public:
    CDist();

    CDist(double x1, double y1);

    void printl();

    double X1() const;

    double Y1() const;

    CPoint operator+(const CPoint &b) const;
};

class CPointer;

class CDistance {
    CDist brr[N];
public:
    CDistance(CDist a[N]);

    void print();

    CPointer operator+(const CPointer &cp) const;

    friend ostream &operator<<(ostream &, const CDistance &);

    friend class CPointer;
};

class CPointer {
    CPoint arr[N];
public:
    CPointer(CPoint a[N]);

    void print();

    CPointer operator+(const CDistance &b) const;

    CDistance operator-(const CPointer &a) const;

    friend ostream &operator<<(ostream &, const CPointer &);

    friend class CPoint;

    friend class CDistance;
};
