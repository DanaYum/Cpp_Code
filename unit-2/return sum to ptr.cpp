#include <iostream>
using namespace std;
int* performArithmetic(int num1, int num2) {
    int* result =new int(num1 + num2); // Dynamically allocate memory for the result
    return result;
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    int* arithmeticResult = performArithmetic(num1, num2);
    
    // Print the sum
    cout << "Sum: " << *arithmeticResult <<endl;
    
    // Simulate the dangling pointer issue by mistakenly deleting the memory
    delete arithmeticResult;
    
    // Attempting to access the deleted memory will cause a dangling pointer
    cout << "Dangling pointer test: ";
    cout << *arithmeticResult << endl; // This will cause an issue
    
    return 0;
}
