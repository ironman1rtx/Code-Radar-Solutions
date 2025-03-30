#include <stdio.h>

int main() {
    int n;
    // Read the number of elements in the array
    scanf("%d", &n);

    int arr[n];
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Flag to track if the array is sorted
    int isSorted = 1;

    // Check if the array is in non-decreasing order
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = 0;
            break;
        }
    }

    // Output based on the result
    if (isSorted)
        printf("Sorted");
    else
        printf("Not Sorted");

    return 0;
}