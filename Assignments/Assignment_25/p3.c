#include<stdio.h>
void main(){

        int row,col,num,flag=0;
        printf("Enter the no. of rows and columns of 2D array:\n");
        scanf("%d%d",&row,&col);
        int arr[row][col];                                                           printf("Enter the 2D array elements:\n");
        for(int i=0;i<row;i++){

                for(int j=0;j<col;j++){

                        scanf("%d",&arr[i][j]);
                }
        }printf("Enter a number to search:\n");
        scanf("%d",&num);
        for(int i=0;i<row;i++){

                for(int j=0;j<col;j++){

                        if(arr[i][j]==num){

                                printf("Element %d found at [%d][%d]\n",num,i,j);
                                flag=1;
                                break;
                        }
                }if(flag==1) break;
        }if(flag==0) printf("No match found!\n");
}