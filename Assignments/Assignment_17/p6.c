#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=1;i<=row;i++){

                int num=1,alp=65;
                for(int j=1;j<=i;j++){

                        if((i==1)||(i%5==0)){

                                printf("%d\t",num);
                                num++;
                        }else if(i%3==0){

                                printf("%c\t",(96+i));
                        }else if(i%2==0){

                                printf("%c\t",alp);
                                alp++;
                        }
                }printf("\n\n");
        }
}
