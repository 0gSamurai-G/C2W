#include<stdio.h>
void main(){

        int size,num,found=0;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++){

                printf("Enter the arr element %d : ",i+1);
                scanf("%d",&arr[i]);
        }printf("Enter a number to search:\n");
        scanf("%d",&num);
        for(int i=0;i<size;i++){

                if(num==arr[i]){

                        printf("The search element is found at index %d \n",i);
                        found++;
                        break;
                }
        }if(found==0) printf("The search element is not found in array\n");
}
