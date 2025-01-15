#include<stdio.h>
void main(){

        int size,correct=1;                                                                                                                                                                                            printf("Enter the size of array:\n");
        scanf("%d",&size);
        while(correct){

                if(size<=0){

                        printf("Invalid input!\nRenter the size of array:\n");
                        scanf("%d",&size);
                }else{correct=0;}
        }char arr[size],temp;
        printf("Enter the array elements:\n");
        for(int i=0;i<size;i++){

                getchar();
                scanf("%c",&arr[i]);
                if((arr[i]<=90)&&(arr[i]>=65)){

                        arr[i]+=32;
                }
        }for(int i=0;i<size;i++){

                for(int j=0;j<size-1;j++){

                        if(arr[j]>arr[j+1]){

                                temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;
                        }
                }
        }for(int i=0;i<size;i++){

                printf("%c ",arr[i]);
        }printf("\n");
}