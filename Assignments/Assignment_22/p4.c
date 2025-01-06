#include<stdio.h>
void main(){

        int size,min;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        int arr[size];
        printf("Enter the arr elements:\n");
        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);
        }min=arr[0];
        for(int i=1;i<size;i++){

                if(arr[i]<min) min =arr[i];
        }printf("Minimum element : %d\n",min);
}
