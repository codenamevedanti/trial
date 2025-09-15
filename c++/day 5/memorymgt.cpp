#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "enter a number of elemnts: \n";
    cin >> n;

    int *arr = new int[n];
    cout << "accept the elements";
    for (i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }
    cout << "display the elements: \n";
    for (i = 0; i <= n; i++)
    {
        cout << arr[i] << endl;
    }

    delete[] arr;
}