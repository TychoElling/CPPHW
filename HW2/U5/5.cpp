#include <math.h>
#include <cstdlib>
#include <iostream>
bool in_circle (double x, double y){
    return (sqrt(x*x+y*y) < 1);
}
double get_random_number (){
    return (rand()%1000000)/1000000.0;
}
int main(){
    int in_circle_count = 0;
    int total = 0;
    for (int i = 0; i < 5000000; i ++){
        double x = get_random_number();
        double y = get_random_number();
        if (in_circle(x,y) == 1){
            in_circle_count += 1;
        }
        total += 1;
    }
    double a = 4 * (in_circle_count/double(total));
    std::cout << a << "\n";
}