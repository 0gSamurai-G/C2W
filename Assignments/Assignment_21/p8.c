#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows:\n");
        scanf("%d",&row);
        int space=row-1;
        for(int i=1;i<=row;i++){

                int num=i,num1=0;
                for(int j=1;j<=row;j++){

                        if(j<=space){

                                printf("\t");
                        }else{

                                num1+=num;
                                printf("%d\t",num1);
                        }
                }printf("\n\n");
                space--;
        }
}
