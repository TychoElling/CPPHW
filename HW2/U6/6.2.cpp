# include <iostream>
using namespace std;
void reverse (int arr[], int l){
    for (int i = 0; i <= l/2; i ++){
        int a = l - i;
        int temp = arr[i];
        arr[i] = arr[a];
        arr[a] = temp;
    }
}
void print_array( int arr[], int l){
    for (int i = 0; i < l-1; i++){
        cout << arr[i] << ", ";
    }
    cout << arr[l - 1] << "\n";
}  
int main(){
    int arr[4] = {1,2,3,4};
    reverse(arr,4);
    cout << print_array(arr);
}