// swap using reference
#include <iostream>
using namespace std;
int main()
{
    int a = 100;
    int &b = a;
    int &c = b;

    cout << a << b << c;
    c = 200;
    cout << a << b << c;
}