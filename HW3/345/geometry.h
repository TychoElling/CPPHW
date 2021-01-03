class Point{
    private:
        int x,y;
    public:
        Point(int x_ = 0, int y_ = 0) : x(x_),y(y_) {}
        int getX() const {return x;}
        int getY() const {return y;}
        void setX (const int new_x) {x = new_x;}
        void setY (const int new_y) {y = new_y;}
};




class PointArray {
    private:
        int len;
        Point* arr;
        void resize (int n);
    public:
        PointArray() {len = 0; arr = new Point[0];}
        PointArray(const Point points[], const int size);
        PointArray(const PointArray& pv);
        ~PointArray() {delete[] arr;}

        void push_back (const Point &p);
        void insert(const int position, const Point & p);
        void remove (const int pos);
        const int getSize() const {return len;}
        void clear() {resize(0);}
        Point* get(const int position) {return &arr[position];}
        const Point* get(const int position) const {return &arr[position];}
        Point getInd (int index){ return arr[index];}
};

class Polygon{
    protected:
        PointArray arr;
        static int total;
    public:
        Polygon(Point points[], int sides);
        Polygon(PointArray points);
        static int getNumPolygons(){return total;}
        int getNumSides(){return arr.getSize();}
        const PointArray* getPoints() {return &arr;}
        virtual double area();
        
};

class Rectangle : public Polygon{
     
    public:
        Rectangle(Point p1, Point p2, Point p3, Point p4);
        Rectangle(Point bottom_left, Point top_right);
        Rectangle(int blxp, int blyp , int trxp, int tryp);
        virtual double area();
};

class Triangle : public Polygon{
    public:
        Triangle(Point p1, Point p2, Point p3);
        virtual double area();
};