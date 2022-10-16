#include "CDist.h"
// #include "CPoint.h"
#include "Dist.h"
// #include "Point.h"

CDist::CDist(Dist* a, int len){
    this -> len = len;

    brr = new Dist[len]; 
    for (int i = 0; i < len; i++) {
        brr[i] = a[i];
    }
}

// CPoint CDist::operator+(const CPoint& a) const {
//     Point crr[N];
//     for (int i = 0; i < N; i++){
//         crr[i] = a.arr[i] + brr[i];
//     }
//     CPoint crray = CPoint(crr);
//     return crray;
// }

ostream& operator << (ostream &stream, const CDist& s) {
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
