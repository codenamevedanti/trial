#include <iostream>
#include <cmath>
using namespace std;

int main()
{
     int a;
     int b;
     double num;
     double answer;
     cout << "Enter a number: " << endl;
     cin >> a;

     num = sqrt(a);
     cout << "the square root of a is:" << num << endl;

     cout << "Enter the exponent : " << endl;
     cin >> b;

     answer = pow(a, b);
     cout << "The power of number is :" << answer;
     return 0;
}
