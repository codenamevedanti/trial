// implementation of private,public and protected access specifiers

#include <iostream>
using namespace std;

class vehicle
{
public:
    int engine = 1;

private:
    int brakes = 2;

protected:
    int acc = 3;
};

class car : public vehicle
{
public:
    float getcarmodel(float n)
    {
        return n;
    }
};
int main()
{
    car c1;

    cout << "Color = " << c1.getcarmodel(2.1) << endl;
    cout << "Engine = " << c1.engine << endl;
}
