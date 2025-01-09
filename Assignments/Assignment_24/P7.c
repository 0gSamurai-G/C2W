#include<stdio.h>
void main(){

        int row,col,sum=1;
        printf("Enter the no. of rows and columns of 2D array:\n");
        scanf("%d%d",&row,&col);
        int arr[row][col];
        printf("Enter the 2D array elements:\n");
        for(int i=0;i<row;i++){

                for(int j=0;j<col;j++){

                        scanf("%d",&arr[i][j]);
                        if(i==j){

                                sum*=arr[i][j];
                        }
                }
        }printf("Product:%d\n",sum);
}