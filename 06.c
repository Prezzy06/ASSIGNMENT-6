// 6. Write a program to calculate factorial of a number

#include<stdio.h>
int main(){
    int N;
    printf("\n");
    scanf("%d",&N);
    int factorial = 1;

    while(N!=0){
        factorial = (factorial*N);
        N--;
    }
    printf("Factorial is %d\n",factorial);
    printf("\n");
}