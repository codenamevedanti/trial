#include <iostream>
using namespace std;

int main() {
    const int SIZE = 2;
    int A[SIZE][SIZE] = {{1, 2}, {3, 4}};
    int B[SIZE][SIZE] = {{5, 6}, {7, 8}};
    int C[SIZE][SIZE];

    
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            *(*(C + i) + j) = 0;
            for (int k = 0; k < SIZE; ++k) {
                *(*(C + i) + j) += *(*(A + i) + k) * *(*(B + k) + j);
            }
        }
    }

   
    cout << "Matrix C:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
