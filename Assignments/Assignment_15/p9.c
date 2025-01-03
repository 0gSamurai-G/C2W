#include<stdio.h>
void main(){

        int row,space=0;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=1;i<=row;i++){

                int alp=64+row;
                for(int j=1;j<=row;j++){

                        if(space>=j){

                                printf("\t");
                        }else{

                                printf("%c\t",alp);
                                alp--;
                        }
                }printf("\n\n");
                space++;
        }
}
