#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows:\n");
        scanf("%d",&row);
        int space=row-1,count=0;
        if(row%2==0) count=1;
        for(int i=1;i<=row;i++){

                int num=1;
                for(int j=1;j<=row;j++){

                         if(j<=space){

                                 printf("\t");
                         }else{

                                 if(j==row){

                                         printf("%d\t",(i*i));
                                 }else if(count==1){

                                         if(j%2!=0){

                                                 printf("%d\t",num);
                                                 num++;
                                         }else{

                                                 printf("%d\t",(num*num*num));
                                                 num++;
                                         }
                                 }else{

                                         if(j%2!=0){

                                                 printf("%d\t",(num*num*num));
                                                 num++;
                                         }else{

                                                 printf("%d\t",num);
                                                 num++i;
                                         }
                                 }
                         }
                }printf("\n\n");
                space--;
        }
}
