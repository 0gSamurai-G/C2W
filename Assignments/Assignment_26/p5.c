#include<stdio.h>
void main(){

        int size,min,max;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        int arr[size];
        printf("Enter the array elements:\n");
        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);
        }min=arr[0];
        max=arr[0];
        for(int i=1;i<size;i++){

                if(arr[i]>max) max=arr[i];                                                                                                                                         if(arr[i]<min) min=arr[i];
        }int range=max-min;
        for(int i=0;(i<size && i<range);i++){

                printf("|%d|",arr[i]);
        }
        printf("\n");
        if(range>size) printf("Not enough size!\n");

}