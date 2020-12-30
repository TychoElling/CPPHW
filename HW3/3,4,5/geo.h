#include <cmath>
double sidelen (x1,y1,x2,y2){
    return sqrt(double((x2-x1)*(x2-x1) + (y1-y2)*(y1-y2)));
}
class Point{
    private:
        int x, y;
    public:
        void Point::setXY (int nx = 0, int ny = 0) {
            int x = nx;
            int y = ny;
        }
        void Point::setX (int nx = 0){
            int x = nx;
        }
        void Point::setY (int ny = 0){
            int y = ny;
        }z v xb,
        int Point::getX (){
            return x
        }
        int Point:: getY (){
            return y
        }
};
class PointArray{
    private:
        int l;
        new int arr[l];
        void PointArray::resize (int size, int add[] = {}){
            point newarr[];
            for (int i = 0; i < size; i++){
                if (i + 1 > l){
                    newarr[i] = add[l-i];
                }
                else{
                    newarr[i] = arr[i];
                }
            }
            Point arr[] = newarr;
        }
    public:
        void PointArray::make_empty (){
            Point arr[0] = {};
            int l = 0;
        }
        void PointArray::create (Point point_array[], int l){
            Point arr[l];
            for (int i = 0; i < l; i++){
                arr[i] = point_array[i];
            }
        }
        Point* PointArray::copy (int array_[],int(l)){
            Point new_array[l];
            for (int i = 0; i < l; i++){
                new_array[i] = array_[i];
            }
            return new_array;
        }
        void PointArray::del (){
            delete(arr)
            delete(l)
        }
        void PointArray::add_point(Point p){
            Point new_array[l+1];
            for (int i = 0; i < l+1;i++){
                if (i == l){
                    new_array[i] = p;
                }
                else{
                    new_array[i] = arr[i];
                }
            }
            arr = new_array;
            l++;
        }
        void PointArray::insert (Point p, int ind){
            Point new_array[];
            int shift = 1;
            for (int i = 0; i < l + 1; i++){
                if (i == ind){
                    shift = 0;
                    new_array[i] = p;
                }
                else{
                    if (shift == 0){
                        new_array[i] = arr[i-1];
                    }
                    else {
                        new_array[i] = arr[i];
                    }
                }
            }
            arr = new_array;
            l++;
        }
        void PointArray::remove (Point p, int ind){
            Point new_array[];
            int shift = 1;
            for (int i = 0; i < l - 1; i++){
                if (i == ind){
                    shift = 0;
                }
                else{
                    if (shift == 0){
                        new_array[i] = arr[i+1];
                    }
                    else {
                        new_array[i] = arr[i];
                    }
                }
            }
            arr = new_array;
            l--;
        }
        const int PointArray::get_size (){
            return l;
        }
        void PointArray::clear () {
            Point arr[0] = {};
            int l = 0;
        }
        Point* PointArray::get_pointer (int ind){
            if (l < ind + 1){
                return nullptr;
            }
            return *arr[ind];
        }
};
class Polgon {
    private:
        int sides;
        PointArray points;
        int number;
    public:
        void Polgon::create(PointArray point_arr, int size){
            PointArray points = point_arr;
            int sides = size;
            number += 1;
        }
        double Polgon::area (){
            int add = 0;
            int sub = 0;
            for (int i = 0; i < size; i++){
                Point point = points[i];
                Points follow = points[(i+1)%sides];
                add += point.getX * follow.getY;
                sub += point.getY * follow.getX;
            return abs((0.5)*(a-b));
            }
        }
        int Polgon::get_number_polygons (){
            return number;
        }
        int Polgon::get_num_sides (){
            return sides;
        }
        PointArray* Polgon::get_points (){
            return points;
        }
};
class Rectangle {
    private:
        int l, w;
    public:
        void Rectangle::make_rectangle(Point blp, Point trp, Point brp, Point tlp){
            Point bl = blp;
            Point tr = trp;
            Point br = brp;
            Point tl = tlp;
        }
        void Rectangle::make (Point blp, Point trp){
            Point bl = blp;
            Point tr = trp;
            Point br;
            br.setX(bl.getX);
            br.setY(tr.getY);
            Point tl;
            tl.setX(tl.getX);
            tl.setY(bl.getY);
        }
        double Rectanglearea (){
            return l*double(w);
        }
};
class Triangle {
    private:
        Point p1;
        Point p2;
        Point p3;
    public:
        void Triangle::make (Point pt1, Point pt2, Point pt3){
            p1 = pt1;
            p2 = pt2;
            p3 = pt3;
        }
        double Triangle::area (){
            double a = sidelen(p1.getX,p1.getY,p2.getX,p2,getY);
            double b = sidelen(p2.getX,p3.getY,p2.getX,p2,getY);
            double c = sidelen(p1.getX,p1.getY,p3.getX,p3,getY);
            double s = (a+b+c)/(2.0);
            return sqrt(s*(s+a)*(s+b)*(s*c));
        }
};