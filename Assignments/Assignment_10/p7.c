#include<stdio.h>
void main(){

        int size;
        printf("Enter the size: \n");
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++){

                printf("Enter the element: \n");
                scanf("%d",&arr[i]);
                if((arr[i])%2==0){

                        arr[i]=(arr[i])*(arr[i]);
                }else{

                        arr[i]=(arr[i])*(arr[i])*(arr[i]);
                }
        }
        for(int i=0;i<size;i++){

                printf("%d\t",arr[i]);
        }

}
