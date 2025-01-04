#include<stdio.h>
void main(){

        int row,count =1;
        printf("Enter the no of rows :\n");
        scanf("%d",&row);
        for(int i=row;i>0;i--){

                for(int j=i;j>0;j--){

                        printf("%d\t",count);
                }printf("\n\n");
                count++;
        }
}
