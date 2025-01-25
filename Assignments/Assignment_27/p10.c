#include<stdio.h>

void cube(int size,int arr[size]){

                for(int i=0;i<size;i++){

                        printf("|%d|",(arr[i]*arr[i]*arr[i]));
                }printf("\n");
}

void main(){

        int size;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);
        }
        cube(size,arr);
}
