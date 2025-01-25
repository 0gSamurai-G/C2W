#include<stdio.h>

int isHarshad(int num){

        int temp=num,sum=0;
        while(temp>0){

                sum+=temp%10;
                temp/=10;
        }if(num%sum==0){

                return 1;
        }else{return 0;}
}

void main(){

        int num;
        printf("Enter a number:\n");
        scanf("%d",&num);
        if(isHarshad(num)){

                printf("%d is a  harshad number\n",num);
        }else{printf("%d is not a harshad number\n",num);}
}
