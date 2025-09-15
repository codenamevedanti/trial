// swap without using third variables

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the values of a and b";
    cin >> a >> b;

    a = a - b;
    b = a + b;
    a = b - a;

    cout << "The value after swapping is: \n" << a << "\n"
         << b << endl;
}