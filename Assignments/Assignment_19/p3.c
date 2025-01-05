#include<stdio.h>
void main(){

        int size,count=0;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++){

                int num=0;
                printf("Enter the arr element %d: ",i+1);
                scanf("%d",&arr[i]);
                for(int j=1;j<(arr[i]);j++){

                        if((arr[i])%j==0) num+=j;
                }if(num==(arr[i])) count++;
        }
        if(count>0){
                printf("\nArray contains %d perfect numbers",count);
        }else{

                printf("\nArray contains no perfect numbers");
        }
}
