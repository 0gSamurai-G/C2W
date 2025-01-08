#include<stdio.h>
void main(){

        int size,temp,correct=1;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        while(correct){

                if((size<=0)||(size==size/0)){

                        printf("Invalid input!\nRenter the size of array:\n");
                        getchar();
                        scanf("%d",&size);
                }else{correct=0;}
        }
        int arr[size];
        printf("Enter the array elements:\n");
        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);
        }for(int i=0;i<size;i++){

                for(int j=i+1;j<size;j++){

                        if(arr[i]<arr[j]){

                                temp=arr[j];
                                arr[j]=arr[i];
                                arr[i]=temp;
                        }
                }
        }for(int i=0;i<size;i++){

                printf("|%d|",arr[i]);
        }printf("\n");
}