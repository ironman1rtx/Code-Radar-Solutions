#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a);
    if(a<0){
        printf("Negative");
    }else if(a==0){
        printf("Zero");
    }else{
        printf("Positive");
    }
}