#include "geometry.h"
#include "math.h"

Point rec_arr[4];
Point* rectangle_array (Point p1, Point p2, Point p3, Point p4){
    rec_arr[0] = p1;
    rec_arr[1] = p2;
    rec_arr[2] = p3;
    rec_arr[3] = p4;
    return rec_arr;
}
Point tri_arr[3];
Point* triangle_array (Point p1, Point p2, Point p3){
    tri_arr[0] = p1;
    tri_arr[1] = p2;
    tri_arr[2] = p3;
    return tri_arr;
}

double length (Point p1, Point p2){
    int x1 = p1.getX();
    int y1 = p1.getY();
    int x2 = p2.getX();
    int y2 = p2.getY();
    int dx = x1 - x2;
    int dy = y1 - y2;
    return sqrt(dx*dx + dy*dy);
}

PointArray::PointArray(const Point points[], const int size){
    arr = new Point[size];
    len = size;
    for (int i = 0; i < size; ++i){
        arr[i] = points[i];
    }
}

PointArray::PointArray(const PointArray& pv){
    len = pv.len;
    arr = new Point[len];
    for (int i = 0; i < len; ++i){
        arr[i] = pv.arr[i];
    }
}

void PointArray::resize(int n){
    Point* new_arr = new Point[n];
    for (int i = 0; i < n; ++i){
        if (i == len){
            break;
        }
        new_arr[i] = arr[i];
    }
    delete[] arr;
    arr = new_arr;
    len = n;
}

void PointArray::push_back (const Point &p){
    resize(len+1);
    arr[len-1] = p;
}
void PointArray::insert(const int position, const Point & p){
    resize(len+1);
    for (int i = len - 1; i > position; --i){
        arr[i] = arr[i-1];
    }
    arr[position] = p;
}

void PointArray::remove (const int pos){
    for (int i = pos; i < len - 1; ++i){
        arr[i] = arr[i+1];
    }
    resize(len - 1);
}
int Polygon::total = 0;


Polygon::Polygon(Point points[], int sides) 
 : arr(points, sides) {
    total += 1;

    /*

    // First create foo with default constructor, then
    // copy using assignment (operator=)
    Foo foo;
    foo = bar;

    // Create foo with a copy of bar, using the
    // copy constructor ( Foo(const Foo&) )
    Foo foo = bar;
    */
}

Polygon::Polygon(PointArray points):arr(points){
    total += 1;  
}

double Polygon::area (){
    int add = 0;
    int sub = 0;
    for (int i = 0; i < arr.getSize(); ++i){
        Point point = arr.getInd(i);
        Point follow = arr.getInd((i+1)%(arr.getSize()));
        add += point.getX() * follow.getY();
        sub += point.getY() * follow.getX();
    }
    return abs((1/2.0) * (add-sub));
}


Rectangle::Rectangle(Point p1, Point p2, Point p3, Point p4):Polygon(rectangle_array(p1,p2,p3,p4),4){}
Rectangle::Rectangle(Point bl, Point tr) :
Polygon(rectangle_array(
    bl,
    Point(tr.getX(),bl.getY()),
    tr,
    Point(bl.getX(),tr.getY())),4) {}
Rectangle::Rectangle(int blxp, int blyp , int trxp, int tryp):
Polygon(rectangle_array(
    Point(blxp, blyp),
    Point(trxp, blyp),
    Point(trxp, tryp),
    Point(blxp, tryp)
),4
){}


double Rectangle::area(){
    int l = arr.getInd(2).getX() - arr.getInd(0).getX();
    int w = arr.getInd(2).getY() - arr.getInd(0).getY();
    return double(l) * double(w);

    //return length(arr.getInd(1), arr.getInd(0)) *
    //       length(arr.getInd(2), arr.getInd(1));
}

Triangle::Triangle (Point p1, Point p2, Point p3) : Polygon(triangle_array(p1,p2,p3),3){}

double Triangle::area (){
    Point a = arr.getInd(0);
    Point b = arr.getInd(1);
    Point c = arr.getInd(2);
    double s1 = length(a,b);
    double s2 = length(a,c);
    double s3 = length(b,c);
    double s = (s1+s2+s3) / 2.0;
    return sqrt(s*(s-s1)*(s-s2)*(s-s3));
}