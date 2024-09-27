#include<stdio.h>

int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);

    printf("Multiplication table of %d is\n", n);
    for(int i=1; i<=10; i++){
        printf("%d * %d = %d\n", n, i, n*i);
    }
    
    return 0;
}