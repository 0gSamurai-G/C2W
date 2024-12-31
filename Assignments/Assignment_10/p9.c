#include<stdio.h>
void main(){

        int size,index;
        printf("Enter the size ; \n");
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++){

                printf("Enter the element %d : ",i+1);
                scanf("%d",&arr[i]);
        }
        printf("Enter the index to display list: ");
        scanf("%d",&index);
        while(index>=size){

                printf("Enter the correct index : ");
                scanf("%d",&index);
        }
        for(int i=0;i<=index;i++){

                printf("%d\n",arr[i]);
        }
}
