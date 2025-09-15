 #include <iostream>
using namespace std;

class Add
{
    int a, b;
    int sum = 0;

public:
    void accept()
    {
        cout << "Enter two numbers to add: ";
        cin >> a >> b;
    }

    void Sum()
    {
        sum = a + b;
    }

    void display()
    {
        cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
    }
};

class Product
{
    int x, y;
    int mul = 1;

public:
    void accept()
    {
        cout << "Enter two numbers to multiply: ";
        cin >> x >> y;
    }

    void Multiply()
    {
        mul = x * y;
    }

    void display()
    {
        cout << "The product of " << x << " and " << y << " is: " << mul << endl;
    }
};

class Maths : public Add, public Product
{
public:
    void getdata()
    {
        Add::accept();
        Add::Sum();
        Product::accept();
        Product::Multiply();
    }

    void display()
    {
        Add::display();
        Product::display();
    }
};

int main()
{
    Maths m;
    m.getdata();
    m.display();
    return 0;
}



   
   