#include<stdio.h>
void main(){

        int row,count=1,num=1;
        printf("Enter the no of rows:\n");
        scanf("%d",&row);
        for(int i=row;i>0;i--){

                num=count;
                for(int j=1;j<=i;j++){

                        if(row%2!=0){

                                if(j%2!=0){

                                        printf("%d\t",num);
                                }else{

                                        printf("%c\t",(64+num));
                                }
                        }else{

                                if(j%2!=0){

                                        printf("%c\t",(64+num));
                                }else{

                                        printf("%d\t",num);
                                }
                        }num++;

                }count++;
                printf("\n\n");
        }
}
