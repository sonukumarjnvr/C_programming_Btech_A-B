#include<stdio.h>

int main(){
    int n;
    printf("enter a number to find factorial : ");
    scanf("%d",&n);

    int product = 1;
    for(int i=1; i<=n; i++){
        product *= i;
    }
    printf("factorial of %d is %d", n, product);

    return 0;
}