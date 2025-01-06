#include<stdio.h>
void main(){

        int size,even=0,odd=0;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        int arr[size];
        printf("Enter the array elements:\n");
        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);
                if(arr[i]%2==0){

                        even+=((arr[i])*(arr[i]));
                }else{

                        odd+=((arr[i])*(arr[i]));
                }
        }printf("Difference: %d \n",(even-odd));
}
