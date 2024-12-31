#include<stdio.h>
void main(){

        int size1,size2;
        printf("Enter the size of arr1 and arr2 : \n");
        scanf("%d\t%d",&size1,&size2);
        int arr1[size1],arr2[size2];
        for(int i=0;i<size1;i++){

                printf("Enter the element %d : ",i+1);
                scanf("%d",&arr1[i]);
        }
        for(int i=0;i<size2;i++){

                printf("Enter the element %d : ",i+1);
                scanf("%d",&arr2[i]);
        }
        if(size1==size2){

                printf("Same size!\n");
        }else{

                printf("Not same size!\n");
        }
}
