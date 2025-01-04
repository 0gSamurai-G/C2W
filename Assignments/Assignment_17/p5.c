#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=1;i<=row;i++){

                int alp=65;
                for(int j=1;j<=i;j++){

                        if(i%2!=0){

                                printf("%c\t",(96+i));
                        }else{

                                printf("%c\t",alp);
                                alp++;
                        }
                }printf("\n\n");
        }
}
