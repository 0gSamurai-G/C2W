#include<stdio.h>
void main(){

        int size,count=0;
        printf("Enter the size of array :\n");
        scanf("%d",&size);
        int arr[size],arr1[size];
        for(int i=0;i<size;i++){

                int temp,sum,fact,fact1=0;
                printf("Enter the arr element %d : ",i+1);
                scanf("%d",&arr[i]);
                temp=arr[i];
                while(temp>0){

                        fact=1;
                        sum=temp%10;
                        temp/=10;
                        for(int j=1;j<=sum;j++){

                                fact*=j;
                        }fact1+=fact;
                }arr1[i]=fact1;
                if((arr[i]==arr1[i])&&(arr[i]!=1)) count++;
        }if(count>0){

                printf("Array contains %d strong number",count);
        }else{

                printf("Array contains no strong numbers");
        }
}
