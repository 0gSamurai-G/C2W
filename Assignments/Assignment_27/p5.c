#include<stdio.h>

int isPrime(int num){

        for(int i=2;i<num;i++){

                if(num%i==0) return 0;
        }return 1;
}

void main(){

        int num;
        printf("Enter a number:\n");
        scanf("%d",&num);
        if(isPrime(num)){

                printf("%d is a prime number\n",num);
        }else{printf("%d is a composite number\n",num);}
}
