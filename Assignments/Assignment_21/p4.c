#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows:\n");
        scanf("%d",&row);
        int space=row-1;
        for(int i=1;i<=row;i++){

                int num=i,alp=65;
                for(int j=1;j<=row;j++){

                        if(j<=space){

                                printf("\t");
                        }else{

                                if(i%2!=0){

                                        printf("%d\t",num);
                                        num--;
                                }else{

                                        printf("%c\t",alp);
                                        alp++;
                                }
                        }
                }printf("\n\n");
                space--;
        }
}
