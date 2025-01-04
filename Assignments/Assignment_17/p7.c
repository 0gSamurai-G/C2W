#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=1;i<=row;i++){

                for(int j=1;j<=i;j++){

                        if(i%5==0){

                                printf("5\t");
                        }else if(i%2!=0){

                                printf("1\t");
                        }else{

                                printf("0\t");
                        }
                }printf("\n\n");
        }
}
