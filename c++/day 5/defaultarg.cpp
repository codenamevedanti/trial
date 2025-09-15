#include <iostream>
using namespace std;

void add(int a = 1, int b = 2, int c = 3, int d = 4)
{
    cout << "Addition is:" << a + b + c + d << endl;

    cout << "Multiplication is:" << a * b * c * d << endl;
}
int main()
{
    add();
    add(6, 7, 8);
    add(0, 0, 0);

    // mul();
    // mul(6, 7, 6);
}
