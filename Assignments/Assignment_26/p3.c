#include<stdio.h>
void main(){

        int size1,size2,size3,num;
        printf("Enter the size of array 1&2:\n");
        scanf("%d%d",&size1,&size2);
        int arr1[size1],arr2[size2];
        (size1>size2) ? (size3=size1) : (size3=size2);
        int arr3[size3];
        printf("Enter the array 1 elements:\n");
        for(int i=0;i<size1;i++){

                scanf("%d",&arr1[i]);
                if(size1>size2){

                        arr3[i]=arr1[i];
                }
        }printf("Enter the array 2 elements:\n");
        for(int i=0;i<size2;i++){

                scanf("%d",&arr2[i]);
                if(size2>size1){

                        arr3[i]=arr2[i];
                }
        }size2>size1 ? (num=size1):(num=size2);

        for(int i=0;i<size3;i++){

                if(i>=num){
                        arr3[i]=0;
                }else if(size2>size1){

                        arr3[i]=arr1[i];
                }else{
                        arr3[i]=arr2[i];
                }
        }for(int i=0;i<size3;i++){

                (size2>size1) ? (printf("|%d|",arr2[i]-arr3[i])):(printf("|%d|",arr1[i]-arr3[i]));
        }printf("\n");
}
