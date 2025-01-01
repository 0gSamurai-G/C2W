#include<stdio.h>
void main(){

        int row;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        for(int i=0;i<row;i++){
                int count=0;
                for(int j=0;j<row;j++){
                        if(j%2==0){

                                printf("%c\t",(64+row-count));
                                count++;
                        }else{

                                printf("%d\t",(i+1));
                        }
                }
                printf("\n");
        }
}
