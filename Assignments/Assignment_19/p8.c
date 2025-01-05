#include<stdio.h>
void main(){

        int size,count=0;
        printf("Enter the size of array: \n");
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++){

                int temp,sum=0;
                printf("Enter the arr element %d: ",i+1);
                scanf("%d",&arr[i]);
                temp=arr[i];
                while(temp>0){

                        sum=((sum*10)+(temp%10));
                        temp/=10;
                }
                if(arr[i]==sum) count++;
        }if(count>0){

                printf("Array contains %d no. palindrome\n",count);
        }else{

                printf("Array contains no palindrome\n");
        }
}
