#include<stdio.h>
void main(){

        int row,count=1;
        printf("Enter the n oof rows : \n");
        scanf("%d",&row);
        for(int i=1;i<=row;i++){

                for(int j=1;j<=row;j++){

                        if(count==10){

                                count=1;
                        }
                        printf("%d\t",count);
                        count++;
                }printf("\n\n");

        }
}
