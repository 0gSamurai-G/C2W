#include<stdio.h>
void main(){

        int row,col,index=0,temp,sum=0;
        printf("Enter the no. of rows and columns of 2D array:\n");
        scanf("%d%d",&row,&col);
        int arr[row][col],arr1[row*col];
        printf("Enter the 2D array elements:\n");
        for(int i=0;i<row;i++){

                for(int j=0;j<col;j++){

                        scanf("%d",&arr[i][j]);
                        temp=arr[i][j];
                        sum=0;
                        while(temp>0){

                                sum+=temp%10;
                                temp/=10;
                        }arr1[index]=sum;                                                            index++;                                                             }                                                                    }for(int i=0;i<index;i++){

                printf("|%d|",arr1[i]);
        }printf("\n");

}