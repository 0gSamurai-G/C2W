#include<stdio.h>
void main(){

        int size1,size2,count=0;
        printf("Enter the size of arr1:\n");
        scanf("%d",&size1);
        int arr1[size1];
        printf("Enter the arr1 elements:\n");
        for(int i=0;i<size1;i++){

                scanf("%d",&arr1[i]);
        }printf("Enter the size of arr2:\n");
        scanf("%d",&size2);
        int arr2[size2],arr3[count];
        printf("Enter the arr2 elements:\n");
        for(int i=0;i<size2;i++){

                scanf("%d",&arr2[i]);
                for(int j=0;j<size1;j++){

                        if(arr1[j]==arr2[i]){

                                count++;
                                arr3[count-1]=arr2[i];
                        }
                }
        }printf("\nCommon elements:\n");
        for(int i=0;i<count;i++){

                printf("%d\n",arr3[i]);
        }
}
