#include<stdio.h>
void main(){

        int row,count=1;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=1;i<=row;i++){

                for(int j=1;j<=row;j++){

                        printf("%d\t",(count*j));
                }
                count+=row;
                printf("\n\n");
        }
}
