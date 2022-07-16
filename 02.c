// 2. Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
int main(){
    int N;
    printf("\n");
    scanf("%d",&N);
    int sum = 0;

    while(N!=0){
        int num = 2*N;
        sum = sum + num;
        N--;
    }
    printf("sum is %d\n",sum);
    printf("\n");
}