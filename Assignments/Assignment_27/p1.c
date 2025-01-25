#include<stdio.h>
int factorial(int num){

        int fact=1;
        for(int i=1;i<=num;i++){

                fact*=i;
        }return fact;
}

void main(){

        int num;
        printf("Enter a number:\n");
        scanf("%d",&num);
        printf("Factorial of %d is: %d\n",num,factorial(num));
}
