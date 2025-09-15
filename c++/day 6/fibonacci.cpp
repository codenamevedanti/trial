#include <iostream>
using namespace std;
int main()
{
    int n;
    int a = 1, b = 0, c = 0;
    cout << "enter the number of elements: \n";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << "the value is:" << b << endl;
    }
}