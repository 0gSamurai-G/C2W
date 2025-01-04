#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of row: \n");
        scanf("%d",&row);
        for(int i=1;i<=row;i++){

                int num=1;
                for(int j=1;j<=i;j++){

                        if(j%2==0){

                                printf("A\t");
                        }else{

                                printf("%d\t",num);
                        }num++;
                }printf("\n\n");
        }
}
