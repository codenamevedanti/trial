#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "enter the number of rows:";
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            cout << " * ";
        }
    }

    for (i = 0; i >= n; i--)

    {
        // for (j = 0; j < n; j--)

        cout << " ";
    }
}