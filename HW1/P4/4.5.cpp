# include <iostream>

using namespace std;
int main ()
{
int f0 = 1;
int f1 = 1;
int f2 = 2;
int f3 = 6;
int f4 = 24;
int f5 = 120;
int f6 = 720;
int f7 = 5040;
int f8 = 40320;
int f9 = 362880;
int f10 = 3628800;
long number ;
cout << " Enter a number : ";
cin >> number ;
if (number<0){
    cout << "You typed a negitive number.\n";
    return 0;
}
if (number == 0){
    cout << "The factorial of " << number << " is " << f0 << "\n";
    return 0;
}
if (number == 1){
    cout << "The factorial of " << number << " is " << f1 << "\n";
    return 0;
}
if (number == 2){
    cout << "The factorial of " << number << " is " << f2 << "\n";
    return 0;
}
if (number == 3){
    cout << "The factorial of " << number << " is " << f3 << "\n";
    return 0;
}
if (number == 4){
    cout << "The factorial of " << number << " is " << f4 << "\n";
    return 0;
}
if (number == 5){
    cout << "The factorial of " << number << " is " << f5 << "\n";
    return 0;
}
if (number == 6){
    cout << "The factorial of " << number << " is " << f6 << "\n";
    return 0;
}
if (number == 7){
    cout << "The factorial of " << number << " is " << f7 << "\n";
    return 0;
}
if (number == 8){
    cout << "The factorial of " << number << " is " << f8 << "\n";
    return 0;
}
if (number == 9){
    cout << "The factorial of " << number << " is " << f9 << "\n";
    return 0;
}
if (number == 10){
    cout << "The factorial of " << number << " is " << f10 << "\n";
    return 0;
}
long f;
f = f10;
for (int i = number; i != 10; i--){
    f *= i;
}
cout << "The factorial of " << number << " is " << f << "\n";
return 0;
}