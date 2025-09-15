// progranm using local and global variable

#include <iostream>
using namespace std;
void show();
int x = 23;
int main()
{
    int x = 20;
    cout << x << endl;
    x++;
    show();
    cout << x << endl;
    return 0;
}
void show()
{
    cout << x << endl;
    int x = 15;
    cout << x << endl;
    x++;
    cout << x << endl;
}
