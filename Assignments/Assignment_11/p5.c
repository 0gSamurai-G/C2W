#include<stdio.h>
void main(){

        int size1,size2,count=0;
        printf("Enter the size of arr1 and arr2 : \n");
        scanf("%d%d",&size1,&size2);
        int arr1[size1],arr2[size2];
        for(int i=0;i<size1;i++){

                printf("Enter the element %d : ",i+1);
                scanf("%d",&arr1[i]);
        }
        for(int i=0;i<size2;i++){

                printf("Enter the element %d : ",i+1);
                scanf("%d",&arr2[i]);
                if(size1==size2){

                        if((arr1[i])==(arr2[i])){
                                count++;

                        }
                }
        }
        if(count==size1){

                printf("Arrays are equal!\n");
        }else{

                printf("Arrays are not equal!\n");
        }

}
