#include <iostream>
using namespace std;

int main()
{
    int a[3][3];

    cout << "Accept elements\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> *(*(a + i) + j); 
        }
    }

    cout << "Display elements\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << *(*(a + i) + j) << "\t"; 
        }
        cout << "\n";
    }

    cout << "The transpose of Matrix is\n";
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << *(*(a + i) + j) << "\t";
        }
        cout << "\n";
    }

    return 0;
}
