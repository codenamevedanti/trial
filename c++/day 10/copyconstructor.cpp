#include <iostream>
#include <cstring>
using namespace std;

class Demo {
    int len;
    char *ptr;

public:

    Demo(const char *s)
     {
        len = strlen(s);
        ptr = new char[len + 1];
        strcpy(ptr, s);
    }

   
    Demo(const Demo &s) 
    {
        len = s.len;
        ptr = new char[len + 1];
        strcpy(ptr, s.ptr);
    }

    
    ~Demo()
     {
        delete[] ptr;
    }

   
    void show() const
     {
        cout << "String: " << ptr << endl;
    }
};

int main()
 {
    Demo d1("Google");
    Demo d2(d1);

    d1.show();
    d2.show();

    return 0;
}
