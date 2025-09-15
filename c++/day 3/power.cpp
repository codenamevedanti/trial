#include <iostream>
using namespace std;
int main() {
    int base, exponent;
    int power = 1; 
   cout << "Enter the base: ";
    cin >> base;

   cout << "Enter the exponent: ";
    cin >> exponent;

    if (exponent < 0) {
        cout << "Error: The exponent cannot be negative." << endl;
        return 1; 
    }

    if (exponent == 0) {
        power = 1;
    } else {
        for (int i = 0; i < exponent; ++i) {
            power *= base;
        }
    }

  cout << base << " raised to the power of " << exponent << " is: " << power << endl;

    return 0;
}