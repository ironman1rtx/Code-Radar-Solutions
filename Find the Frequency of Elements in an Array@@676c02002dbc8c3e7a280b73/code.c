#include <stdio.h>

int main() {
    int N;
    // Read the number of elements in the array
    scanf("%d", &N);
    
    int arr[N];
    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Create an array to keep track of frequencies.
    // Initialize all positions with -1 for now.
    int freq[N];
    for (int i = 0; i < N; i++) {
        freq[i] = -1;
    }
    
    // Process each element to calculate its frequency.
    for (int i = 0; i < N; i++) {
        int count = 1;
        for (int j = i + 1; j < N; j++) {
            // If duplicate found, increase count and mark frequency at that position as 0
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // This marks that the element at index j is already counted.
            }
        }
        // If this element hasn't been counted as a duplicate, save its frequency.
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }
    
    // Print the unique elements and their frequencies.
    for (int i = 0; i < N; i++) {
        if (freq[i] != 0) {
            printf("%d %d\n", arr[i], freq[i]);
        }
    }
    
    return 0;
}