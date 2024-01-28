
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int arr[n];
    for (int i = 0; i < n; i++) {
       cin >> arr[i];
    }

    int total = 0;
    int negative_index = -1;
    try {
        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                throw i; 
            }
            total += arr[i];
        }

        cout << "The sum is : " << total << std::endl;
    } catch (int index) {
        cout << "Negative number found at index " << index << endl;
        cout << "The sum is : " << total << endl;
    }

    return 0;
}


