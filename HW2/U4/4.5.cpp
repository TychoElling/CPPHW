#include <iostream>


double sum (const int arr[], int l, double s = 0){
    if (l == 0){
        return s;
    }
    return sum(arr,l-1,s+arr[l-1]);
};

int main (){
    int arr[4] = {1,2,3,4};
    std::cout << sum (arr,4) << "\n";
}