#include <iostream>

template <typename T>
T min(const T a, const T b){
    return a < b ? a : b;
}

int main(){

    int a = 14;
    int b = 15;
    std::cout << min<float>(14.0,15.0) << std::endl;
}