#include <iostream>
using namespace std;
int main()
{
    int num;
    int sum = 0;

    cout << "Enter the number:" << endl;
    cin >> num;
    while (num != 0){
         int rem = num % 10;
        num = num / 10;
    sum = sum+(rem*rem*rem);
    }
    cout << "the sum is:" << sum << endl;

    
}