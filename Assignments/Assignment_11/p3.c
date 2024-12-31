#include<stdio.h>
void main(){

        int size1,size2,sum1=0,sum2=0;
        printf("Enter the size of 1st and 2nd  array : \n");
        scanf("%d\t%d",&size1,&size2);
        int arr1[size1],arr2[size2];
        for(int i=0;i<size1;i++){

                printf("Enter the arr1 element %d : ",i+1);
                scanf("%d",&arr1[i]);
                sum1+=(arr1[i]);
        }
        for(int i=0;i<size2;i++){

                printf("Enter the arr2 element %d : ",i+1);
                scanf("%d",&arr2[i]);
                sum2+=(arr2[i]);
        }
        for(int i=0;i<size1;i++){

                printf("%d\n",arr1[i]);
        }
        for(int i=0;i<size2;i++){

                printf("%d\n",arr2[i]);
        }
        if(sum1==sum2){

                printf("Sum of arrays is equal : %d\n",sum1);
        }else{

                printf("Sum of arrays is not equal\n");
        }
}
