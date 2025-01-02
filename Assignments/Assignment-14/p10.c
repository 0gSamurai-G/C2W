#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=1;i<=row;i++){

                for(int j=1;j<=row;j++){

                        if((i==1)||(i==row)){

                                if((j>1)&&(j<row)){

                                        printf("0\t");
                                }else{

                                        printf("1\t");
                                }
                        }else{

                                if((j>1)&&(j<row)){

                                        printf("1\t");
                                }else{

                                        printf("0\t");
                                }
                        }
                }printf("\n\n");
        }
}
