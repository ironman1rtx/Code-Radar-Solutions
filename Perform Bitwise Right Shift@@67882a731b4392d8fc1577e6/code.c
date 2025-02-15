#include <stdio.h>
int main(){
    int num, shift;
    scanf("%d %d", &num, &shift);
    int result = num >> shift;
    printf("%d", result);
    return 0;
}
