#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=1;i<=row;i++){

                for(int j=0;j<i;j++){

                        printf("%c\t",(64+i+j));
                }
                printf("\n\n");
        }
}
