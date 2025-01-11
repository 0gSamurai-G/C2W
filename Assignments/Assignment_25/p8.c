#include<stdio.h>
int sum=0;
int prime(int num){

        int flag;
        for(int i=2;i<num;i++){

                if(num%i!=0){

                        flag=1;                                                              }else{                                                                               flag=0;                                                                      break;
                }
        }if(flag==1) sum+=num;
}
void main(){
                                                                                     int row,col;                                                                 printf("Enter the no. of rows and columns of 2D array:\n");                  scanf("%d%d",&row,&col);                                                     int arr[row][col];
        printf("Enter the 2D array elements:\n");
        for(int i=0;i<row;i++){

                for(int j=0;j<col;j++){

                        scanf("%d",&arr[i][j]);
                        prime(arr[i][j]);
                }
        }printf("Sum of prime numbers: %d\n",sum);
}