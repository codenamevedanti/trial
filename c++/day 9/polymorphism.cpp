#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void display()
    {
        cout << "You are in main class" << endl;
    }
};

class Circle : public Shape
{
private:
    int radius;

public:
    Circle(int r)
    {
        radius = r;
    }

    void display() override
    {
        cout << "This is a circle with the radius: " << radius << endl;
    }
};

class Rectangle : public Shape
{
private:
    int length, breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void display() override
    {
        cout << "The length and breadth of a rectangle is: " << length << " " << breadth << endl;
    }
};

int main()
{
    Circle c1(8);
    Rectangle r1(4, 7);

    Shape *ptr = &c1;
    ptr->display();

    ptr = &r1;
    ptr->display();

    return 0;
}
