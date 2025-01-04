#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows:\n");
        scanf("%d",&row);
        for(int i=row;i>0;i--){

                int num=row,alp=64+row;
                for(int j=1;j<=i;j++){

                        if(row%2==0){

                                if(j%2!=0){

                                        printf("%c\t",alp);
                                }else{

                                        printf("%d\t",num);
                                }alp--;
                                num--;
                        }else{

                                if(j%2!=0){

                                        printf("%d\t",num);
                                }else{

                                        printf("%c\t",alp);
                                }alp--;
                                num--;
                        }
                }printf("\n\n");
        }
}
