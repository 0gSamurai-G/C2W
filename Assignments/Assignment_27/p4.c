#include<stdio.h>

int isStrong(int num){

        int temp=num,sum=0,dig;
        while(temp>0){

                int fact=1;
                dig=temp%10;
                for(int i=2;i<=dig;i++){

                        fact*=i;
                }sum+=fact;
                temp/=10;
        }if(num == sum){

                return 1;
        }else{return 0;}
}

void main(){

        int num;
        printf("Enter a number:\n");
        scanf("%d",&num);
        if(isStrong(num)){

                printf("%d is a strong number\n",num);
        }else{printf("%d is not a strong number\n",num);}
}
