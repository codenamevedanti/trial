#include <iostream>
using namespace std;

int main()
{
    int a[5], b[5];
    int i;
    cout << "Enter elements of an array";

    for (i = 0; i <= 4; i++)
        cin >> *(a + i);

    for (i = 0; i <= 4; i++)
        *(b + i) = *(a + i);
    cout << "dispaly the elements:";
    for (i = 0; i < 4; i++)
        cout << *(b + i) << endl;
}