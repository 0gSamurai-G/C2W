#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=1;i<=row;i++){

                for(int j=0;j<row;j++){

                        if(j%2==0){

                                printf("%d\t",(i*i));
                        }else{

                                printf("%d\t",(i*i*i));
                        }
                }
                printf("\n\n");
        }
}
