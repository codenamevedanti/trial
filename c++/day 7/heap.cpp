#include <iostream>
using namespace std;

class Student
{
    int roll_no;
    int id;

public:
    void accept()
    {
        cout << "Enter roll no.\n";
        cin >> roll_no;
        cout << "Enter ID :\n";
        cin >> id;
    }

    void display()
    {
        cout << " roll no is : "<< roll_no<<endl;
        cout << " id "<< id<<endl;
    }
};
int main()
{
    int n;
    cout << "Enter no. of student: \n";
    cin >> n;
    Student *name = new Student[n];

    for (int i = 0; i < n; i++)
    {
        (name + i)->accept();
    }

    for (int i = 0; i < n; i++)
    {
        (name + i)->display();
    }
    return 0;
}
