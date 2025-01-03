#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        int size=(row*2)-1,num=1;
        for(int i=0;i<row;i++){

                for(int j=1;j<=size;j++){

                        if((j<(i+1))||(j>(size-i))){

                                printf("\t");
                        }else{

                                printf("%d\t",num);
                                num++;
                        }
                }printf("\n\n");
        }

}
