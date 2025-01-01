#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=row;i>0;i--){

                for(int j=i;j>0;j--){

                        printf("%d\t",i);
                }printf("\n\n");
        }
}
