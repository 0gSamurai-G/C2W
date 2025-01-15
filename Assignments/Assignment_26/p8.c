#include<stdio.h>
void main(){

        int size,num,temp;
        printf("Enter the size of array:\n ");                                                                                                                                                                         scanf("%d",&size);
        int arr[size];
        printf("Enter the array elemnts:\n");
        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);
        }printf("Enter a number:\n");
        scanf("%d",&num);
        for(int i=0;i<size;i++){

                for(int j=0;j<size-1;j++){
                        if(arr[j+1]<arr[j]){

                                temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;
                        }
                }

        }for(int i=0;i<size;i++){

                printf("|%d|",arr[i]);
        }printf("\n");
        if(num<size){

                printf("Required number:%d\n",arr[num-1]);
        }else{

                printf("Number greater or equal to size!\n");
        }
}