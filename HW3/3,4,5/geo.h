class Point{
    private:
        int x, y;
    public:
        void setXY (int nx = 0, int ny = 0) {
            int x = nx;
            int y = ny;
        }
        void setX (int nx = 0){
            int x = nx;
        }
        void setY (int ny = 0){
            int y = ny;
        }
        int getX (){
            return x
        }
        int getY (){
            return y
        }
};
class PointArray{
    private:
        int len;
        Point arr[len];
    public:
        void marr (){
            Point arr[0] = {};
        }
        void change_array (Point parr, int l){
            Point arr[l] = parr;
        }
        void del (Point arr){
            delete arr 
        }
}