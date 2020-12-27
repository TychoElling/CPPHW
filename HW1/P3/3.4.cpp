#include <iostream>
using namespace std;

int main() {
    while(true){
        int n;
        cin >> n;
        if (n<0){
            break;
        }
        int r;
        r = n%5 == 0 ? n/5 : -1;
        if (r != -1){
            cout << r << '\n';
        }
    }
    cout << "Goodbye!\n";
}