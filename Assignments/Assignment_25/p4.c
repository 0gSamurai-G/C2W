#include<stdio.h>
void main(){

        int row,col,sum=0,max,flag=1,count=0;
        printf("Enter the no. of rows and columns of 2D array:\n");
        scanf("%d%d",&row,&col);
        int arr[row][col],arr1[row];
        printf("Enter the 2D array elements:\n");
        for(int i=0;i<row;i++){

                sum=0;
                for(int j=0;j<col;j++){

                        scanf("%d",&arr[i][j]);
                        sum+=arr[i][j];
                }arr1[i]=sum;
        }max=arr1[0];
        for(int i=1;i<row;i++){

                if(arr1[0]==arr1[i]){                                        
                        flag=0;

                }if(arr1[i]>max) {
                        max=arr1[i];
                        count=i;
                }
        }if(flag==1){                                                                        printf("Max sum is found at  row %d: %d\n",count,max);
        }else{

                printf("Sum of all rows is same!\n");
        }
}