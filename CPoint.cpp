#include "CPoint.h"

CPoint::CPoint(Point a[N]){
    for (int i = 0; i < N; i++){
        arr[i] = a[i];
        //cout << "you call constr for CDist obj" << endl;
    }
}

CPoint CPoint::operator + (const CDist& b) const {
    Point crr[N];
    for (int i = 0; i < N; i++){
        crr[i] = arr[i] + b.brr[i];
    }
    CPoint crray = CPoint(crr);
    return crray;
}

CDist CPoint::operator - (const CPoint& a) const {
    Dist crr[N];
    for (int i = 0; i < N; i++){
        crr[i] = arr[i] - a.arr[i];
    }
    CDist crray = CDist(crr);
    return crray;
}

ostream & operator << (ostream &stream, const CPointer& s){
    cout << "[";
    for (int i = 0; i < N; i++) {
        cout << "(";
        stream << s.arr[i].X(); cout << ", ";
        stream << s.arr[i].Y();
        cout << ")";
    }
    cout << "]" << endl;
    return stream;
}