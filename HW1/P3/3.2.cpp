#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int s;
    s = 0;
    int minn;
    minn = 1000000;
    int maxn;
    maxn = -1000000;
    for (int i = 0; i <= N; i++) {
        int a;
        cin >> a;
        if (a <= minn){
            minn = a;
        }
        if (a >= maxn){
            maxn = a;
        }
        s += a;
    }
    int A;
    A = s/N;
    cout << A << "\n";
    cout << maxn << "\n";
    cout << minn << "\n";
    cout << maxn-maxn << "\n";
}