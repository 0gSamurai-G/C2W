#include<stdio.h>
void main(){

        int size;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++){

                printf("Enter the arr element %d :",i+1);
                scanf("%d",&arr[i]);
        }
        printf("Prime no. in array are:\n");
        for(int i=0;i<size;i++){

                int count=0;
                for(int j=2;j<arr[i];j++){

                        if((arr[i])%j==0){

                                count++;

                        }

                }if(count==0) printf("%d\n",arr[i]);
        }


}
