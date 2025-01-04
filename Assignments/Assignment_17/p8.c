#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=1;i<=row;i++){

                for(int j=1;j<=i;j++){

                        if(i%3==0){

                                if(j%2==0){

                                        printf("%c\t",(64+j));
                                }else{

                                        printf("%d\t",j);
                                }
                        }else{

                                printf("%d\t",j);
                        }
                }printf("\n\n");
        }
}
