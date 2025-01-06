#include<stdio.h>
void main(){

        int size,min,max;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        printf("Enter the elements of array:\n");
        int arr[size];
        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);
        }min=arr[0];
        max=arr[0];
        for(int i=1;i<size;i++){

                if(arr[i]>max) max=arr[i];                                                                                        if(arr[i]<min) min=arr[i];                                                                                }printf("\nMax element: %d \nMin element: %d\n",max,min);
}