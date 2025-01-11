#include<stdio.h>
void main(){

        int row,col,sum=0;
        printf("Enter the no. of rows and columns of 2D array:\n");
        scanf("%d%d",&row,&col);
        int arr[row][col];
        printf("Enter the 2D array elements:\n");
        for(int i=0;i<row;i++){

                for(int j=0;j<col;j++){

                        scanf("%d",&arr[i][j]);
                        if((arr[i][j])%2==0) sum+=arr[i][j];
                }
        }printf("\nSum: %d\n",sum);
}