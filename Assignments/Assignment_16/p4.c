#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        int size=(row*2)-1,alp=65;
        for(int i=0;i<row;i++){

                for(int j=1;j<=size;j++){

                        if((j<row-i)||(j>row+i)){

                                printf("\t");
                        }else{

                                printf("%c\t",(alp+i));
                        }
                }printf("\n\n");
        }
}
