#include <iostream>
using namespace std;
class A
{
    int a;
    int x;

public:
    A()
    {
        cout << "A's default constructor is called." << endl;
    }
    A(int q)
    {
        x = q;
        cout << "A's para constructor is called \n"
             << q << endl;
    }
    void display()
    {
        cout << x << endl;
    }
};

class B

{
    int b;

public:
    B()
    {
        cout << "B's default constructor is called." << endl;
    }
    B(int r)
    {
        cout << "B's parameterized constructor is called" << endl;
    }
};

class C : public B, public A

{
    int z;
    int x;

public:
    C(int p, int q) : A(p), B()
    {
        x = p;
        z = q;
        cout << "C's para Constructor :" << x << "\t" << z << endl;
    }
    void display()
    {
        A::display();
        cout << x << z << endl;
    }
};

int main()
{
    C c(10, 90);
    c.display();

    return 0;
}