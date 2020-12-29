# include <iostream>

void reverse (int arr){
    for (int i = 0; i <= sizeof(arr)/2; i ++){
        int a = sizeof(arr) - i;
        int temp = arr[i];
        arr[i] = arr[a];
        arr[a] = temp;
    }
}

int main(){
    return 0
}