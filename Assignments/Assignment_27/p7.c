#include<stdio.h>

int isDuck(int num){

        int temp=num,count=0,dig,flag=0;
        while(temp>0){

                dig=temp%10;
                if(count==0 && dig==0){

                        return 0;
                }if(count!=0 && dig==0) flag=1;
                temp/=10;
                count++;
        }if(flag==1) return 1;
}

void main(){

        int num;
        printf("Enter a number:\n");
        scanf("%d",&num);
        if(isDuck(num)){

                printf("%d is a duck number\n",num);
        }else{printf("%d is not a duck number\n",num);}
}
