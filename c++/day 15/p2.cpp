#include <iostream>
using namespace std;

int main()
{
    int a[3][3];
    int i, j;
    int b[3][3];

    cout << "Enter the elements in array \n";
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Display the elements in array \n";
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Transpose of the matrix is \n";
    for (int j = 0; j <= 2; j++)
    {
        for (int i = 0; i <= 2; i++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Square of the matrix \n";
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << a[i][j] * a[i][j] << "\t";
        }
        cout << endl;
    }

    cout << " Inverse Square of the matrix \n";
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            b[3][3] = a[i][j] * a[j][i];
            cout << b[3][3] << "\t";
        }
        cout << endl;
    }

    return 0;
}
