#include <stdio.h>

int main() {
    int n;
    // Read the number of elements
    scanf("%d", &n);
    
    int arr[n];
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // If the array contains only one element, it's the peak by definition
    if (n == 1) {
        printf("%d\n", arr[0]);
        return 0;
    }
    
    // Check if the first element is a peak
    if (arr[0] > arr[1]) {
        printf("%d\n", arr[0]);
        return 0;
    }
    
    // Check the middle elements for the first peak
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d\n", arr[i]);
            return 0;
        }
    }
    
    // Check if the last element is a peak
    if (arr[n - 1] > arr[n - 2]) {
        printf("%d\n", arr[n - 1]);
        return 0;
    }
    
    // If no peak element is found, print -1
    printf("-1\n");
    return 0;
}