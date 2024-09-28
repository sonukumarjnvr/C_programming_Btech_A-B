#include<stdio.h>

int main(){
    int num;
    printf("enter a number to count digits : ");
    scanf("%d",&num);

    while(num > 0){
        int r = num % 10;
        printf("%d ", r);
        num = num / 10;
    }
    
    return 0;
}