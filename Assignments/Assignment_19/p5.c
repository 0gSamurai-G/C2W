#include<stdio.h>
void main(){

        int size;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        int arr[size],arr1[size];
        for(int i=0;i<size;i++){

                int sum=0,temp;
                printf("Enter the arr element %d :",i+1);
                scanf("%d",&arr[i]);
                temp=arr[i];
                while(temp>0){

                        temp=temp/10;
                        sum++;
                }arr1[i]=sum;
        }
        for(int i=0;i<size;i++){

                printf("%d\n",arr1[i]);
        }
}
