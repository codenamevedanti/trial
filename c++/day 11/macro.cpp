#include <iostream>
using namespace std;

#define MAXIMUM(a, b) (a > b) ? a : b
#define Minimum(p, q) (p < q) ? p : q
int main()
{
    cout << "Max (100, 1000):";
    int k = MAXIMUM(100, 1000);
    cout << k << endl;
    cout << "Max (20, 345):";
    int k1 = MAXIMUM(20, 0);
    cout << k1 << endl;

    cout << "Min (100, 1000):";

    int k2 = Minimum(100, 1000);
    cout << k2 << endl;
    cout << "Min (20, 987):";
    int k3 = Minimum(20, 987);
    cout << k3;
    return 0;
}