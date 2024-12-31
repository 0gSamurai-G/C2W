#include<stdio.h>
void main(){

        int size;
        printf("Enter the size : \n");
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++){

                printf("Enter the element %d : ",i+1);
                scanf("%d",&arr[i]);
        }
        for(int i=size-1;i>=0;i--){
                if(i%2==0){

                        printf("%d\n",arr[i]);
                }


        }
}
