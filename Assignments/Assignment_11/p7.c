#include<stdio.h>
void main(){

        int size1,size2,size3;
        printf("Enter the size of arr1 and arr2 : \n");
        scanf("%d%d",&size1,&size2);
        size3=size1+size2;
        int arr1[size1],arr2[size2],arr3[size3];
        for(int i=0;i<size1;i++){

                printf("Enter the arr1 element %d : ",i+1);
                scanf("%d",&arr1[i]);
        }
        for(int i=0;i<size2;i++){
                printf("Enter the arr2 element %d : ",i+1);
                scanf("%d",&arr2[i]);
        }
        for(int i=0;i<size3;i++){

                if(i<size1){

                        arr3[i]=arr1[i];
                }else{

                        arr3[i]=arr2[i-size1];
                }
                printf("%d\n",arr3[i]);
        }
}
