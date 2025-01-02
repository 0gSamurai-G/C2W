#include<stdio.h>
void main(){

        int row,even=4,odd=6,num=1;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=1;i<=row;i++){

                for(int j=1;j<=row;j++){

                        if(row%2!=0){

                                if((i+j)%2==0){

                                        printf("%d\t",even);
                                        if(num==1){

                                                even+=4;
                                                num=0;
                                        }else{

                                                even+=2;
                                                num=1;
                                        }
                                }else{

                                        printf("%d\t",odd);
                                        odd+=3;
                                }
                        }else{

                                if(i%2!=0){

                                        if((i+j)%2==0){

                                                printf("%d\t",even);
                                                if(num==1){

                                                        even+=4;
                                                        num=0;
                                                }else{

                                                        even+=2;
                                                        num=1;
                                                }
                                        }else{

                                                printf("%d\t",odd);
                                                odd+=3;
                                        }
                                        }else{

                                                if((i+j)%2!=0){

                                                        printf("%d\t",even);
                                                        if(num==1){

                                                                even+=4;
                                                                num=0;
                                                        }else{

                                                                even+=2;
                                                                num=1;
                                                        }
                                                }else{

                                                        printf("%d\t",odd);
                                                        odd+=3;
                                                }
                                        }
                                }
                        }printf("\n\n");
                }
        }
