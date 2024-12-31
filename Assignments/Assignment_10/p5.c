#include<stdio.h>
void main(){

        int size;
        printf("Enter the size of array : \n");
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++){

                printf("Enter the age: \n");
                scanf("%d",&arr[i]);
                while((arr[i])>5){

                        printf("Enter an age below 5!\n");
                        scanf("%d",&arr[i]);
                }
        }
        for(int i=0;i<size;i++){

                printf("%d\n",arr[i]);
        }
}
