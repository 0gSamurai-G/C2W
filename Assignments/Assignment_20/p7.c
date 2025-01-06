#include<stdio.h>
void main(){

        int num,size=10;
        printf("Enter a number:\n");
        scanf("%d",&num);
        int arr[size];
        int *ptr=&arr[size];
        for(int i=0;i<10;i++){

                arr[i]=num*(i+1);
                printf("|%d|",*(arr+i));
        }printf("\n");
}
