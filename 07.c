// 7. Write a program to count digits in a given number

#include<stdio.h>
int main(){
    int N;
    printf("\n");
    scanf("%d",&N);
    int digit = 0;

    while(N!=0){
        N = (N/10);
        digit++;
    }    
    printf("No. of digits is/are %d\n",digit);
    printf("\n");
}