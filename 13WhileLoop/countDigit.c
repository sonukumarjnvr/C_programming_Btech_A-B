#include<stdio.h>

int main(){
    int num;
    printf("enter a number to count digits : ");
    scanf("%d",&num);

    int count = 0;
    while(num > 0){
        num = num / 10;
        count++;
    }
    printf("number of digits =  %d", count);
    
    return 0;
}