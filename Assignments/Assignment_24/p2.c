#include<stdio.h>
void main(){

        int row,col,sum=0;
        printf("Enter the no. of rows and columns of 2D array:\n");
        scanf("%d%d",&row,&col);
        int arr[row][col];
        printf("Enter the elements of 2D array:\n");
        for(int i=0;i<row;i++){

                for(int j=0;j<col;j++){

                        scanf("%d",&arr[i][j]);
                        sum+=arr[i][j];
                }
        }printf("Sum of 2d array: %d\n",sum);
}