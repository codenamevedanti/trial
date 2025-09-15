#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter a number: "; 
    cin >> n;

    if (n <= 1) { 
        cout << "The number is not prime." << endl;
        return 0;
    }

    bool isPrime = true;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break; 
        }
    }

    if (isPrime) { 
       cout << "The number is prime." << endl;
    } else {
       cout << "The number is not prime." <<endl;
    }

    return 0;
}