// 10. Write a program to reverse a given number

#include<stdio.h>
int main(){
    int N;
    printf("\n");
    scanf("%d",&N);
    int rev = 0;

    while(N!=0){
        int digit = (N%10);
        rev = (rev*10) + digit;
        N = (N/10);
    }
    printf("Reverse number is %d\n",rev);
    printf("\n");
}