#include<stdio.h>

int main(){

    int a, b;
    printf("enter first number a :");
    scanf("%d",&a);

    printf("enter second number b :");
    scanf("%d",&b);

    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("after swapping values are: a : %d and b : %d\n",a,b);

    return 0;
}