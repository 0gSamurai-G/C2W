#include<stdio.h>
void main(){

        int size;
        printf("Enter the size of arr1 and arr2 : \n");
        scanf("%d",&size);
        int arr1[size],arr2[size],temp[size];
        for(int i=0;i<size;i++){

                printf("Enter the arr1 element %d : ",i+1);
                scanf("%d",&arr1[i]);
                temp[i]=arr1[i];
        }
        for(int i=0;i<size;i++){
                printf("Enter the arr2 element %d : ",i+1);
                scanf("%d",&arr2[i]);
                arr1[i]=arr2[i];
                arr2[i]=temp[i];
        }
        for(int i=0;i<size;i++){

                printf("%d\t\t%d\n",arr1[i],arr2[i]);
        }
}
