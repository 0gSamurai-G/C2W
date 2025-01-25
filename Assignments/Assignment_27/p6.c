#include<stdio.h>

int isPalindrome(int num){

        int temp=num,sum=0;
        while(temp>0){

                sum=(sum*10)+(temp%10);
                temp/=10;
        }if(num==sum){

                return 1;
        }else{return 0;}
}

void main(){

        int num;
        printf("Enter a number:\n");
        scanf("%d",&num);
        if(isPalindrome(num)){

                printf("%d is a palindrome number:\n",num);
        }else{printf("%d is not a palindrome number:\n",num);}
}
