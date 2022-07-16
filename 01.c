// 1. Write a program to calculate sum of first N natural numbers

#include<stdio.h>
int main(){
    int N;
    printf("\n");
    scanf("%d",&N);
    int sum = 0;

    while(N!=0){
        sum = sum + N;
        N--;
    }

    printf("sum is %d\n",sum);
    printf("\n");
}