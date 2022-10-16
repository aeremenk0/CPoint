#include "Point.h"
#include "Dist.h"
#include "CDist.h"
#include "CPoint.h"

int main(){
    Point a(1, 2), b(2, 4);
    cout << a << endl;
    Dist d1(1, 2), d2(2, 4);
    cout << d1 << endl;

    cout << "======" << endl;
    Point r = a + d1;
    cout << "======" << endl;

    cout << r << endl;    

    const int dim = 2;
    Dist darr[dim];
    darr[0] = d1;
    darr[1] = d2;

    CDist cd = CDist(darr, dim); 

    cout << cd << endl;

    Point parr[dim];
    parr[0] = a;
    parr[1] = b;

    CPoint cp = CPoint(parr, dim); 

    cout << cp << endl;

    return 0;
}

