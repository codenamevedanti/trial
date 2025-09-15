#include <iostream>
using namespace std;

int main()
{
    int a1[3][3];
    int a2[3][3];
    int arr[3][3];

    cout << "Accept elements \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> *(*(a1 + i) + j);
        }
    }

    cout << "Display of Matrix1 elements\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << *(*(a1 + i) + j) << "\t";
        }
        cout << "\n";
    }
    cout << "Accept elements \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> *(*(a2 + i) + j);
        }
    }

    cout << "Display of Matrix2 is\n";
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << *(*(a2 + i) + j) << "\t";
        }
        cout << "\n";
    }

    cout << "The product of two matrices are : \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[3][3] = (*(a1 + i) + j) * (*(a2 + i) + j);
            //*(*(arr + i) + j) += *(*(a1 + i) + k) * *(*(a2 + k) + j)
            cout << arr << endl;
        }
    }

    return 0;
}
