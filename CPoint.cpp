#include "CPoint.h"

CPoint::CPoint(Point* a, int len){
    this -> len = len;

    brr = new Point[len]; 
    for (int i = 0; i < len; i++) {
        brr[i] = a[i];
    }
}

// CPoint CPoint::operator + (const CDist& b) const {
//     Point crr[N];
//     for (int i = 0; i < N; i++){
//         crr[i] = arr[i] + b.brr[i];
//     }
//     CPoint crray = CPoint(crr);
//     return crray;
// }

// CDist CPoint::operator - (const CPoint& a) const {
//     Dist crr[N];
//     for (int i = 0; i < N; i++){
//         crr[i] = arr[i] - a.arr[i];
//     }
//     CDist crray = CDist(crr);
//     return crray;
// }


ostream & operator << (ostream &stream, const CPoint& s){
    stream << "[";
    for (int i = 0; i < s.len; i++) {
        if ( i != 0 ) {
            stream << ", ";
        }
        stream << s.brr[i];
    }
    stream << "]" << endl;
    return stream;
}