#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    float arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    void* ptr = &arr[0];
    void* ptr1 = &arr[0];

    for (int i = 0; i < n; i++) {
        if (*(float*)ptr < *(float*)ptr1) {
            ptr1 =ptr;
        }
        ptr = (float*)ptr + 1;
    }

    cout << "Smallest element: " << *((float*)ptr1) << endl;
    return 0;
}
