#include<stdio.h>
void main(){

        int size,start,end,count=0;
        printf("Enter the start of range:\n");
        scanf("%d",&start);
        printf("Enter the end of range:\n");
        scanf("%d",&end);
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        int arr1[size],arr2[count];
        printf("Enter the arr1 elements:\n");
        for(int i=0;i<size;i++){

                scanf("%d",&arr1[i]);
                if((arr1[i]>=start)&&(arr1[i]<=end)){

                        count++;
                        arr2[count-1]=arr1[i];
                }
        }if(count>0){
                printf("Elements of array in range %d to %d :",start,end);
                for(int i=0;i<count;i++){

                        printf("%d ",arr2[i]);
                }printf("\n");
        }else{

                printf("No elements found\n");
        }
}
