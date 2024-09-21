#include<stdio.h>

int main(){
    float p, r, t;
    printf("enter principal amount : ");
    scanf("%f", &p);

    printf("enter rate of return :");
    scanf("%f", &r);

    printf("enter time :");
    scanf("%f", &t);

    float SI;
    SI = (p * r * t)/100;

    printf("your Simpl Interest is %.2f", SI);
    return 0;
}