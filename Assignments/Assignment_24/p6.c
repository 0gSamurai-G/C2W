#include<stdio.h>
void main(){

        int row,col,flag=0;
        printf("Enter the no. of rows and columns of 2D array:\n");
        scanf("%d%d",&row,&col);
        int arr[row][col];
        printf("Enter the 2D array elements:\n");
        for(int i=0;i<row;i++){

                for(int j=0;j<col;j++){

                        scanf("%d",&arr[i][j]);
                }
        }for(int i=0;i<row;i++){

                for(int j=0;j<col;j++){

                        if(arr[i][j]%3==0){

                                printf("|%d|",arr[i][j]);
                                flag=1;
                        }
                }
        }if(flag==0) printf("No elements found\n");
        printf("\n");
}