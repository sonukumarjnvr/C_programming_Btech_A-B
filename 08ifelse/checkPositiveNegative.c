#include<stdio.h>

int main(){
    int a;
    printf("enter a number : ");
    scanf("%d", &a);

    if(a >= 0){
        printf("your number is positive");
    }
    else{
        printf("your number is negative");
    }

    return 0;
}