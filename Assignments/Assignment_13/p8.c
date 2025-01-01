#include<stdio.h>
void main(){

        int row,count=0;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=row;i>0;i--){

                for(int j=1;j<=i;j++){

                        printf("%d\t",(count+j));
                }
                printf("\n\n");
                count++;
        }
}
