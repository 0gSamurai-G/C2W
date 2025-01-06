#include<stdio.h>
void main(){

        int size,num,flag=0;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        int arr[size];
        printf("Enter the array elements:\n");
        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);
        }printf("Enter a number:\n");
        scanf("%d",&num);
        for(int i=0;i<size;i++){

                for(int j=0;j<size;j++){

                        if((arr[i]+arr[j])==num){

                                printf("Index : %d and index : %d \n",i,j);
                                flag=1;

                        }if(flag==1) break;
                }if(flag==1) break;
        }
}
