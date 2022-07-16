// 3. Write a program to calculate sum of first N odd natural numbers

#include<stdio.h>
int main(){
    int N;
    printf("\n");
    scanf("%d",&N);
    int sum = 0;

    while(N!=0){
        int num = (N*2) - 1;
        sum = sum + num;
        N--;
    }
    printf("sum is %d\n",sum);
    printf("\n");
}