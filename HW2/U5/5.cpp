#include <math.h>
#include <cstdlib>
#include <iostream>
bool inc (float x, float y){
    return (sqrt(x*x+y*y) < 1);
}
float grn (){
    return (rand()%1000000)/1000000.0;
}
int main(){
    int icc = 0;
    int t = 0;
    for (int i = 0; i < 1000000; i ++){
        float x = grn();
        float y = grn();
        if (inc(x,y) == 1){
            icc += 1;
        }
        t += 1;
    }
    float a = 4 * (icc/float(t));
    std::cout << a << "\n";
}