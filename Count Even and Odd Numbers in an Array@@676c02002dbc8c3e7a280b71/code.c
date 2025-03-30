#include <stdio.h>

int main() {
    int N;
    // Read the number of elements in the array
    scanf("%d", &N);
    
    int even_count = 0, odd_count = 0;
    int arr[N];
    
    // Read the array elements and count even and odd numbers
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }
    
    // Print the count of even numbers followed by the count of odd numbers
    printf("%d %d\n", even_count, odd_count);
    
    return 0;
}
