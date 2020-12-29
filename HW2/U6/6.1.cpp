#include <iostream>
using namespace std
void print_array( int arr){
    for (int i = 0; i < sizeof(arr); i++){
        cout << arr[i] << "\n";
    }
}  

int main(){
    return 0
}