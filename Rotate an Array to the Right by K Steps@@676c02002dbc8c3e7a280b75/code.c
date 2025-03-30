#include <stdio.h>

int main() {
    int n, k;
    
    // Read the number of elements in the array
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read the number of steps to rotate
    scanf("%d", &k);
    
    // Normalize k in case it's greater than n
    k = k % n;
    
    // Temporary array to store rotated elements
    int temp[n];
    
    // For each element in the original array, calculate its new position
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    
    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    
    printf("\n");
    return 0;
}