#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        int space=row-1;
        for(int i=1;i<=row;i++){

                int num=1;
                for(int j=1;j<=row;j++){

                        if(j<=space){

                                printf("\t");
                        }else{

                                printf("%d\t",(row*num));
                                num++;
                        }
                }printf("\n\n");
                space--;
        }
}
