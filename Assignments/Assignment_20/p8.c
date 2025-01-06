#include<stdio.h>
void main(){

        int size,num,flag=0;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        int arr[size];
        printf("Enter the elements:\n");
        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);

        }num=arr[0];
        for(int i=1;i<size;i++){

                if(arr[i]<num){

                        flag=1;
                }else{

                        flag=0;
                        break;
                }
        }if(flag==1){

                printf("This is a decreasing array\n");
        }else{

                printf("This is not a decreasing array\n");
        }
}
