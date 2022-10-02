#include "func.h"

int main(){
    Point a(1, 2), b(2, 4);
    CDist c(1,2), d(2,4);
    Point pA[] = {a, b}, pB[] = {b, a};
    CDist dA[] = {c, d};//, dB[] = {d, c};
    CPointer aP = CPointer(pA), bP = CPointer(pB);
    CDistance aD = CDistance(dA);//, bD = CDistance(dB);
    cout << "aP =  "; cout << aP; cout << "bP =  "; cout << bP; cout << "aD =  "; cout << aD;
    cout << "aP + aD  + aD = "; cout << aP + aD + aD;
    cout << "bP + aD =  "; cout << bP + aD;
    cout << "aP - bP = "; cout << aP - bP;
    cout << "aP+(bP-aP)-bP = "; cout << aP+(bP-aP)-bP;
    return 0;
}

