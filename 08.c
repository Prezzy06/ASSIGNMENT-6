// 8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
int main(){
    int N;
    printf("\n");
    scanf("%d",&N);
    int i = 2;

    while(i<N){
        if(N%i==0){
            printf("%d is not prime.\n",N);
            break;
        }
        i++;
    }    
    if(i==N){
        printf("%d is prime.\n",N);
    }
    printf("\n");
}