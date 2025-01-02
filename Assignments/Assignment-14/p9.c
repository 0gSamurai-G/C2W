#include<stdio.h>
void main(){

        int row,alp=64;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=1;i<=row;i++){

                int count=i;
                for(int j=1;j<=row;j++){

                        if((i+j)%2==0){

                                printf("%d\t",(count));
                                count++;
                        }else{

                                printf("%c\t",(alp+count));
                                count++;
                        }
                }printf("\n\n");
        }
}
