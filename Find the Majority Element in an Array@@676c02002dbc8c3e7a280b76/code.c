#include <stdio.h>

int main() {
    int n;
    // Read the size of the array
    scanf("%d", &n);

    int arr[n];
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int majorityElement = -1; // Default output if no majority element
    for (int i = 0; i < n; i++) {
        int count = 0;
        // Count occurrences of arr[i]
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        // Check if this element is the majority element
        if (count > n / 2) {
            majorityElement = arr[i];
            break; // No need to check further once the majority element is found
        }
    }

    printf("%d\n", majorityElement);
    return 0;
}