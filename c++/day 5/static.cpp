#include <iostream>
using namespace std;

void demo()
{
    static int i = 1, sum = 0;
    sum = sum + i;
    i++;
    cout << "The sum is " << sum << endl;
}

int main()
{
    int n;
    cout << "Enter the number\n ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        demo();
    }
}