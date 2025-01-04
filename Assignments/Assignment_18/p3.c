#include<stdio.h>
void main(){

        int row,alp=65;
        printf("Enter the no of rows :\n");
        scanf("%d",&row);
        for(int i=row;i>0;i--){

                for(int j=i;j>0;j--){

                        printf("%c\t",alp);
                }printf("\n\n");
                alp++;
        }
}
