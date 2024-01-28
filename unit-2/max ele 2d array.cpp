#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Get the size of the array
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Create a 2D array
    int array[100][100];

    // Get the values for the array
    cout << "Enter the values for the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> array[i][j];
        }
    }
    cout << " the values of the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout<< array[i][j]<<"\t";
        }
        cout<<"\n";
    }

    // Find the largest number in the array
    int largest = array[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] > largest) {
                largest = array[i][j];
            }
        }
    }

    // Print the largest number
    cout << "The largest number in the array is: " << largest << endl;

    return 0;
}