#include "func.h"

/////////////// CDist //////////////
CPoint CDist::operator+(const CPoint& b) const{
    CPoint a(b.X() + x1, b.Y() + y1);
    return a;
}

CDist::CDist() {
    x1 = 0;
    y1 = 0;
}

CDist::CDist(double x1, double y1) {
    this -> x1 = x1;
    this -> y1 = y1;
}

void CDist::printl() { // печать эл-та кл.CDist
    cout << "(" << x1 << ", " << y1 << ")";
}

double CDist::X1() const {
    return x1;
}
double CDist::Y1() const {
    return y1;
}

/////////////// CPoint //////////////
CPoint::CPoint() {
    x = 0;
    y = 0;
}
CPoint::CPoint(double x, double y) {
    this -> x = x;
    this -> y = y;
}

double CPoint::X() const {
    return x;
}

double CPoint::Y() const {
    return y;
}

void CPoint::printl() {
    cout << "(" << x << ", " << y << ")";
}

CDist CPoint::operator - (const CPoint& b) const{
    CDist a(x - b.x, y - b.y);
    return a;
}

CPoint CPoint::operator + (const CDist& b) const{ //оператор сложения CPoint и CDist,возвр.CPoint
    CPoint a(x + b.X1(), y + b.Y1());
    return a;
}

/////////////// CDistance //////////////
CDistance::CDistance(CDist a[N]) {
    for (int i = 0; i < N; i++) {
        brr[i] = a[i];
        //cout << "you call constr for CPoint obj" << endl;
    }
}

void CDistance::print(){
    cout << "[";
    for (int i = 0; i < N; i++)
        brr[i].printl();
    cout << "]" << endl;
}

CPointer CDistance::operator + (const CPointer& a) const {
    CPoint crr[N];
    for (int i = 0; i < N; i++){
        crr[i] = a.arr[i] + brr[i];
    }
    CPointer crray = CPointer(crr);
    return crray;
}

ostream & operator << (ostream &stream, const CDistance& s){
    cout << "[";
    for (int i = 0; i < N; i++) {
        cout << "(";
        stream << s.brr[i].X1(); cout << ", ";
        stream << s.brr[i].Y1(); cout << ")";
    }
    cout << "]" << endl;
    return stream;
}

/////////////// CPointer //////////////
CPointer::CPointer(CPoint a[N]){
    for (int i = 0; i < N; i++){
        arr[i] = a[i];
        //cout << "you call constr for CDist obj" << endl;
    }
}

void CPointer::print() {
    cout << "[";
    for (int i = 0; i < N; i++)
        arr[i].printl();
    cout << "]" << endl;
}

CPointer CPointer::operator + (const CDistance& b) const {
    CPoint crr[N];
    for (int i = 0; i < N; i++){
        crr[i] = arr[i] + b.brr[i];
    }
    CPointer crray = CPointer(crr);
    return crray;
}

CDistance CPointer::operator - (const CPointer& a) const {
    CDist crr[N];
    for (int i = 0; i < N; i++){
        crr[i] = arr[i] - a.arr[i];
    }
    CDistance crray = CDistance(crr);
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