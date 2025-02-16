#include <stdio.h>

int main() {
    char a;
    scanf("%d", &a);
    
    if(a=='a','e','i','o','u'){
        printf("Vowel");
    }else if(a!='a','e','i','o','u'){
        printf("Consonant");
    }else{
        printf("Special Character");
    }
    
    return 0;
}
