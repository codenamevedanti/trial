#include <iostream>
using namespace std;

class Employees
{

    int id;
    char name[30];
    int salary;

public:
    void getdata();
    void putdata();
};

void Employees ::getdata()
{
    cout << "Enter the id :";
    cin >> id;
    cout << "Enter name :";
    cin >> name;
    cout << "Enter Salary :";
    cin >> salary;
}

void Employees::putdata()
{
    cout << id << " ";
    cout << name << " ";
    cout << salary << " ";
    cout << endl;
}

int main()
{
    Employees e[30];
    int n, i;
            cout <<"Enter number of employees :";
            cin>>n; 
            
    for (i = 0; i < n; i++)
    {
        (e + i)->getdata();
    }
    cout << "Employee data :" << endl;
    for (i = 0; i < n; i++)
    {
        (e + i)->putdata();
    }
}
