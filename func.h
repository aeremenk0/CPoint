#include <iostream>

#define N 2

using namespace std;

class CDist;

class Point {
    double x, y;
public:
    Point();

    Point(double x, double y);

    double X() const;

    double Y() const;

    void printl();

    Point operator+(const CDist &b) const;

    CDist operator-(const Point &b) const;

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

    Point operator+(const Point &b) const;
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
    Point arr[N];
public:
    CPointer(Point a[N]);

    void print();

    CPointer operator+(const CDistance &b) const;

    CDistance operator-(const CPointer &a) const;

    friend ostream &operator<<(ostream &, const CPointer &);

    friend class CPoint;

    friend class CDistance;
};
