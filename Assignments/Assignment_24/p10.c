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
        }printf("|%d|%d|%d|%d|\n",arr[0][0],arr[0][col-1],arr[row-1][0],arr[row-1][col-1]);

}