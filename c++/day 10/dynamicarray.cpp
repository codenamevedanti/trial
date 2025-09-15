#include <iostream>
using namespace std;
class Student
{
    int rollno;
    char name[20];

public:
    void accept()
    {
        cin >> rollno;
        cin >> name;
    }

    void display()
    {
        cout << "The name of the student is "
             << name << " and his roll no is "
             << rollno << endl;
    }
};

int main()
{
    int i, n;
    cout << "Enter no of students  \n";
    cin >> n;

    Student *ptr = new Student[n];
    cout << "Accept Details \n";
    for (i = 0; i < n; i++)
        ptr[i].accept();
    cout << "display details \n";
    for (i = 0; i < n; i++)
        ptr[i].display();
}