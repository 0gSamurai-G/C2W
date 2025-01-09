#include<stdio.h>
void main(){

        int row,col;
        printf("Enter the no. of rows and columns of 2D array:\n");
        scanf("%d%d",&row,&col);
        int arr[row][col];
        printf("Enter the 2D array elements:\n");
        for(int i=0;i<row;i++){

                for(int j=0;j<col;j++){

                        scanf("%d",&arr[i][j]);
                }
        }for(int i=0;i<row;i++){

                int sum=0;
                for(int j=0;j<col;j++){

                        sum+=arr[j][i];

                }printf("Sum of column %d: %d\n",i+1,sum);
        }
}