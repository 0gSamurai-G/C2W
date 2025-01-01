#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=0;i<row;i++){

                for(int j=0;j<row;j++){

                        if(i%2==0){

                                printf("%c\t",(96+row+j));
                        }else{

                                printf("%c\t",(96+(2*row)-j));
                        }
                }
                printf("\n\n");
        }
}
