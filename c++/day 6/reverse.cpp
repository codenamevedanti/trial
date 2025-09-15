#include <iostream>
using namespace std;

int main()
{

    int totalchar = 0;
    char str[20];
    cout << "Enter the string:";
    cin >> str;

    char *string1 = str;
    char *temp = string1;

    while (*temp != 0)
    {
        totalchar = totalchar + 1;
        temp++;
    }

    cout << "the reversed string is: \n";
    for (int i = totalchar - 1; i >= 0; i--)
    {
        cout << " " << *(string1 + i);
    }
    return 0;
}