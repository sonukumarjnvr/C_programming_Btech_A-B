#include<stdio.h>

int main(){
    int N;
    printf("enter a number to print Natual number : ");
    scanf("%d", &N);

    for(int i=1; i<=N; i++){
        printf("%d ", i);
    }

    return 0;
}