#include<stdio.h>
void main(){

        int size,even=0,odd=0;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++){

                printf("Enter the arr element %d : ",i+1);
                scanf("%d",&arr[i]);
                if(arr[i]%2==0){

                        even++;
                }else{

                        odd++;
                }
        }printf("Even element count: %d \nOdd element count: %d\n",even,odd);
}
