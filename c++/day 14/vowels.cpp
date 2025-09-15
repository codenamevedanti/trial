#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[30];

    char *ptr = str1;
    int space = 0, vowel = 0, cnt = 0;
    cout << "Please enter a string \n";
    gets(str1);
    puts(str1);

    while (*ptr != '\0')
    {
        if (*ptr == 32)
            space++;
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')

            vowel++;
        cnt++;
        ptr++;
    }

    cout << "No of Characters are:" << cnt << endl;
    cout << "No of spaces:" << space << endl;
    cout << "No of words:" << space + 1 << endl;
    cout << "No of vowels:" << vowel << endl;
}