#include<stdio.h>
void main(){

        int size,max;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        int arr[size];
        printf("Enter the arr elements:\n");
        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);
        }max=arr[0];
        for(int i=1;i<size;i++){

                if(arr[i]>max) max=arr[i];
        }printf("\nThe largest number is : %d\n",max);
}
