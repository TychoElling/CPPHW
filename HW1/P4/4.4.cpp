# include <iostream>

using namespace std;
int main ()
{
long number ;
cout << " Enter a number : ";
cin >> number ;
if (number<0){
    cout << "You typed a negitive number.\n";
    return 0;
}
long f;
f = 1;
for (int i = number; i != 0; i--){
    f *= i;
}
cout << "The factorial of " << number << " is " << f << "\n";
return 0;
}