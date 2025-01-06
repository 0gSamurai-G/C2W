#include<stdio.h>
void main(){

        int size,num,count=0;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        int arr[size];
        printf("Enter the arr elements:\n");
        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);
        }printf("Enter a number:\n");
        scanf("%d",&num);
        for(int i=0;i<size;i++){

                if(num==arr[i]) count++;
        }if(count>0){
                printf("\nFrequency of %d is %d\n",num,count);
        }else{

                printf("%d is not present in array\n",num);
        }
}
