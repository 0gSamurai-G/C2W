#include<stdio.h>
void main(){

        int size,id;
        printf("Enter the size of an array: \n");
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++){
                printf("Enter the id of student %d : \n",i+1);
                scanf("%d",&arr[i]);
        }
        printf("Enter an id to serach :\n");
        scanf("%d",&id);
        for(int i=0;i<size;i++){

                if(id==(arr[i])){

                        printf("%d found at index %d\n",arr[i],i);
                }
        }
}
