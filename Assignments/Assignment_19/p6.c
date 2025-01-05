#include<stdio.h>
void main(){

        int size;
        printf("Enter the size of array :\n");
        scanf("%d",&size);
        int arr[size],arr1[size];
        for(int i=0;i<size;i++){

                int temp,sum=0;
                printf("Enter the arr element %d: ",i+1);
                scanf("%d",&arr[i]);
                temp=arr[i];
                while(temp>0){

                        sum+=(temp%10);
                        temp/=10;
                }arr1[i]=sum;
        }printf("Sum of digits :\n");
        for(int i=0;i<size;i++){

                printf("%d\n",arr1[i]);
        }
}
