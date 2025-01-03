#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        int space=0,num=row;
        for(int i=1;i<=row;i++){

                for(int j=1;j<=row;j++){

                        if(space>=j){

                                printf("\t");
                        }else{

                                printf("%d\t",num);
                        }
                }printf("\n\n");
                num--;
                space++;
        }
}
