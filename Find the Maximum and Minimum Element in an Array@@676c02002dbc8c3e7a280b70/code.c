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
    
    // Initialize min and max with the first element of the array
    int min = arr[0];
    int max = arr[0];
    
    // Loop through the array starting from the second element
    for (int i = 1; i < N; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    // Output the minimum and maximum elements
    printf("%d %d\n", min, max);
    
    return 0;
}
