#include<stdio.h>
void main(){

        int row,num=1;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=1;i<=row;i++){

                for(int j=1;j<=i;j++){

                        printf("%d\t",num);
                        num+=2;
                }printf("\n\n");
        }
}
