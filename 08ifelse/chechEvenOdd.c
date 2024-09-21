#include<stdio.h>

int main(){
    int a;
    printf("enter a number :");
    scanf("%d", &a);

    if( (a % 2) == 0){
        printf(" %d is a even number", a);
    }
    else{
        printf("%d is a odd number", a);
    }

    return 0;
}