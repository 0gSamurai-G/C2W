#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=1;i<=row;i++){

                int num=i;
                for(int j=1;j<=i;j++){

                        num*=j;
                        printf("%d\t",num);
                }printf("\n\n");
        }
}
