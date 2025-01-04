#include<stdio.h>
void main(){

        int row,num,count=1,num1=1;
        printf("Enter the no of rows :\n");
        scanf("%d",&row);
        for(int i=row;i>0;i--){

                num=count;
                for(int j=1;j<=i;j++){

                        if(row%2!=0){

                                if(i%2!=0){

                                        if(j%2!=0){

                                                printf("%d\t",num);
                                                num++;
                                        }else{

                                                printf("%c\t",(64+num));
                                        }
                                }else{

                                        if(j%2!=0){

                                                printf("%c\t",(65+count));
                                                num++;
                                        }else{

                                                printf("%d\t",num);
                                        }
                                }
                        }else{

                                if(i%2==0){

                                        if(j%2!=0){

                                                printf("%c\t",(65+num1));

                                        }else{

                                                num1++;
                                                printf("%d\t",num1);

                                        }
                                }else{

                                        if(j%2!=0){

                                                printf("%d\t",(num1));

                                        }else{

                                                printf("%c\t",(65+num1));
                                                num1++;


                                        }
                                }
                        }
                }printf("\n\n");
                count++;
        }
}
