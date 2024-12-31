#include<stdio.h>
void main(){

        int size,sum=0;
        printf("Enter thre size of an array: \n");
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++){

                printf("Enter the element: \n");
                scanf("%d",&arr[i]);
        }
        for(int i=0;i<size;i++){
                sum+=(arr[i]*arr[i]);
        }
        printf("Sum of all elements in array: %d:\n",sum);
}
