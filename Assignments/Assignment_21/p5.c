#include<stdio.h>
void main(){

        int row,alp,num1;
        printf("Enter the no of rows:\n");
        scanf("%d",&row);
        int space=row-1;
        if(row%2!=0){

                num1=row+1;
                 alp=64+(num1/2);
        }else{

                alp=64+(row/2);
        }
        for(int i=1;i<=row;i++){

                int num=i,count=0;
                for(int j=1;j<=row;j++){

                        if(j<=space){

                                printf("\t");
                        }else{

                                if(i%2!=0){

                                        printf("%d\t",num);
                                        num--;
                                }else{

                                        printf("%c\t",(alp+count));
                                        count++;
                                }
                        }
                }printf("\n\n");
                space--;
                if(i%2==0) alp--;
        }
}
