#include <iostream>
using namespace std;
void user_strcpy(char *, char *);
int main()
{
    char str1[20];
    char str2[50];
    cout << "Enter string 1 :";
    cin >> str1;
    user_strcpy(str2, str1);
    cout << "Copied string is:" << str2 << endl;
}

void user_strcpy(char *s1, char *s2)
{

    while (*s2 != '\0')
    {

        *s1 = *s2;
        s1++;
        s2++;
    }

    *s1 = '\0';
}
