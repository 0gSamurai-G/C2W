#include<stdio.h>
void main(){

        int size,flag=0;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        int arr[size];
        printf("Enter the array elements:\n");
        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);
        }for(int i=0;i<size;i++){

                for(int j=i+1;j<size;j++){

                        if(arr[i]>arr[j]){                                                                                                                         
                                flag=1;
                        }else{

                                flag=0;
                                break;
                        }
                }(flag==1)?(printf("%d is a leader element\n",arr[i])):(printf("%d is not a leader element\n",arr[i]));
        }

}