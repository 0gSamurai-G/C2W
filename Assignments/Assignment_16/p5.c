#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        int size=(row*2)-1,num=1;
        for(int i=0;i<row;i++){

                num=1;
                for(int j=1;j<=size;j++){

                        if((j<row-i)||(j>row+i)){

                                printf("\t");
                        }else{

                                printf("%d\t",num);
                                if(j>=row){

                                        num--;
                                }else{

                                        num++;
                                }
                        }
                }printf("\n\n");
        }
}
