// no of times constructors and destructors called.

#include <iostream>
using namespace std;
static int Count = 0;
class Trial
{
public:
    Trial()
    {
    
    cout<< "You are called in constructor: \n"<<Count<<endl;
    Count++;
        
    }

    ~Trial()
    {
 cout<< "You are called in destructor: \n"<<Count<<endl;
    Count--;
    }
};

int main()
{
    Trial c, c1, c2, c3, c4, c5, c6;
}