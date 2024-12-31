#include<stdio.h>
void main(){

        int size;
        printf("Enter the size : \n");
        scanf("%d",&size);
        int arr1[size],arr2[size];
        for(int i=0;i<size;i++){

                printf("Enter the element %d : ",i+1);
                scanf("%d",&arr1[i]);
        }
        for(int i=0;i<size;i++){

                arr2[i]=arr1[i];
                printf("%d\n",arr2[i]);
        }
}
