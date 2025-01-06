#include<stdio.h>
void main(){

        int size;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        char arr[size];
        printf("Enter the elements:\n");
        for(int i=0;i<size;i++){

                getchar();
                scanf("%c",&arr[i]);
        }for(int i=1;i<=size;i++){

                for(int j=1;j<=i;j++){

                        if(arr[j-1]<10){
                                printf("%d\t",arr[j-1]);
                        }else{

                                printf("%c\t",arr[j-1]);
                        }
                }printf("\n\n");

        }
}
