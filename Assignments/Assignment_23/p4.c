#include<stdio.h>
void main(){

        int size,min,index=0,max,correct=1;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        while(correct){

                if((size<=1)){

                        printf("Invalid input!\nRenter the size of array\n");
                        getchar();
                        scanf("%d",&size);
                }else{correct=0;}
        }
        int arr[size];
        printf("Enter the array elements:\n");
        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);
        }min=arr[0];
        max=arr[0];
        for(int i=1;i<size;i++){

                if(arr[i]<min){
                        min=arr[i];
                        index=i;
                }
                if(arr[i]>max) max=arr[i];
        }if(index==0){

                arr[0]=max;
        }else{arr[index]=max;}
        min=arr[0];
        for(int i=1;i<size;i++){

                if(arr[i]<min) min=arr[i];
        }printf("\nSecond min:%d\n",min);
}
