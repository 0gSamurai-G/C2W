#include<stdio.h>

int isArmstrong(int num){

        int temp=num,count=0,sum=0,dig;
        while(temp>0){

                count++;
                temp/=10;
        }temp=num;
        while(temp>0){

                dig=temp%10;
                int num1=dig;
                for(int i=0;i<count-1;i++){

                        num1*=dig;
                }sum+=num1;
                temp/=10;
        }if(num==sum){

                return 1;
        }else{return 0;}
}

void main(){

        int num;
        printf("Enter a number:\n");
        scanf("%d",&num);
        if(isArmstrong(num)){

                printf("%d is an armstrong number\n",num);
        }else{printf("%d is not an armstrong number\n",num);}

}
