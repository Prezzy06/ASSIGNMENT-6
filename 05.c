// 5. Write a program to calculate sum of cubes of first N natural numbers

#include<stdio.h>
int main(){
    int N;
    printf("\n");
    scanf("%d",&N);
    int sum = 0;

    while(N!=0){
        int cube = (N*N*N);
        sum = sum + cube;
        N--;
    }
    printf("sum is %d\n",sum);
    printf("\n");
}