#include<stdio.h>
void main(){

        int row,space=0;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=1;i<=row;i++){

                int num=64+i;
                for(int j=1;j<=row;j++){

                        if(space>=j){

                                printf("\t");
                        }else{

                                if(row%2!=0){

                                        if(i%2!=0){

                                                if(j%2!=0){

                                                        printf("%c\t",num);
                                                }else{

                                                        printf("%d\t",num);
                                                }num++;
                                        }else{

                                                if(j%2==0){

                                                        printf("%d\t",num);
                                                }else{

                                                        printf("%c\t",num);
                                                }num++;
                                        }
                                }else{

                                        if(i%2!=0){

                                                if(j%2!=0){

                                                        printf("%d\t",num);
                                                }else{

                                                        printf("%c\t",num);
                                                }num++;
                                        }else{

                                                if(j%2==0){

                                                        printf("%c\t",num);
                                                }else{

                                                        printf("%d\t",num);
                                                }num++;
                                        }
                                }
                        }
                }printf("\n\n");
                space++;
        }

}
