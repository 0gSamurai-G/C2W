#include<stdio.h>
void main(){

        int size,num;
        printf("Enter the size of array: \n");
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++){

                printf("Enter the arr element %d :",i+1);
                scanf("%d",&arr[i]);
        }num=arr[0];
        for(int i=1;i<size;i++){

                if(arr[i]>num){

                        num=arr[i];
                }else{

                        printf("This is not an increasing array\n");
                        break;
                }
        }if(num==arr[size-1]) printf("This is an increasing array\n");
}