#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=0;i<row;i++){

                for(int j=0;j<row;j++){

                        if(row%2==0){

                                if(j%2==0){

                                        printf("%d\t",(65+j));
                                }else{

                                        printf("%c\t",(65+j));
                                }
                        }else{

                                printf("%c\t",(65+j));
                        }
                }
                printf("\n\n");
        }
}
