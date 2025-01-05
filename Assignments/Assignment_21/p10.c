#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows:\n");
        scanf("%d",&row);
        int space=row-1,num=1;
        for(int i=1;i<=row;i++){

                for(int j=1;j<=row;j++){

                        if(j<=space){

                                printf("\t");
                        }else{

                                if(i==1){
                                        printf("%d\t",num);
                                }else{
                                        printf("%d\t",num);
                                        if(j!=row) num+=row;
                                }
                        }
                }printf("\n\n");
                space--;
        }
}
