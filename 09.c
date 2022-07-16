// 9. Write a program to calculate LCM of two numbers

#include<stdio.h>
int main(){
    int a,b;
    printf("\nEnter two numbers:\n");
    scanf("%d%d",&a,&b);
    int num1 = a;
    int num2 = b;

    int gcd,rem;
    while(rem!=0){
        rem = (a%b);
        if(rem==0){
            gcd = b;
            break;
        }
        a = b;
        b = rem;
    }

    int lcm = (num1*num2)/gcd;
    printf("lcm of %d and %d is %d\n",num1,num2,lcm);
    printf("\n");
}