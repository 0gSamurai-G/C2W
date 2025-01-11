#include<stdio.h>
void main(){                                                   
        int row,col,index=0;                                           printf("Enter the no. of rows and columns of 2D array:\n");
        scanf("%d%d",&row,&col);                                       int arr[row][col],arr1[(row*col)-4];
        printf("Enter the 2D array elements:\n");
        for(int i=0;i<row;i++){
                                                                               for(int j=0;j<col;j++){

                        scanf("%d",&arr[i][j]);                                        if(((i==0)&&(j==0))||((i==0)&&(j==col-1))||((i==row-1)&&(j==0))||((i==row-1)&&(j==col-1))){
                        }else{

                                arr1[index]=arr[i][j];                                         index++;                                               }                                                      }
        }for(int i=0;i<index;i++){
                                                                                       printf("|%d|",arr1[i]);
                }printf("\n");

}