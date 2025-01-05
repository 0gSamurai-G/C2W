#include<stdio.h>
void main(){

        int size,index;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++){

                printf("Enter the arr element %d : ",i+1);
                scanf("%d",&arr[i]);
        }printf("Enter the index to search\n");
        scanf("%d",&index);
        if(index>=size) {
                printf("The index is greater than the size of array\n");
        }else{

                printf("The element at the index %d : %d\n",index,arr[index]);
        }
}
