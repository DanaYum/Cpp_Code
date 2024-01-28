#include <iostream>
using namespace std;

// Function to calculate the binomial coefficient (n choose k)
unsigned long long int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }

    unsigned long long int result = 1;

    if (k > n - k) {
        k = n - k;
    }

    for (int i = 0; i < k; i++) {
        result *= (n - i);
        result /= (i + 1);
    }

    return result;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    unsigned long long int sum = 0;

    for (int k = 0; k <= N; k++) {
        sum += binomialCoefficient(N, k);
    }

    cout << "Sum of binomial coefficients up to " << N << " = " << sum << endl;

    return 0;
}
