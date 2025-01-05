#include<stdio.h>
void main(){

        int size;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        int arr[size],arr1[size];
        for(int i=0;i<size;i++){

                int fact=1;
                printf("Enter the arr element %d : ",i+1);
                scanf("%d",&arr[i]);
                for(int j=2;j<=(arr[i]);j++){

                        fact*=j;
                }arr1[i]=fact;
        }printf("Factorials : \n");
        for(int i=0;i<size;i++){

                printf("%d\n",arr1[i]);
        }
}
