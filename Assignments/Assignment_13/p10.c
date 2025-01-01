#include<stdio.h>
void main(){

        int row,count=0;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=row;i>0;i--){

                for(int j=1;j<=i;j++){

                        if(row%2==0){

                                if((i+j)%2!=0){

                                        printf("%d\t",(64+j+count));
                                }else{

                                        printf("%c\t",(64+j+count));
                                }
                        }else{

                                if((i+j)%2==0){

                                        printf("%c\t",(64+j+count));
                                }else{

                                        printf("%d\t",(64+j+count));
                                }
                        }
                }
                printf("\n\n");
                count++;
        }
}
