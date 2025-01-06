#include<stdio.h>
void main(){

        int size,count=0;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        int arr[size],arr1[count];
        printf("Enter the array elements:\n");
        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);

        }printf("\n");
        for(int i=0;i<size;i++){

                if(i==arr[i]){

                        printf("%d\n",arr[i]);
                        count++;
                }
        }if(count==0) printf("%d \nNo match found\n",count);
}
