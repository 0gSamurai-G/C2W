#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        int space=row-1,alp=64+row;
        for(int i=1;i<=row;i++){

                alp=64+row-i+1;
                for(int j=1;j<=row;j++){

                        if(j<=space){

                                printf("\t");
                        }else{

                                printf("%c\t",alp);
                                alp++;
                        }
                }space--;
                printf("\n\n");
        }
}
