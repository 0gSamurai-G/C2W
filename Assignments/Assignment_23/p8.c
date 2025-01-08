#include<stdio.h>
void main(){

        int size,temp,correct=1;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        while(correct){

                if((size<=0)||(size==size/0)){

                        printf("Invalid input!\nRenter the size of array:\n");
                        getchar();
                        scanf("%d",&size);
                }else{correct=0;}
        }
        int arr[size];
        printf("Enter the array elements:\n");
        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);                                                                                                                                                                                                        }printf("Elements :\n");
        for(int i=0;i<size;i++){

                int sum=0,dig=0;
                temp=arr[i];
                while(temp>0){

                        dig=temp%10;
                        if(dig==0){

                                dig=5;
                        }sum=(dig)+(sum*10);
                        temp/=10;

                }temp=sum,sum=0,dig=0;
                while(temp>0){

                        dig=temp%10;
                        sum=(sum*10)+dig;
                        temp/=10;
                }printf("%d\n",sum);
        }
}