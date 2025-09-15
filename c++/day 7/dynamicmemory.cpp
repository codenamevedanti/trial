#include <iostream>
using namespace std;

int main()
{

    int n;
    char m;
    int sum = 0;
    float average;
    cout << "Enter no. of subjects: \n";
    cin >> n;
    cout << "Enter no. of Character: \n";
    cin >> m;
    int *p_marks = new int[n];
    char *p_name = new char[m + 1];
    cout << "Enter Marks of subject \n";

    for (int i = 0; i < n; i++)
    {
        cin >> p_marks[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + p_marks[i];
    }

    average = (float)sum / n;
    cout << "Enter name \n";
    cin >> p_name;
    cout << "name of the student is " << p_name << endl;
    cout << "Average is" << average << endl;
}