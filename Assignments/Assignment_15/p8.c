#include<stdio.h>
void main(){

        int row;
        printf("Enter the n o of  rows : \n");
        scanf("%d",&row);
        int space=0;
        for(int i=1;i<=row;i++){

                int num=i;
                for(int j=1;j<=row;j++){

                        if(space>=j){

                                printf("\t");
                        }else{

                                printf("%d\t",num);
                                num++;
                        }
                }printf("\n\n");
                space++;
        }
}