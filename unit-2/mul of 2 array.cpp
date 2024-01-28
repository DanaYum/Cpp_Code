#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Define the size of the square matrix
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    // Create two square matrices
    int matrix1[n][n];
    int matrix2[n][n];
    cout << "Enter the values for the first matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter the values for the second matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Initialize the product matrix with zeros
    int product[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            product[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the product matrix
    cout << "The product of the two matrices is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
