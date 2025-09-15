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
    cout << "Enter Date of Birth (DDMMYYYY): ";
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
    Student *ptr = new Student[n];

    cout << "Enter data for " << n << " students:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << ":\n";
        ptr[i].input();
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ptr[i].roll_no > ptr[j].roll_no)
            {

                Student temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }

    cout << "\nDisplaying student data sorted by Roll No:\n";
    for (int i = 0; i < n; i++)
    {
        ptr[i].display();
    }

    return 0;
}
