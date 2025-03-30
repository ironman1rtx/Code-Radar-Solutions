#include <stdio.h>

int main() {
    int n;
    // Read the number of elements in the array
    scanf("%d", &n);

    // If less than 2 elements, there is no second largest
    if(n < 2) {
        printf("-1");
        return 0;
    }
    
    int arr[n];
    // Read the array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize the largest with the first element.
    // We'll use a flag to know if a valid second largest element has been found.
    int max = arr[0];
    int second;
    int secondFound = 0;  // 0 means false, 1 means true

    // Process the array starting from the second element.
    for(int i = 1; i < n; i++){
        if(arr[i] > max) {
            // When current element is greater than max,
            // update second to previous max and update max.
            second = max;
            max = arr[i];
            secondFound = 1;
        } else if(arr[i] < max) {
            // Only consider arr[i] if it is less than max.
            // If no second largest has been found yet, or if this arr[i]
            // is larger than the current second largest, update it.
            if(!secondFound || arr[i] > second) {
                second = arr[i];
                secondFound = 1;
            }
        }
    }
    
    // If a second largest element was found, print it; otherwise, print -1.
    if(secondFound)
        printf("%d", second);
    else
        printf("-1");
    
    return 0;
}