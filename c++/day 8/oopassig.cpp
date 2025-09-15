#include <iostream>
using namespace std;

class Student
{
public:
    int roll_no;
    int dob;
    int total_marks;

    void input();
    void display();
};

void Student::input()
{
    cout << "Enter Roll No: ";
    cin >> roll_no;
    cout << "Enter Date of Birth (MMDD): ";
    cin >> dob;
    cout << "Enter Total Marks: ";
    cin >> total_marks;
}

void Student::display()
{
    cout << "Roll No: " << roll_no
         << ", DOB: " << dob
         << ", Total Marks: " << total_marks << endl;
}

int main()
{
    int n;
    cout << "Enter No. of Students:";
    cin >> n;
    Student students[n];

    cout << "Enter data for " << n << " students:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].input();
    }

    cout << "\nDisplaying student data :\n";
    for (int i = 0; i < n; i++)
    {
        students[i].display();
    }

    return 0;
}
