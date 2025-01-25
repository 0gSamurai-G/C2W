#include<stdio.h>

int square(int num){

        return num*num;
}

void main(){

        int start,end;
        printf("Enter the start and end range :\n");
        scanf("%d%d",&start,&end);
        if(start>end){

                int temp=start;
                start=end;
                end=temp;
        }for(int i=start;i<=end;i++){

                printf("|%d|",square(i));
        }printf("\n");
}
