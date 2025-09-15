#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[90];
    char str2[30];

    cout << "Enter a string";
    cin >> str1;

    strcpy(str2, str1);
    strrev(str1);
    // strcmp(str2, str1);

    if (strcmp(str1, str2))
        cout << "The entered string is a palindrome." << endl;
    else

        cout << "The sring is  not a palindrome." << endl;
}