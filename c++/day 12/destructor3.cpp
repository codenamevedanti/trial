
#include <iostream>
using namespace std;
static int Count = 0;
class Test
{
public:
    Test()
    {
        cout << this << endl;
        Count++;
        cout << "You are called in constructor: " << Count << endl;
    }
    ~Test()
    {
        cout << this << endl;
        cout << "You are called in destructor" << Count << endl;
        Count--;
    }
};
int main()
{
    Test t;
    cout << &t << endl;
    Test t1;
    cout << &t1 << endl;
    Test t2;
    cout << &t2 << endl;
}