#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=1;i<=row;i++){

                int alp=96+i;
                for(int j=1;j<=i;j++){

                        printf("%c\t",alp);
                        alp--;
                }printf("\n\n");
        }
}
