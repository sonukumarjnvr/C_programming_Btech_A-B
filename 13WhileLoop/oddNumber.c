#include<stdio.h>

int main(){
    int N;
    printf("enter a number to print odd numbers : ");
    scanf("%d", &N);

    int i=1;
    while(i<=N){
        if(i % 2 != 0){
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}