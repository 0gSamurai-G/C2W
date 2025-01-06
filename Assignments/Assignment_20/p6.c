#include<stdio.h>
void main(){

        int size,odd=0,even=0,ecount=0,ocount=0;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        int arr[size];
        printf("Enter the array elements:\n");
        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);
                if(arr[i]%2==0){

                        even++;
                }else{

                        odd++;
                }
        }int arre[even],arro[odd];
        for(int i=0;i<size;i++){

                if(arr[i]%2==0){

                        arre[ecount]=arr[i];
                        ecount++;
                }else{

                        arro[ocount]=arr[i];
                        ocount++;
                }

        }printf("Even element array:\n");
        for(int i=0;i<even;i++){

                printf("%d\t",arre[i]);
        }printf("\nOdd element array:\n");
        for(int i=0;i<odd;i++){

                printf("%d\t",arro[i]);
        }printf("\n");
}
