#include<stdio.h>
void main(){

        int row,count=1;
        printf("Enter the no of rows:\n");
        scanf("%d",&row);
        for(int i=row;i>0;i--){

                int num=(count*count)+count*(row-count);
                for(int j=1;j<=i;j++){

                        printf("%d\t",num);
                        num-=count;
                }count++;
                printf("\n\n");
        }
}
