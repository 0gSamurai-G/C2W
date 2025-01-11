#include<stdio.h>
void main(){

        int row,col,sum=0,max,flag=1,index=0;
        printf("Enter the no. of rows and columns of 2D array:\n");
        scanf("%d%d",&row,&col);
        int arr[row][col],arr1[col];
        printf("Enter the 2D array elements:\n");
        for(int i=0;i<row;i++){

                sum=0;
                for(int j=0;j<col;j++){

                        scanf("%d",&arr[j][i]);
                        sum+=arr[j][i];
                }arr1[i]=sum;
        }max=arr1[0];
        for(int i=1;i<col;i++){

                if(arr1[0]==arr1[i]){

                        flag=0;
                }else{flag=1;}
                if(arr1[i]>max){

                        max=arr1[i];
                        index=i;
                }
        }if(flag==0){

                printf("Sum of all columns is same!\n");
        }else{

                printf("Max sum is found at column %d:%d\n",index+1,max);
        }

}