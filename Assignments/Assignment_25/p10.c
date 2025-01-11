#include<stdio.h>                                                            void main(){

        int row,col,index=0,temp,sum=0;
        printf("Enter the no. of rows and columns of 2D array:\n");
        scanf("%d%d",&row,&col);
        int arr[row][col],arr1[row*col];
        printf("Enter the 2D array elements:\n");
        for(int i=0;i<row;i++){
                                                                                             for(int j=0;j<col;j++){

                        scanf("%d",&arr[i][j]);
                }
        }for(int i=0;i<row;i++){

                for(int j=0;j<col;j++){

                        sum=0;
                        temp=arr[i][j];
                        while(temp>0){

                                sum=(sum*10)+(temp%10);
                                temp/=10;
                        }if(sum==arr[i][j]){

                                printf("|%d|",arr[i][j]);
                        }
                }
        }printf("\n");
}