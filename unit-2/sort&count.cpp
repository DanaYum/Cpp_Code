#include <stdio.h>

void findFrequency(int* arr, int size) {
    // Sort the array in ascending order using bubble sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Initialize variables to keep track of unique elements and their counts
    int uniqueCount = 0;
    int currentElement = arr[0];
    int currentCount = 1;

    // Iterate through the sorted array to find and print frequencies
    for (int i = 1; i < size; i++) {
        if (arr[i] == currentElement) {
            // If the current element is the same as the previous one, increment the count
            currentCount++;
        } else {
            // If the current element is different, print the previous element's frequency
            printf("%d - %d time(s)\n", currentElement, currentCount);

            // Update currentElement and reset currentCount
            currentElement = arr[i];
            currentCount = 1;

            // Increment the count of unique elements
            //uniqueCount++;
        }
    }

    // Print the frequency of the last unique element
    printf("%d - %d time(s)\n", currentElement, currentCount);
}

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findFrequency(arr, size);

    return 0;
}
