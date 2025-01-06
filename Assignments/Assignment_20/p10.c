#include<stdio.h>
void main(){

        int size1,size2,count=0;
        printf("Enter size1: ");
        scanf("%d",&size1);
        printf("Enter size2: ");
        scanf("%d",&size2);
        int arr1[size1],arr2[size2],temp[size1];
        printf("Enter the arr1 elements:\n");
        for(int i=0;i<size1;i++){

                scanf("%d",&arr1[i]);
                temp[i]=arr1[i];
        }printf("Enter the arr2 elements:\n");
        for(int i=0;i<size2;i++){

                scanf("%d",&arr2[i]);
        }for(int i=(size2-1);i>=0;i--){

                arr1[count]=arr2[i];
                count++;
        }count=0;
        for(int i=(size1-1);i>=0;i--){

                arr2[count]=temp[i];
                count++;
        }printf("Array 1 after swap:\n");
        for(int i=0;i<size1;i++){

                printf("%d|",arr1[i]);
        }printf("\nArray2 after swap:\n");
        for(int i=0;i<size2;i++){

                printf("%d|",arr2[i]);
        }printf("\n");
}
