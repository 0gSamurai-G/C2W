#include<stdio.h>
void main(){

        int row,num=1,count=1;
        printf("Enter the no of rows:\n");
        scanf("%d",&row);
        for(int i=row;i>0;i--){

                //num=count;
                for(int j=1;j<=i;j++){

                        if(row%2==0){

                                if(i%2==0){

                                        if(j%2!=0){

                                                printf("%c\t",(65+num));
                                        }else{

                                                num++;
                                                printf("%d\t",num);
                                        }
                                }else{

                                        printf("%d\t",(num));
                                }
                        }else{

                                if(i%2!=0){

                                        if(j%2!=0){

                                                printf("%d\t",num);
                                        }else{

                                                printf("%c\t",(65+num));
                                                num++;
                                        }
                                }else{

                                        printf("%d\t",num);
                                }
                        }
                }count++;
                printf("\n\n");
        }
}
