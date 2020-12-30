#include <iostream>
using namespace std;

void print_array( int arr[], int l){
    for (int i = 0; i < l-1; i++){
        cout << arr[i] << ", ";
    }
    cout << arr[l - 1] << "\n";
}  

int main(){
    int arr[4] = {1,2,3,4};
    print_array(arr,4);
}