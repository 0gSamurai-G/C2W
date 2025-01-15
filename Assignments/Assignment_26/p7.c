#include<stdio.h>
void main(){

        int size1,size2,num,count=0;
        printf("Enter the size of array 1&2:\n");
        scanf("%d%d",&size1,&size2);
        int arr1[size1],arr2[size2];
        printf("Enter a sorted array1:\n");
        for(int i=0;i<size1;i++){

                scanf("%d",&arr1[i]);                                                                                                                                      }printf("Enter the sorted array2:\n");
        for(int i=0;i<size2;i++){

                scanf("%d",&arr2[i]);
        }printf("Enter a number:\n");
        scanf("%d",&num);
        for(int i=0;i<size1;i++){

                for(int j=0;j<size2;j++){

                        if(arr1[i]+arr2[j]==num){

                                printf("%d = %d+%d\n",num,arr1[i],arr2[j]);
                                count++;
                        }
                }
        }printf("Count of pairs:%d\n",count);
}