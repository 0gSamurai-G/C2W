#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=0;i<row;i++){

                for(int j=0;j<row;j++){

                        printf("%c%d\t",(64+row),row);
                }
                printf("\n");
        }
}
