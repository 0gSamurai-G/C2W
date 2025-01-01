#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=row;i>0;i--){
                int alp=64+row;
                for(int j=1;j<=i;j++){
                        printf("%c\t",alp);
                        alp--;
                }printf("\n\n");
        }
}
