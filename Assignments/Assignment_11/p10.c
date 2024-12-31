#include<stdio.h>
void main(){

        int size1,size2,even=0,odd=0;
        printf("Enter the size of arr1 and arr2 : \n");
        scanf("%d%d",&size1,&size2);
        int arr1[size1],arr2[size2];
        for(int i=0;i<size1;i++){

                printf("Enter the arr1 element %d : ",i+1);
                scanf("%d",&arr1[i]);
                if(i%2==0){

                        even+=arr1[i];
                }
        }
        for(int i=0;i<size2;i++){

                printf("Enter the arr2 element %d : \n",i+1);
                scanf("%d",&arr2[i]);
                if(i%2!=0){

                        odd+=arr2[i];
                }
        }
        printf("Even sum from 1st array : %d\n Odd sum from 2nd array : %d\n",even,odd);
}
