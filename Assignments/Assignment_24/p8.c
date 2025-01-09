#include<stdio.h>
void main(){

        int row,col,sum=0;
        printf("Enter the no. of rows and columnsof 2D array:\n");
        scanf("%d%d",&row,&col);
        int arr[row][col],space=row-1;
        printf("Enter the 2D array elements:\n");
        for(int i=0;i<row;i++){

                for(int j=0;j<col;j++){

                        scanf("%d",&arr[i][j]);
                }
        }for(int i=0;i<row;i++){

                sum+=arr[i][space];
                space--;
        }printf("Sum: %d",sum);
}