#include<stdio.h>
#include<stdlib.h>

int* prime(int* arr1){

        int index2=0,size2=1,flag=1,index3=0;
        int* arr3=malloc(sizeof(int));
        while(*(arr1+index2)!='\0'){

                for(int i=2;i<(*(arr1+index2));i++){

                        if(*(arr1+index2)%i==0){

                                flag=0;
                                break;
                        }
                }if(flag==1){

                        arr3[index3]=*(arr1+index2);
                        size2++;
                        index3++;
                        int* arr3=realloc(arr3,size2*sizeof(int));
                }index2++;
        }arr3[index3]='\0';
        return arr3;
}

void main(){

        int size1,index1=0,num,i=0;
        printf("Enter the size of array:\n");
        scanf("%d",&size1);
        int* arr1=calloc(size1,sizeof(int));
        printf("Enter the elements of array:\n");
        for(i=0;i<size1;i++){

                scanf("%d",&num);
                arr1[i]=num;
        }arr1[i]='\0';
        int* arr2=prime(arr1);
        index1=0;
        while(*(arr2+index1)!='\0'){

                printf("|%d|",arr2[index1]);
                index1++;
        }printf("\n");
}