#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows:\n");
        scanf("%d",&row);
        int space=row-1,num=65;
        for(int i=1;i<=row;i++){

                for(int j=1;j<=row;j++){

                        if(j<=space){

                                printf("\t");
                        }else{

                                printf("%c\t",num);
                                num++;
                        }
                }printf("\n\n");
                space--;
        }
}
