#ifndef CPOINT_DIST_H
#define CPOINT_DIST_H


class Point;

class Dist {
    int x, y;
public:
//    What for???
//    Dist();

    Dist(int x, int y);
    Dist(const Dist&);

// What for?
//    void printl();
//    double X1() const;
//    double Y1() const;

    Point operator + (const Point &b) const;

    friend class Point;
    friend ostream& operator << (ostream& os, const Dist& p);
};

#endif //CPOINT_DIST_H
