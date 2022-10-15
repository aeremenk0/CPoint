#include "CDist.h"
#include "CPoint.h"

CDist::CDist(Dist a[N]){
    for (int i = 0; i < N; i++) {
        brr[i] = a[i];
    }
}

CPoint CDist::operator+(const CPoint& a) const {
    Point crr[N];
    for (int i = 0; i < N; i++){
        crr[i] = a.arr[i] + brr[i];
    }
    CPoint crray = CPoint(crr);
    return crray;
}

ostream & operator<<(ostream &stream, const CDist& s){
    cout << "[";
    for (int i = 0; i < N; i++) {
        cout << "(";
        stream << s.brr[i].X1(); cout << ", ";
        stream << s.brr[i].Y1(); cout << ")";
    }
    cout << "]" << endl;
    return stream;
}