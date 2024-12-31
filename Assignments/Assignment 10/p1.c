#include<stdio.h>
void main(){

        int size;
        int arr[size];
        printf("Enter the size of the array: \n");
        scanf("%d",&size);
        while(size<=0){

                printf("Enter the valid size for ana array :\n");
                scanf("%d",&size);
        }
        for(int i=0;i<size;i++){
                printf("Enter the element \n");
                scanf("%d",&arr[i]);
        }
        for(int i=size-1;i>=0;i--){
                printf("\n");
                printf("%d",arr[i]);
        }

}
