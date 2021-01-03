#include <iostream>
using namespace std;
#include "geometry.h"
int main(){
    Point p1 (1,1);
    Point p2 (2,2);
    Point p3 (3,3);
    Point p4 (4,4);
    Point p5 (5,5);
    Point arra[] = {p1,p2,p3,p4};
    Point arrb[] = {p1,p2,p3,p4,p5};
    Polygon a(arra,4);
    Polygon b(arrb,5);
    cout << a.getNumPolygons() << "\n";
}