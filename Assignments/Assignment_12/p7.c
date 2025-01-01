#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        int count=(row*row)+64;
        for(int i=0;i<row;i++){

                for(int j=0;j<row;j++){

                        if(j%2==0){

                                printf("%c\t",(count));
                                count--;
                        }else{

                                printf("%d\t",(count-64));
                                count--;
                        }
                }
                printf("\n\n");
        }
}
